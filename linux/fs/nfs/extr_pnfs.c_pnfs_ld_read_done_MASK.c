
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_1__* mds_ops; int pnfs_error; int task; } ;
struct TYPE_2__ {int (* rpc_release ) (struct nfs_pgio_header*) ;int (* rpc_call_done ) (int *,struct nfs_pgio_header*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nfs_pgio_header*) ;
 int FUNC_2 (int *,struct nfs_pgio_header*) ;
 int FUNC_3 (struct nfs_pgio_header*) ;
 int FUNC_4 (struct nfs_pgio_header*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct nfs_pgio_header *VAR_0)
{
 if (FUNC_0(!VAR_0->pnfs_error))
  VAR_0->mds_ops->rpc_call_done(&VAR_0->task, VAR_0);
 FUNC_4(VAR_0, VAR_0->pnfs_error);
 if (FUNC_5(VAR_0->pnfs_error))
  FUNC_1(VAR_0);
 VAR_0->mds_ops->rpc_release(VAR_0);
}
