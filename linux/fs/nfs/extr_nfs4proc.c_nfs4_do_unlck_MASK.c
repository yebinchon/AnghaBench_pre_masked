
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task_setup {struct nfs4_unlockdata* callback_data; int rpc_client; int flags; int workqueue; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_3__* rpc_resp; TYPE_2__* rpc_argp; int rpc_cred; int * rpc_proc; } ;
struct nfs_seqid {int dummy; } ;
struct nfs_open_context {int flags; int cred; } ;
struct TYPE_7__ {int seq_res; } ;
struct TYPE_6__ {int seq_args; } ;
struct nfs4_unlockdata {TYPE_3__ res; TYPE_2__ arg; } ;
struct nfs4_lock_state {TYPE_1__* ls_state; } ;
struct file_lock {int fl_flags; int fl_type; } ;
struct TYPE_8__ {int nfs_client; } ;
struct TYPE_5__ {int inode; } ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfs4_unlockdata* FUNC_3 (struct file_lock*,struct nfs_open_context*,struct nfs4_lock_state*,struct nfs_seqid*) ;
 int FUNC_4 (int *,int *,int,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int ,int ,int *,struct rpc_message*) ;
 int FUNC_6 (struct nfs_seqid*) ;
 int VAR_9 ;
 struct rpc_task* FUNC_7 (struct rpc_task_setup*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static struct rpc_task *FUNC_9(struct file_lock *VAR_10,
  struct nfs_open_context *VAR_11,
  struct nfs4_lock_state *VAR_12,
  struct nfs_seqid *VAR_13)
{
 struct nfs4_unlockdata *VAR_14;
 struct rpc_message VAR_15 = {
  .rpc_proc = &VAR_8[VAR_3],
  .rpc_cred = VAR_11->cred,
 };
 struct rpc_task_setup VAR_16 = {
  .rpc_client = FUNC_1(VAR_12->ls_state->inode),
  .rpc_message = &VAR_15,
  .callback_ops = &VAR_7,
  .workqueue = VAR_9,
  .flags = VAR_6,
 };

 FUNC_5(FUNC_2(VAR_12->ls_state->inode)->nfs_client,
  VAR_5, &VAR_16.rpc_client, &VAR_15);




 VAR_10->fl_type = VAR_2;
 if (VAR_10->fl_flags & VAR_1)
  FUNC_8(VAR_4, &VAR_11->flags);

 VAR_14 = FUNC_3(VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_13);
  return FUNC_0(-VAR_0);
 }

 FUNC_4(&VAR_14->arg.seq_args, &VAR_14->res.seq_res, 1, 0);
 VAR_15.rpc_argp = &VAR_14->arg;
 VAR_15.rpc_resp = &VAR_14->res;
 VAR_16.callback_data = VAR_14;
 return FUNC_7(&VAR_16);
}
