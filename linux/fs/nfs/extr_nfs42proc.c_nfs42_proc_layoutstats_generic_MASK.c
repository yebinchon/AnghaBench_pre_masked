
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task_setup {int flags; struct nfs42_layoutstat_data* callback_data; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct TYPE_4__ {int seq_res; } ;
struct TYPE_3__ {int seq_args; int inode; } ;
struct nfs42_layoutstat_data {TYPE_2__ res; TYPE_1__ args; int inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct rpc_task*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nfs42_layoutstat_data*) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int * VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rpc_task*) ;
 struct rpc_task* FUNC_6 (struct rpc_task_setup*) ;

int FUNC_7(struct nfs_server *VAR_5,
       struct nfs42_layoutstat_data *VAR_6)
{
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_4[VAR_1],
  .rpc_argp = &VAR_6->args,
  .rpc_resp = &VAR_6->res,
 };
 struct rpc_task_setup VAR_8 = {
  .rpc_client = VAR_5->client,
  .rpc_message = &VAR_7,
  .callback_ops = &VAR_3,
  .callback_data = VAR_6,
  .flags = VAR_2,
 };
 struct rpc_task *VAR_9;

 VAR_6->inode = FUNC_4(VAR_6->args.inode);
 if (!VAR_6->inode) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }
 FUNC_3(&VAR_6->args.seq_args, &VAR_6->res.seq_res, 0, 0);
 VAR_9 = FUNC_6(&VAR_8);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 FUNC_5(VAR_9);
 return 0;
}
