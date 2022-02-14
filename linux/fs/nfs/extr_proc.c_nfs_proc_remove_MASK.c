
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_removeargs* rpc_argp; int * rpc_proc; } ;
struct nfs_removeargs {int name; int fh; } ;
struct inode {int dummy; } ;
struct dentry {int d_name; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct inode*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct nfs_removeargs VAR_4 = {
  .fh = FUNC_1(VAR_2),
  .name = VAR_3->d_name,
 };
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_4,
 };
 int VAR_6;

 FUNC_2("NFS call  remove %pd2\n",VAR_3);
 VAR_6 = FUNC_4(FUNC_0(VAR_2), &VAR_5, 0);
 FUNC_3(VAR_2);

 FUNC_2("NFS reply remove: %d\n", VAR_6);
 return VAR_6;
}
