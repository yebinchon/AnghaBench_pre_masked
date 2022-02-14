
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_5__ {TYPE_3__* context; int lock_context; int stateid; int seq_args; } ;
struct TYPE_6__ {int seq_res; } ;
struct nfs_pgio_header {TYPE_1__ args; int rw_mode; TYPE_2__ res; int inode; } ;
struct TYPE_8__ {int nfs_client; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rpc_task *VAR_2,
          struct nfs_pgio_header *VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_3->inode)->nfs_client,
   &VAR_3->args.seq_args,
   &VAR_3->res.seq_res,
   VAR_2))
  return 0;
 if (FUNC_1(&VAR_3->args.stateid, VAR_3->args.context,
    VAR_3->args.lock_context,
    VAR_3->rw_mode) == -VAR_0)
  return -VAR_0;
 if (FUNC_4(FUNC_3(VAR_1, &VAR_3->args.context->flags)))
  return -VAR_0;
 return 0;
}
