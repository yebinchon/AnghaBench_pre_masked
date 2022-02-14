
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int flags; int priority; struct rpc_clnt* rpc_client; int workqueue; struct nfs_commit_data* callback_data; struct rpc_call_ops const* callback_ops; struct rpc_message* rpc_message; int * task; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; int * rpc_resp; int * rpc_argp; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_call_ops {int dummy; } ;
struct nfs_rpc_ops {int (* commit_setup ) (struct nfs_commit_data*,struct rpc_message*,struct rpc_clnt**) ;} ;
struct nfs_commit_data {int task; int cred; int res; int args; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct rpc_task*) ;
 struct rpc_task* FUNC_5 (struct rpc_task_setup*) ;
 int FUNC_6 (struct rpc_task*) ;
 int FUNC_7 (struct nfs_commit_data*,struct rpc_message*,struct rpc_clnt**) ;
 int FUNC_8 (struct nfs_commit_data*) ;

int FUNC_9(struct rpc_clnt *VAR_3, struct nfs_commit_data *VAR_4,
   const struct nfs_rpc_ops *VAR_5,
   const struct rpc_call_ops *VAR_6,
   int VAR_7, int VAR_8)
{
 struct rpc_task *VAR_9;
 int VAR_10 = FUNC_3(VAR_7);
 struct rpc_message VAR_11 = {
  .rpc_argp = &VAR_4->args,
  .rpc_resp = &VAR_4->res,
  .rpc_cred = VAR_4->cred,
 };
 struct rpc_task_setup VAR_12 = {
  .task = &VAR_4->task,
  .rpc_client = VAR_3,
  .rpc_message = &VAR_11,
  .callback_ops = VAR_6,
  .callback_data = VAR_4,
  .workqueue = VAR_2,
  .flags = VAR_1 | VAR_8,
  .priority = VAR_10,
 };

 VAR_5->commit_setup(VAR_4, &VAR_11, &VAR_12.rpc_client);
 FUNC_8(VAR_4);

 FUNC_2("NFS: initiated commit call\n");

 VAR_9 = FUNC_5(&VAR_12);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 if (VAR_7 & VAR_0)
  FUNC_6(VAR_9);
 FUNC_4(VAR_9);
 return 0;
}
