
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {int nfs_dns_resolve; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct net*) ;
 int FUNC_3 (int ,struct net*) ;
 struct nfs_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6(struct net *VAR_2)
{
 int VAR_3;
 struct nfs_net *VAR_4 = FUNC_4(VAR_2, VAR_1);

 VAR_4->nfs_dns_resolve = FUNC_2(&VAR_0, VAR_2);
 if (FUNC_0(VAR_4->nfs_dns_resolve))
  return FUNC_1(VAR_4->nfs_dns_resolve);

 VAR_3 = FUNC_5(VAR_2, VAR_4->nfs_dns_resolve);
 if (VAR_3)
  goto err_reg;
 return 0;

err_reg:
 FUNC_3(VAR_4->nfs_dns_resolve, VAR_2);
 return VAR_3;
}
