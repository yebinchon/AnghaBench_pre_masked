
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_fattr* rpc_resp; struct nfs_fh* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs_fh {int name; int len; int fh; } ;
struct nfs_fattr {int valid; int * dir_attr; struct nfs_fattr* fattr; struct nfs_fh* fh; } ;
struct nfs4_label {int dummy; } ;
struct nfs3_diropres {int valid; int * dir_attr; struct nfs3_diropres* fattr; struct nfs_fh* fh; } ;
struct nfs3_diropargs {int name; int len; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int * VAR_4 ;
 int * FUNC_3 () ;
 int FUNC_4 (struct nfs_fattr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_5, const struct qstr *VAR_6,
   struct nfs_fh *VAR_7, struct nfs_fattr *VAR_8,
   struct nfs4_label *VAR_9)
{
 struct nfs3_diropargs VAR_10 = {
  .fh = FUNC_1(VAR_5),
  .name = VAR_6->name,
  .len = VAR_6->len
 };
 struct nfs3_diropres VAR_11 = {
  .fh = VAR_7,
  .fattr = VAR_8
 };
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_4[VAR_2],
  .rpc_argp = &VAR_10,
  .rpc_resp = &VAR_11,
 };
 int VAR_13;

 FUNC_2("NFS call  lookup %s\n", VAR_6->name);
 VAR_11.dir_attr = FUNC_3();
 if (VAR_11.dir_attr == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_8);
 VAR_13 = FUNC_7(FUNC_0(VAR_5), &VAR_12, 0);
 FUNC_6(VAR_5, VAR_11.dir_attr);
 if (VAR_13 >= 0 && !(VAR_8->valid & VAR_3)) {
  VAR_12.rpc_proc = &VAR_4[VAR_1];
  VAR_12.rpc_argp = VAR_7;
  VAR_12.rpc_resp = VAR_8;
  VAR_13 = FUNC_7(FUNC_0(VAR_5), &VAR_12, 0);
 }
 FUNC_5(VAR_11.dir_attr);
 FUNC_2("NFS reply lookup: %d\n", VAR_13);
 return VAR_13;
}
