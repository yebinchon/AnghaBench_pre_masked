
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_removeres* rpc_resp; struct nfs_removeargs* rpc_argp; int * rpc_proc; } ;
struct nfs_removeres {int * dir_attr; } ;
struct nfs_removeargs {int name; int fh; } ;
struct inode {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int * VAR_2 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, struct dentry *VAR_4)
{
 struct nfs_removeargs VAR_5 = {
  .fh = FUNC_1(VAR_3),
  .name = VAR_4->d_name,
 };
 struct nfs_removeres VAR_6;
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_5,
  .rpc_resp = &VAR_6,
 };
 int VAR_8 = -VAR_0;

 FUNC_2("NFS call  remove %pd2\n", VAR_4);
 VAR_6.dir_attr = FUNC_3();
 if (VAR_6.dir_attr == ((void*)0))
  goto out;

 VAR_8 = FUNC_6(FUNC_0(VAR_3), &VAR_7, 0);
 FUNC_5(VAR_3, VAR_6.dir_attr);
 FUNC_4(VAR_6.dir_attr);
out:
 FUNC_2("NFS reply remove: %d\n", VAR_8);
 return VAR_8;
}
