
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_lookup_res* rpc_resp; struct nfs4_lookup_arg* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct qstr {int name; } ;
struct nfs_server {int attr_bitmask; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_lookup_res {int seq_res; struct nfs_fh* fh; struct nfs4_label* label; struct nfs_fattr* fattr; struct nfs_server* server; } ;
struct nfs4_lookup_arg {int seq_args; int bitmask; struct qstr const* name; int dir_fh; } ;
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct nfs_server*,struct nfs4_label*) ;
 int FUNC_4 (struct rpc_clnt*,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_1 ;
 int FUNC_5 (struct nfs_fattr*) ;

__attribute__((used)) static int FUNC_6(struct rpc_clnt *VAR_2, struct inode *VAR_3,
  const struct qstr *VAR_4, struct nfs_fh *VAR_5,
  struct nfs_fattr *VAR_6, struct nfs4_label *VAR_7)
{
 struct nfs_server *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;
 struct nfs4_lookup_arg VAR_10 = {
  .bitmask = VAR_8->attr_bitmask,
  .dir_fh = FUNC_0(VAR_3),
  .name = VAR_4,
 };
 struct nfs4_lookup_res VAR_11 = {
  .server = VAR_8,
  .fattr = VAR_6,
  .label = VAR_7,
  .fh = VAR_5,
 };
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_10,
  .rpc_resp = &VAR_11,
 };

 VAR_10.bitmask = FUNC_3(VAR_8, VAR_7);

 FUNC_5(VAR_6);

 FUNC_2("NFS call  lookup %s\n", VAR_4->name);
 VAR_9 = FUNC_4(VAR_2, VAR_8, &VAR_12, &VAR_10.seq_args, &VAR_11.seq_res, 0);
 FUNC_2("NFS reply lookup: %d\n", VAR_9);
 return VAR_9;
}
