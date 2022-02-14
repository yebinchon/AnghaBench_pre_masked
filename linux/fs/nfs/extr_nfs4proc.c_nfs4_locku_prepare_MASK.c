
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_task {int * tk_action; } ;
struct TYPE_11__ {int seq_res; } ;
struct TYPE_10__ {int seqid; int seq_args; } ;
struct nfs4_unlockdata {TYPE_5__ res; TYPE_4__ arg; TYPE_3__* server; int timestamp; TYPE_2__* lsp; TYPE_6__* l_ctx; } ;
struct TYPE_12__ {TYPE_1__* open_context; } ;
struct TYPE_9__ {int nfs_client; } ;
struct TYPE_8__ {int ls_flags; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rpc_task*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *,struct rpc_task*) ;
 scalar_t__ FUNC_2 (struct rpc_task*,TYPE_6__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct rpc_task*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct rpc_task *VAR_3, void *VAR_4)
{
 struct nfs4_unlockdata *VAR_5 = VAR_4;

 if (FUNC_5(VAR_0, &VAR_5->l_ctx->open_context->flags) &&
  FUNC_2(VAR_3, VAR_5->l_ctx))
  return;

 if (FUNC_4(VAR_5->arg.seqid, VAR_3) != 0)
  goto out_wait;
 if (FUNC_5(VAR_1, &VAR_5->lsp->ls_flags) == 0) {

  goto out_no_action;
 }
 VAR_5->timestamp = VAR_2;
 if (FUNC_1(VAR_5->server->nfs_client,
    &VAR_5->arg.seq_args,
    &VAR_5->res.seq_res,
    VAR_3) != 0)
  FUNC_3(VAR_5->arg.seqid);
 return;
out_no_action:
 VAR_3->tk_action = ((void*)0);
out_wait:
 FUNC_0(VAR_3, &VAR_5->res.seq_res);
}
