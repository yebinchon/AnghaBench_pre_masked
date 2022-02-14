
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct nfs42_seek_res* rpc_resp; struct nfs42_seek_args* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int caps; int client; } ;
struct nfs_lock_context {int open_context; } ;
struct nfs42_seek_res {int sr_offset; int seq_res; } ;
struct nfs42_seek_args {int sa_offset; int seq_args; int sa_stateid; int sa_what; int sa_fh; } ;
struct inode {TYPE_1__* i_sb; int i_mapping; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int VAR_7 ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_8 ;
 int FUNC_4 (int *,int ,struct nfs_lock_context*,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct file*,int ,int ) ;

__attribute__((used)) static loff_t FUNC_8(struct file *VAR_9,
  struct nfs_lock_context *VAR_10, loff_t VAR_11, int VAR_12)
{
 struct inode *VAR_13 = FUNC_2(VAR_9);
 struct nfs42_seek_args VAR_14 = {
  .sa_fh = FUNC_0(VAR_13),
  .sa_offset = VAR_11,
  .sa_what = (VAR_12 == VAR_7) ?
     VAR_4 : VAR_3,
 };
 struct nfs42_seek_res VAR_15;
 struct rpc_message VAR_16 = {
  .rpc_proc = &VAR_8[VAR_5],
  .rpc_argp = &VAR_14,
  .rpc_resp = &VAR_15,
 };
 struct nfs_server *VAR_17 = FUNC_1(VAR_13);
 int VAR_18;

 if (!FUNC_6(VAR_13, VAR_6))
  return -VAR_0;

 VAR_18 = FUNC_4(&VAR_14.sa_stateid, VAR_10->open_context,
   VAR_10, VAR_1);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_13->i_mapping,
   VAR_11, VAR_2);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_3(VAR_17->client, VAR_17, &VAR_16,
    &VAR_14.seq_args, &VAR_15.seq_res, 0);
 if (VAR_18 == -VAR_0)
  VAR_17->caps &= ~VAR_6;
 if (VAR_18)
  return VAR_18;

 return FUNC_7(VAR_9, VAR_15.sr_offset, VAR_13->i_sb->s_maxbytes);
}
