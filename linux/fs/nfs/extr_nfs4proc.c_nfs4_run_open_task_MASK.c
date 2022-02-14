
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task_setup {int flags; int workqueue; struct nfs4_opendata* callback_data; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; struct nfs_openres* rpc_resp; struct nfs_openargs* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_openres {int seq_res; } ;
struct nfs_openargs {int seq_args; } ;
struct nfs_open_context {int dummy; } ;
struct nfs4_opendata {int rpc_done; int rpc_status; int cancelled; int is_recover; int kref; TYPE_1__* owner; struct nfs_openres o_res; struct nfs_openargs o_arg; int dir; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int so_cred; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_0 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct nfs4_opendata*,struct nfs_open_context*) ;
 int FUNC_7 (struct rpc_task*) ;
 struct rpc_task* FUNC_8 (struct rpc_task_setup*) ;
 int FUNC_9 (struct rpc_task*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct nfs4_opendata *VAR_6,
         struct nfs_open_context *VAR_7)
{
 struct inode *VAR_8 = FUNC_3(VAR_6->dir);
 struct nfs_server *VAR_9 = FUNC_1(VAR_8);
 struct nfs_openargs *VAR_10 = &VAR_6->o_arg;
 struct nfs_openres *VAR_11 = &VAR_6->o_res;
 struct rpc_task *VAR_12;
 struct rpc_message VAR_13 = {
  .rpc_proc = &VAR_4[VAR_0],
  .rpc_argp = VAR_10,
  .rpc_resp = VAR_11,
  .rpc_cred = VAR_6->owner->so_cred,
 };
 struct rpc_task_setup VAR_14 = {
  .rpc_client = VAR_9->client,
  .rpc_message = &VAR_13,
  .callback_ops = &VAR_3,
  .callback_data = VAR_6,
  .workqueue = VAR_5,
  .flags = VAR_1,
 };
 int VAR_15;

 FUNC_4(&VAR_6->kref);
 VAR_6->rpc_done = 0;
 VAR_6->rpc_status = 0;
 VAR_6->cancelled = 0;
 VAR_6->is_recover = 0;
 if (!VAR_7) {
  FUNC_5(&VAR_10->seq_args, &VAR_11->seq_res, 1, 1);
  VAR_6->is_recover = 1;
  VAR_14.flags |= VAR_2;
 } else {
  FUNC_5(&VAR_10->seq_args, &VAR_11->seq_res, 1, 0);
  FUNC_6(VAR_6, VAR_7);
 }
 VAR_12 = FUNC_8(&VAR_14);
 if (FUNC_0(VAR_12))
  return FUNC_2(VAR_12);
 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15 != 0) {
  VAR_6->cancelled = 1;
  FUNC_10();
 } else
  VAR_15 = VAR_6->rpc_status;
 FUNC_7(VAR_12);

 return VAR_15;
}
