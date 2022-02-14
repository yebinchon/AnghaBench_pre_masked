
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nfs_net {int nfs_dns_resolve; } ;
struct nfs_dns_ent {char* hostname; size_t namelen; size_t addrlen; int h; int addr; } ;
struct net {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (int ,struct nfs_dns_ent*,struct nfs_dns_ent**) ;
 int FUNC_2 (struct sockaddr*,int *,size_t) ;
 struct nfs_net* FUNC_3 (struct net*,int ) ;
 int VAR_3 ;

ssize_t FUNC_4(struct net *VAR_4, char *VAR_5,
  size_t VAR_6, struct sockaddr *VAR_7, size_t VAR_8)
{
 struct nfs_dns_ent VAR_9 = {
  .hostname = VAR_5,
  .namelen = VAR_6,
 };
 struct nfs_dns_ent *VAR_10 = ((void*)0);
 ssize_t VAR_11;
 struct nfs_net *VAR_12 = FUNC_3(VAR_4, VAR_3);

 VAR_11 = FUNC_1(VAR_12->nfs_dns_resolve, &VAR_9, &VAR_10);
 if (VAR_11 == 0) {
  if (VAR_8 >= VAR_10->addrlen) {
   FUNC_2(VAR_7, &VAR_10->addr, VAR_10->addrlen);
   VAR_11 = VAR_10->addrlen;
  } else
   VAR_11 = -VAR_1;
  FUNC_0(&VAR_10->h, VAR_12->nfs_dns_resolve);
 } else if (VAR_11 == -VAR_0)
  VAR_11 = -VAR_2;
 return VAR_11;
}
