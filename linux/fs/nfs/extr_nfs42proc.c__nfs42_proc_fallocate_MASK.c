
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs42_falloc_res* rpc_resp; struct nfs42_falloc_args* rpc_argp; } ;
struct nfs_server {int client; int cache_consistency_bitmask; } ;
struct nfs_lock_context {int open_context; } ;
struct nfs42_falloc_res {int falloc_fattr; int seq_res; struct nfs_server* falloc_server; } ;
struct nfs42_falloc_args {int seq_args; int falloc_stateid; int falloc_bitmask; int falloc_length; int falloc_offset; int falloc_fh; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int FUNC_5 (int *,int ,struct nfs_lock_context*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_8(struct rpc_message *VAR_2, struct file *VAR_3,
  struct nfs_lock_context *VAR_4, loff_t VAR_5, loff_t VAR_6)
{
 struct inode *VAR_7 = FUNC_2(VAR_3);
 struct nfs_server *VAR_8 = FUNC_1(VAR_7);
 struct nfs42_falloc_args VAR_9 = {
  .falloc_fh = FUNC_0(VAR_7),
  .falloc_offset = VAR_5,
  .falloc_length = VAR_6,
  .falloc_bitmask = VAR_8->cache_consistency_bitmask,
 };
 struct nfs42_falloc_res VAR_10 = {
  .falloc_server = VAR_8,
 };
 int VAR_11;

 VAR_2->rpc_argp = &VAR_9;
 VAR_2->rpc_resp = &VAR_10;

 VAR_11 = FUNC_5(&VAR_9.falloc_stateid, VAR_4->open_context,
   VAR_4, VAR_1);
 if (VAR_11)
  return VAR_11;

 VAR_10.falloc_fattr = FUNC_6();
 if (!VAR_10.falloc_fattr)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_8->client, VAR_8, VAR_2,
    &VAR_9.seq_args, &VAR_10.seq_res, 0);
 if (VAR_11 == 0)
  VAR_11 = FUNC_7(VAR_7, VAR_10.falloc_fattr);

 FUNC_3(VAR_10.falloc_fattr);
 return VAR_11;
}
