
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; } ;
struct nfs_pgio_header {TYPE_2__* mds_ops; int pnfs_error; int task; TYPE_1__ res; scalar_t__ mds_offset; int lseg; int inode; } ;
struct TYPE_4__ {int (* rpc_release ) (struct nfs_pgio_header*) ;int (* rpc_call_done ) (int *,struct nfs_pgio_header*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nfs_pgio_header*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *,struct nfs_pgio_header*) ;
 int FUNC_4 (struct nfs_pgio_header*) ;
 int FUNC_5 (struct nfs_pgio_header*,int ) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct nfs_pgio_header *VAR_0)
{
 if (FUNC_0(!VAR_0->pnfs_error)) {
  FUNC_2(VAR_0->inode, VAR_0->lseg,
    VAR_0->mds_offset + VAR_0->res.count);
  VAR_0->mds_ops->rpc_call_done(&VAR_0->task, VAR_0);
 }
 FUNC_5(VAR_0, VAR_0->pnfs_error);
 if (FUNC_6(VAR_0->pnfs_error))
  FUNC_1(VAR_0);
 VAR_0->mds_ops->rpc_release(VAR_0);
}
