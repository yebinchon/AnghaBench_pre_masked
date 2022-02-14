
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_fattr* rpc_resp; struct nfs3_diropargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs_fattr {int dummy; } ;
struct nfs3_diropargs {int name; int len; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int * VAR_2 ;
 struct nfs_fattr* FUNC_3 () ;
 int FUNC_4 (struct nfs_fattr*) ;
 int FUNC_5 (struct inode*,struct nfs_fattr*) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, const struct qstr *VAR_4)
{
 struct nfs_fattr *VAR_5;
 struct nfs3_diropargs VAR_6 = {
  .fh = FUNC_1(VAR_3),
  .name = VAR_4->name,
  .len = VAR_4->len
 };
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_6,
 };
 int VAR_8 = -VAR_0;

 FUNC_2("NFS call  rmdir %s\n", VAR_4->name);
 VAR_5 = FUNC_3();
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_7.rpc_resp = VAR_5;
 VAR_8 = FUNC_6(FUNC_0(VAR_3), &VAR_7, 0);
 FUNC_5(VAR_3, VAR_5);
 FUNC_4(VAR_5);
out:
 FUNC_2("NFS reply rmdir: %d\n", VAR_8);
 return VAR_8;
}
