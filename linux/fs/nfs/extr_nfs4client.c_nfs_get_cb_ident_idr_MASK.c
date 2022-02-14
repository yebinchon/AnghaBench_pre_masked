
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_net {int nfs_client_lock; int cb_ident_idr; } ;
struct nfs_client {int cl_cb_ident; TYPE_1__* rpc_ops; int cl_net; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nfs_client*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct nfs_net* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nfs_client *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct nfs_net *VAR_6 = FUNC_3(VAR_3->cl_net, VAR_2);

 if (VAR_3->rpc_ops->version != 4 || VAR_4 != 0)
  return VAR_5;
 FUNC_1(VAR_0);
 FUNC_4(&VAR_6->nfs_client_lock);
 VAR_5 = FUNC_0(&VAR_6->cb_ident_idr, VAR_3, 1, 0, VAR_1);
 if (VAR_5 >= 0)
  VAR_3->cl_cb_ident = VAR_5;
 FUNC_5(&VAR_6->nfs_client_lock);
 FUNC_2();
 return VAR_5 < 0 ? VAR_5 : 0;
}
