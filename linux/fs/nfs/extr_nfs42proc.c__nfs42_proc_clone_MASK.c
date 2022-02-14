
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs42_clone_res* rpc_resp; struct nfs42_clone_args* rpc_argp; } ;
struct nfs_server {int client; int cache_consistency_bitmask; } ;
struct nfs_lock_context {int open_context; } ;
struct nfs42_clone_res {int dst_fattr; int seq_res; struct nfs_server* server; } ;
struct nfs42_clone_args {int seq_args; int dst_stateid; int src_stateid; int dst_bitmask; int count; int dst_offset; int src_offset; int dst_fh; int src_fh; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int FUNC_5 (int *,int ,struct nfs_lock_context*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_8(struct rpc_message *VAR_3, struct file *VAR_4,
  struct file *VAR_5, struct nfs_lock_context *VAR_6,
  struct nfs_lock_context *VAR_7, loff_t VAR_8,
  loff_t VAR_9, loff_t VAR_10)
{
 struct inode *VAR_11 = FUNC_2(VAR_4);
 struct inode *VAR_12 = FUNC_2(VAR_5);
 struct nfs_server *VAR_13 = FUNC_1(VAR_12);
 struct nfs42_clone_args VAR_14 = {
  .src_fh = FUNC_0(VAR_11),
  .dst_fh = FUNC_0(VAR_12),
  .src_offset = VAR_8,
  .dst_offset = VAR_9,
  .count = VAR_10,
  .dst_bitmask = VAR_13->cache_consistency_bitmask,
 };
 struct nfs42_clone_res VAR_15 = {
  .server = VAR_13,
 };
 int VAR_16;

 VAR_3->rpc_argp = &VAR_14;
 VAR_3->rpc_resp = &VAR_15;

 VAR_16 = FUNC_5(&VAR_14.src_stateid, VAR_6->open_context,
   VAR_6, VAR_1);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(&VAR_14.dst_stateid, VAR_7->open_context,
   VAR_7, VAR_2);
 if (VAR_16)
  return VAR_16;

 VAR_15.dst_fattr = FUNC_6();
 if (!VAR_15.dst_fattr)
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_13->client, VAR_13, VAR_3,
    &VAR_14.seq_args, &VAR_15.seq_res, 0);
 if (VAR_16 == 0)
  VAR_16 = FUNC_7(VAR_12, VAR_15.dst_fattr);

 FUNC_3(VAR_15.dst_fattr);
 return VAR_16;
}
