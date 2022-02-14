
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_lookupp_res* rpc_resp; struct nfs4_lookupp_arg* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {int attr_bitmask; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_lookupp_res {int seq_res; struct nfs_fh* fh; struct nfs4_label* label; struct nfs_fattr* fattr; struct nfs_server* server; } ;
struct nfs4_lookupp_arg {int seq_args; int bitmask; int fh; } ;
struct nfs4_label {int dummy; } ;
struct inode {int i_ino; } ;


 size_t VAR_0 ;
 struct rpc_clnt* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct nfs_server*,struct nfs4_label*) ;
 int FUNC_5 (struct rpc_clnt*,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_1 ;
 int FUNC_6 (struct nfs_fattr*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2,
  struct nfs_fh *VAR_3, struct nfs_fattr *VAR_4,
  struct nfs4_label *VAR_5)
{
 struct rpc_clnt *VAR_6 = FUNC_0(VAR_2);
 struct nfs_server *VAR_7 = FUNC_2(VAR_2);
 int VAR_8;
 struct nfs4_lookupp_arg VAR_9 = {
  .bitmask = VAR_7->attr_bitmask,
  .fh = FUNC_1(VAR_2),
 };
 struct nfs4_lookupp_res VAR_10 = {
  .server = VAR_7,
  .fattr = VAR_4,
  .label = VAR_5,
  .fh = VAR_3,
 };
 struct rpc_message VAR_11 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_9,
  .rpc_resp = &VAR_10,
 };

 VAR_9.bitmask = FUNC_4(VAR_7, VAR_5);

 FUNC_6(VAR_4);

 FUNC_3("NFS call  lookupp ino=0x%lx\n", VAR_2->i_ino);
 VAR_8 = FUNC_5(VAR_6, VAR_7, &VAR_11, &VAR_9.seq_args,
    &VAR_10.seq_res, 0);
 FUNC_3("NFS reply lookupp: %d\n", VAR_8);
 return VAR_8;
}
