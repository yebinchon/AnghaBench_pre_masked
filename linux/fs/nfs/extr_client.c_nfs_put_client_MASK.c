
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_net {int nfs_client_lock; } ;
struct nfs_client {TYPE_1__* rpc_ops; int cl_superblocks; int cl_share_link; int cl_count; int cl_net; } ;
struct TYPE_2__ {int (* free_client ) (struct nfs_client*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nfs_net* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nfs_client*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfs_client*) ;

void FUNC_8(struct nfs_client *VAR_1)
{
 struct nfs_net *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_3(VAR_1->cl_net, VAR_0);

 if (FUNC_5(&VAR_1->cl_count, &VAR_2->nfs_client_lock)) {
  FUNC_1(&VAR_1->cl_share_link);
  FUNC_4(VAR_1);
  FUNC_6(&VAR_2->nfs_client_lock);

  FUNC_0(!FUNC_2(&VAR_1->cl_superblocks));

  VAR_1->rpc_ops->free_client(VAR_1);
 }
}
