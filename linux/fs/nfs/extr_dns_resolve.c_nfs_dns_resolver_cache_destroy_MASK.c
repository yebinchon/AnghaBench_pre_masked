
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {int nfs_dns_resolve; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ,struct net*) ;
 struct nfs_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_0 ;

void FUNC_3(struct net *VAR_1)
{
 struct nfs_net *VAR_2 = FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_1, VAR_2->nfs_dns_resolve);
 FUNC_0(VAR_2->nfs_dns_resolve, VAR_1);
}
