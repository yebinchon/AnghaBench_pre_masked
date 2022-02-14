
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_diropok* rpc_resp; struct nfs_diropargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs_diropok {struct nfs_fattr* fattr; struct nfs_fh* fh; } ;
struct nfs_diropargs {int name; int len; int fh; } ;
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct nfs_fattr*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, const struct qstr *VAR_3,
  struct nfs_fh *VAR_4, struct nfs_fattr *VAR_5,
  struct nfs4_label *VAR_6)
{
 struct nfs_diropargs VAR_7 = {
  .fh = FUNC_1(VAR_2),
  .name = VAR_3->name,
  .len = VAR_3->len
 };
 struct nfs_diropok VAR_8 = {
  .fh = VAR_4,
  .fattr = VAR_5
 };
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_7,
  .rpc_resp = &VAR_8,
 };
 int VAR_10;

 FUNC_2("NFS call  lookup %s\n", VAR_3->name);
 FUNC_3(VAR_5);
 VAR_10 = FUNC_4(FUNC_0(VAR_2), &VAR_9, 0);
 FUNC_2("NFS reply lookup: %d\n", VAR_10);
 return VAR_10;
}
