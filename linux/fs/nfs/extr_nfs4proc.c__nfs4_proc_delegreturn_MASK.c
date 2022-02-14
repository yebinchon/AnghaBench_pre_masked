
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpc_task_setup {struct nfs4_delegreturndata* callback_data; int rpc_client; int flags; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_3__* rpc_resp; TYPE_2__* rpc_argp; struct cred const* rpc_cred; int * rpc_proc; } ;
struct nfs_server {int cache_consistency_bitmask; int nfs_client; int client; } ;
struct TYPE_8__ {int * lr_res; int * fattr; int lr_ret; struct nfs_server* server; int seq_res; } ;
struct TYPE_7__ {TYPE_4__* lr_args; int bitmask; int * stateid; int * fhandle; int seq_args; } ;
struct TYPE_9__ {int * ld_private; } ;
struct TYPE_6__ {int roc; int res; TYPE_4__ arg; int ld_private; } ;
struct nfs4_delegreturndata {int rpc_status; TYPE_3__ res; TYPE_2__ args; TYPE_1__ lr; scalar_t__ inode; int timestamp; int fattr; int stateid; int fh; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int FUNC_3 (struct rpc_task*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfs4_delegreturndata* FUNC_4 (int,int ) ;
 int VAR_7 ;
 int FUNC_5 (int *,int *,int,int ) ;
 int * VAR_8 ;
 int FUNC_6 (int ,int ,int *,struct rpc_message*) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,TYPE_4__*,int *,struct cred const*) ;
 int FUNC_12 (TYPE_4__*,int *,int ) ;
 int FUNC_13 (struct rpc_task*) ;
 struct rpc_task* FUNC_14 (struct rpc_task_setup*) ;
 int FUNC_15 (struct rpc_task*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_9, const struct cred *VAR_10, const nfs4_stateid *VAR_11, int VAR_12)
{
 struct nfs4_delegreturndata *VAR_13;
 struct nfs_server *VAR_14 = FUNC_2(VAR_9);
 struct rpc_task *VAR_15;
 struct rpc_message VAR_16 = {
  .rpc_proc = &VAR_8[VAR_3],
  .rpc_cred = VAR_10,
 };
 struct rpc_task_setup VAR_17 = {
  .rpc_client = VAR_14->client,
  .rpc_message = &VAR_16,
  .callback_ops = &VAR_7,
  .flags = VAR_5,
 };
 int VAR_18 = 0;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1);
 if (VAR_13 == ((void*)0))
  return -VAR_0;
 FUNC_5(&VAR_13->args.seq_args, &VAR_13->res.seq_res, 1, 0);

 FUNC_6(VAR_14->nfs_client,
   VAR_4,
   &VAR_17.rpc_client, &VAR_16);

 VAR_13->args.fhandle = &VAR_13->fh;
 VAR_13->args.stateid = &VAR_13->stateid;
 VAR_13->args.bitmask = VAR_14->cache_consistency_bitmask;
 FUNC_8(&VAR_13->fh, FUNC_1(VAR_9));
 FUNC_7(&VAR_13->stateid, VAR_11);
 VAR_13->res.fattr = &VAR_13->fattr;
 VAR_13->res.server = VAR_14;
 VAR_13->res.lr_ret = -VAR_2;
 VAR_13->lr.arg.ld_private = &VAR_13->lr.ld_private;
 FUNC_9(VAR_13->res.fattr);
 VAR_13->timestamp = VAR_6;
 VAR_13->rpc_status = 0;
 VAR_13->lr.roc = FUNC_11(VAR_9, &VAR_13->lr.arg, &VAR_13->lr.res, VAR_10);
 VAR_13->inode = FUNC_10(VAR_9);
 if (VAR_13->inode) {
  if (VAR_13->lr.roc) {
   VAR_13->args.lr_args = &VAR_13->lr.arg;
   VAR_13->res.lr_res = &VAR_13->lr.res;
  }
 } else if (VAR_13->lr.roc) {
  FUNC_12(&VAR_13->lr.arg, &VAR_13->lr.res, 0);
  VAR_13->lr.roc = 0;
 }

 VAR_17.callback_data = VAR_13;
 VAR_16.rpc_argp = &VAR_13->args;
 VAR_16.rpc_resp = &VAR_13->res;
 VAR_15 = FUNC_14(&VAR_17);
 if (FUNC_0(VAR_15))
  return FUNC_3(VAR_15);
 if (!VAR_12)
  goto out;
 VAR_18 = FUNC_15(VAR_15);
 if (VAR_18 != 0)
  goto out;
 VAR_18 = VAR_13->rpc_status;
out:
 FUNC_13(VAR_15);
 return VAR_18;
}
