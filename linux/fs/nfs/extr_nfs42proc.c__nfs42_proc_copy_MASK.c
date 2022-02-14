
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rpc_message {struct nfs42_copy_res* rpc_resp; struct nfs42_copy_args* rpc_argp; int * rpc_proc; } ;
struct nfs_writeverf {int dummy; } ;
struct nfs_server {int caps; int client; } ;
struct nfs_lock_context {TYPE_5__* open_context; } ;
struct TYPE_11__ {TYPE_6__* verf; } ;
struct TYPE_9__ {scalar_t__ committed; int verifier; } ;
struct TYPE_10__ {size_t count; TYPE_2__ verifier; } ;
struct nfs42_copy_res {TYPE_4__ commit_res; TYPE_3__ write_res; int synchronous; int seq_res; } ;
struct nfs42_copy_args {size_t count; scalar_t__ sync; int src_stateid; int seq_args; int dst_stateid; scalar_t__ dst_pos; scalar_t__ src_pos; } ;
struct inode {int i_mapping; } ;
struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_13__ {int verifier; } ;
struct TYPE_12__ {TYPE_1__* state; } ;
struct TYPE_8__ {int flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 size_t FUNC_2 (struct nfs42_copy_res*,struct nfs_server*,struct file*,struct file*,int *) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_6__* FUNC_4 (int,int ) ;
 size_t FUNC_5 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_10 ;
 size_t FUNC_6 (int *,TYPE_5__*,struct nfs_lock_context*,int ) ;
 size_t FUNC_7 (int ,scalar_t__,scalar_t__) ;
 size_t FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 size_t FUNC_10 (struct file*,scalar_t__,struct nfs42_copy_res*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct inode*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_13(struct file *VAR_11,
    struct nfs_lock_context *VAR_12,
    struct file *VAR_13,
    struct nfs_lock_context *VAR_14,
    struct nfs42_copy_args *VAR_15,
    struct nfs42_copy_res *VAR_16)
{
 struct rpc_message VAR_17 = {
  .rpc_proc = &VAR_10[VAR_6],
  .rpc_argp = VAR_15,
  .rpc_resp = VAR_16,
 };
 struct inode *VAR_18 = FUNC_1(VAR_13);
 struct nfs_server *VAR_19 = FUNC_0(VAR_18);
 loff_t VAR_20 = VAR_15->src_pos;
 loff_t VAR_21 = VAR_15->dst_pos;
 size_t VAR_22 = VAR_15->count;
 ssize_t VAR_23;

 VAR_23 = FUNC_6(&VAR_15->src_stateid, VAR_12->open_context,
         VAR_12, VAR_3);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_7(FUNC_1(VAR_11)->i_mapping,
   VAR_20, VAR_20 + (loff_t)VAR_22 - 1);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(&VAR_15->dst_stateid, VAR_14->open_context,
         VAR_14, VAR_4);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_8(VAR_18);
 if (VAR_23)
  return VAR_23;

 VAR_16->commit_res.verf = ((void*)0);
 if (VAR_15->sync) {
  VAR_16->commit_res.verf =
   FUNC_4(sizeof(struct nfs_writeverf), VAR_5);
  if (!VAR_16->commit_res.verf)
   return -VAR_1;
 }
 FUNC_11(VAR_8,
  &VAR_14->open_context->state->flags);

 VAR_23 = FUNC_5(VAR_19->client, VAR_19, &VAR_17,
    &VAR_15->seq_args, &VAR_16->seq_res, 0);
 if (VAR_23 == -VAR_2)
  VAR_19->caps &= ~VAR_7;
 if (VAR_23)
  goto out;

 if (VAR_15->sync &&
  FUNC_9(&VAR_16->write_res.verifier.verifier,
        &VAR_16->commit_res.verf->verifier)) {
  VAR_23 = -VAR_0;
  goto out;
 }

 if (!VAR_16->synchronous) {
  VAR_23 = FUNC_2(VAR_16, VAR_19, VAR_11, VAR_13,
    &VAR_15->src_stateid);
  if (VAR_23)
   return VAR_23;
 }

 if ((!VAR_16->synchronous || !VAR_15->sync) &&
   VAR_16->write_res.verifier.committed != VAR_9) {
  VAR_23 = FUNC_10(VAR_13, VAR_21, VAR_16);
  if (VAR_23)
   return VAR_23;
 }

 FUNC_12(VAR_18, VAR_21,
     VAR_21 + VAR_16->write_res.count);

 VAR_23 = VAR_16->write_res.count;
out:
 if (VAR_15->sync)
  FUNC_3(VAR_16->commit_res.verf);
 return VAR_23;
}
