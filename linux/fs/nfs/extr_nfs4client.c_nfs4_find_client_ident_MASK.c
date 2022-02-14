
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {int nfs_client_lock; int cb_ident_idr; } ;
struct nfs_client {int cl_count; } ;
struct net {int dummy; } ;


 struct nfs_client* FUNC_0 (int *,int) ;
 struct nfs_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct nfs_client *
FUNC_5(struct net *VAR_1, int VAR_2)
{
 struct nfs_client *VAR_3;
 struct nfs_net *VAR_4 = FUNC_1(VAR_1, VAR_0);

 FUNC_3(&VAR_4->nfs_client_lock);
 VAR_3 = FUNC_0(&VAR_4->cb_ident_idr, VAR_2);
 if (VAR_3)
  FUNC_2(&VAR_3->cl_count);
 FUNC_4(&VAR_4->nfs_client_lock);
 return VAR_3;
}
