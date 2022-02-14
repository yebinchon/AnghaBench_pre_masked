
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task_setup {int rpc_client; struct nfs42_layouterror_data* callback_data; int flags; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_3__* rpc_resp; TYPE_2__* rpc_argp; int * rpc_proc; } ;
struct pnfs_layout_segment {TYPE_1__* pls_layout; } ;
struct TYPE_7__ {int seq_res; int num_errors; } ;
struct TYPE_6__ {int seq_args; int num_errors; struct nfs42_layout_error* errors; } ;
struct nfs42_layouterror_data {TYPE_3__ res; TYPE_2__ args; } ;
struct nfs42_layout_error {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int client; } ;
struct TYPE_5__ {struct inode* plh_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_7 ;
 struct nfs42_layouterror_data* FUNC_3 (struct pnfs_layout_segment*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int * VAR_9 ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct rpc_task*) ;
 struct rpc_task* FUNC_7 (struct rpc_task_setup*) ;

int FUNC_8(struct pnfs_layout_segment *VAR_10,
  const struct nfs42_layout_error *VAR_11, size_t VAR_12)
{
 struct inode *VAR_13 = VAR_10->pls_layout->plh_inode;
 struct nfs42_layouterror_data *VAR_14;
 struct rpc_task *VAR_15;
 struct rpc_message VAR_16 = {
  .rpc_proc = &VAR_9[VAR_5],
 };
 struct rpc_task_setup VAR_17 = {
  .rpc_message = &VAR_16,
  .callback_ops = &VAR_8,
  .flags = VAR_7,
 };
 unsigned int VAR_18;

 if (!FUNC_5(VAR_13, VAR_6))
  return -VAR_2;
 if (VAR_12 > VAR_4)
  return -VAR_0;
 VAR_14 = FUNC_3(VAR_10, VAR_3);
 if (!VAR_14)
  return -VAR_1;
 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  VAR_14->args.errors[VAR_18] = VAR_11[VAR_18];
  VAR_14->args.num_errors++;
  VAR_14->res.num_errors++;
 }
 VAR_16.rpc_argp = &VAR_14->args;
 VAR_16.rpc_resp = &VAR_14->res;
 VAR_17.callback_data = VAR_14;
 VAR_17.rpc_client = FUNC_1(VAR_13)->client;
 FUNC_4(&VAR_14->args.seq_args, &VAR_14->res.seq_res, 0, 0);
 VAR_15 = FUNC_7(&VAR_17);
 if (FUNC_0(VAR_15))
  return FUNC_2(VAR_15);
 FUNC_6(VAR_15);
 return 0;
}
