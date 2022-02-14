
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * rpc_proc; } ;
struct rpc_task {int * tk_action; TYPE_2__ tk_msg; } ;
struct nfs_delegation {int dummy; } ;
struct nfs_client {TYPE_4__* cl_mvops; int cl_clientid; } ;
struct nfs4_state_owner {TYPE_1__* so_server; } ;
struct TYPE_14__ {int seq_res; } ;
struct TYPE_13__ {int claim; int open_flags; int createmode; int seqid; int seq_args; TYPE_3__* server; int * open_bitmap; int clientid; int fmode; } ;
struct nfs4_opendata {TYPE_6__ o_res; TYPE_7__* state; TYPE_5__ o_arg; int timestamp; struct nfs4_state_owner* owner; } ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;
struct TYPE_15__ {int inode; } ;
struct TYPE_12__ {scalar_t__ minor_version; } ;
struct TYPE_11__ {int nfs_client; } ;
struct TYPE_9__ {struct nfs_client* nfs_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct nfs_delegation*,int ,int) ;
 int VAR_6 ;
 struct nfs_delegation* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct nfs_client*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (struct rpc_task*,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,struct rpc_task*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_11(struct rpc_task *VAR_9, void *VAR_10)
{
 struct nfs4_opendata *VAR_11 = VAR_10;
 struct nfs4_state_owner *VAR_12 = VAR_11->owner;
 struct nfs_client *VAR_13 = VAR_12->so_server->nfs_client;
 enum open_claim_type4 VAR_14 = VAR_11->o_arg.claim;

 if (FUNC_7(VAR_11->o_arg.seqid, VAR_9) != 0)
  goto out_wait;




 if (VAR_11->state != ((void*)0)) {
  struct nfs_delegation *VAR_15;

  if (FUNC_0(VAR_11->state, VAR_11->o_arg.fmode,
     VAR_11->o_arg.open_flags, VAR_14))
   goto out_no_action;
  FUNC_8();
  VAR_15 = FUNC_2(VAR_11->state->inode);
  if (FUNC_1(VAR_15, VAR_11->o_arg.fmode, VAR_14))
   goto unlock_no_action;
  FUNC_9();
 }

 VAR_11->o_arg.clientid = VAR_13->cl_clientid;
 switch (VAR_14) {
 default:
  break;
 case 128:
 case 131:
 case 130:
  VAR_11->o_arg.open_bitmap = &VAR_7[0];

 case 129:
  VAR_9->tk_msg.rpc_proc = &VAR_8[VAR_4];
 }
 VAR_11->timestamp = VAR_6;
 if (FUNC_5(VAR_11->o_arg.server->nfs_client,
    &VAR_11->o_arg.seq_args,
    &VAR_11->o_res.seq_res,
    VAR_9) != 0)
  FUNC_6(VAR_11->o_arg.seqid);


 VAR_11->o_arg.createmode = VAR_3;
 if (VAR_11->o_arg.open_flags & VAR_5) {
  VAR_11->o_arg.createmode = VAR_0;
  if (FUNC_3(VAR_13))
   VAR_11->o_arg.createmode = VAR_2;
  else if (VAR_13->cl_mvops->minor_version > 0)
   VAR_11->o_arg.createmode = VAR_1;
 }
 return;
unlock_no_action:
 FUNC_10(VAR_11->state);
 FUNC_9();
out_no_action:
 VAR_9->tk_action = ((void*)0);
out_wait:
 FUNC_4(VAR_9, &VAR_11->o_res.seq_res);
}
