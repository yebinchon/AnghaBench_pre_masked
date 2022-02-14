
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task_setup {struct nfs42_offloadcancel_data* callback_data; int flags; int workqueue; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; int rpc_cred; int * rpc_proc; } ;
struct nfs_server {int caps; int client; } ;
struct nfs_open_context {int cred; } ;
struct TYPE_4__ {int osr_seq_res; } ;
struct TYPE_3__ {int osa_seq_args; int osa_stateid; int osa_src_fh; } ;
struct nfs42_offloadcancel_data {TYPE_2__ res; TYPE_1__ args; struct nfs_server* seq_server; } ;
struct file {int dummy; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct nfs_server* FUNC_2 (int ) ;
 int FUNC_3 (struct rpc_task*) ;
 int VAR_6 ;
 int FUNC_4 (struct file*) ;
 struct nfs42_offloadcancel_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_7 ;
 int FUNC_7 (int *,int *,int,int ) ;
 int * VAR_8 ;
 struct nfs_open_context* FUNC_8 (struct file*) ;
 int VAR_9 ;
 int FUNC_9 (struct rpc_task*) ;
 struct rpc_task* FUNC_10 (struct rpc_task_setup*) ;
 int FUNC_11 (struct rpc_task*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_10,
      nfs4_stateid *VAR_11)
{
 struct nfs_server *VAR_12 = FUNC_2(FUNC_4(VAR_10));
 struct nfs42_offloadcancel_data *VAR_13 = ((void*)0);
 struct nfs_open_context *VAR_14 = FUNC_8(VAR_10);
 struct rpc_task *VAR_15;
 struct rpc_message VAR_16 = {
  .rpc_proc = &VAR_8[VAR_4],
  .rpc_cred = VAR_14->cred,
 };
 struct rpc_task_setup VAR_17 = {
  .rpc_client = VAR_12->client,
  .rpc_message = &VAR_16,
  .callback_ops = &VAR_7,
  .workqueue = VAR_9,
  .flags = VAR_6,
 };
 int VAR_18;

 if (!(VAR_12->caps & VAR_5))
  return -VAR_2;

 VAR_13 = FUNC_5(sizeof(struct nfs42_offloadcancel_data), VAR_3);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 VAR_13->seq_server = VAR_12;
 VAR_13->args.osa_src_fh = FUNC_1(FUNC_4(VAR_10));
 FUNC_6(&VAR_13->args.osa_stateid, VAR_11,
  sizeof(VAR_13->args.osa_stateid));
 VAR_16.rpc_argp = &VAR_13->args;
 VAR_16.rpc_resp = &VAR_13->res;
 VAR_17.callback_data = VAR_13;
 FUNC_7(&VAR_13->args.osa_seq_args, &VAR_13->res.osr_seq_res,
      1, 0);
 VAR_15 = FUNC_10(&VAR_17);
 if (FUNC_0(VAR_15))
  return FUNC_3(VAR_15);
 VAR_18 = FUNC_11(VAR_15);
 if (VAR_18 == -VAR_1)
  VAR_12->caps &= ~VAR_5;
 FUNC_9(VAR_15);
 return VAR_18;
}
