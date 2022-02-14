
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task_setup {int flags; int workqueue; struct nfs4_opendata* callback_data; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; TYPE_3__* rpc_resp; TYPE_2__* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct TYPE_6__ {int seq_res; } ;
struct TYPE_5__ {int seq_args; } ;
struct nfs4_opendata {int rpc_done; int rpc_status; int cancelled; int timestamp; int kref; int is_recover; TYPE_3__ c_res; TYPE_2__ c_arg; TYPE_1__* owner; int dir; } ;
struct TYPE_4__ {int so_cred; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_0 ;
 struct nfs_server* FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct rpc_task*) ;
 struct rpc_task* FUNC_7 (struct rpc_task_setup*) ;
 int FUNC_8 (struct rpc_task*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct nfs4_opendata *VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_1(FUNC_3(VAR_6->dir));
 struct rpc_task *VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_4[VAR_0],
  .rpc_argp = &VAR_6->c_arg,
  .rpc_resp = &VAR_6->c_res,
  .rpc_cred = VAR_6->owner->so_cred,
 };
 struct rpc_task_setup VAR_10 = {
  .rpc_client = VAR_7->client,
  .rpc_message = &VAR_9,
  .callback_ops = &VAR_3,
  .callback_data = VAR_6,
  .workqueue = VAR_5,
  .flags = VAR_1,
 };
 int VAR_11;

 FUNC_5(&VAR_6->c_arg.seq_args, &VAR_6->c_res.seq_res, 1,
    VAR_6->is_recover);
 FUNC_4(&VAR_6->kref);
 VAR_6->rpc_done = 0;
 VAR_6->rpc_status = 0;
 VAR_6->timestamp = VAR_2;
 VAR_8 = FUNC_7(&VAR_10);
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);
 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11 != 0) {
  VAR_6->cancelled = 1;
  FUNC_9();
 } else
  VAR_11 = VAR_6->rpc_status;
 FUNC_6(VAR_8);
 return VAR_11;
}
