#define maxl 1000
int fa[maxl], v[maxl];
inline void init(int n){
    for(int i=1;i<=n;++i){
        fa[i]=i;
        v[i]=1;
    }
}
int find(int x){
    return x==fa[x]?x:(fa[x]=find(fa[x]));
}
inline void merge(int i, int j){
    int x=find(i),y=find(j);
    if (v[x]<=v[y]) fa[x]=y;
    else fa[y]=x;
    if (v[x]==v[y]&&x!=y) v[y]++;
}
