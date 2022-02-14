
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_getattr_res* rpc_resp; struct nfs4_getattr_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct nfs4_getattr_res {int seq_res; struct nfs_server* server; struct nfs4_label* label; struct nfs_fattr* fattr; } ;
struct nfs4_getattr_arg {int seq_args; int * bitmask; struct nfs_fh* fh; } ;
struct inode {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,struct inode*) ;
 int FUNC_1 (struct nfs_server*,struct nfs4_label*) ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_2 ;
 int FUNC_3 (struct nfs_fattr*) ;

__attribute__((used)) static int FUNC_4(struct nfs_server *VAR_3, struct nfs_fh *VAR_4,
    struct nfs_fattr *VAR_5, struct nfs4_label *VAR_6,
    struct inode *VAR_7)
{
 __u32 VAR_8[VAR_0];
 struct nfs4_getattr_arg VAR_9 = {
  .fh = VAR_4,
  .bitmask = VAR_8,
 };
 struct nfs4_getattr_res VAR_10 = {
  .fattr = VAR_5,
  .label = VAR_6,
  .server = VAR_3,
 };
 struct rpc_message VAR_11 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_9,
  .rpc_resp = &VAR_10,
 };

 FUNC_0(VAR_8, FUNC_1(VAR_3, VAR_6), VAR_7);

 FUNC_3(VAR_5);
 return FUNC_2(VAR_3->client, VAR_3, &VAR_11, &VAR_9.seq_args, &VAR_10.seq_res, 0);
}
