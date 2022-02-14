
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_diropargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs_diropargs {int name; int len; int fh; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct inode*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, const struct qstr *VAR_3)
{
 struct nfs_diropargs VAR_4 = {
  .fh = FUNC_1(VAR_2),
  .name = VAR_3->name,
  .len = VAR_3->len
 };
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_4,
 };
 int VAR_6;

 FUNC_2("NFS call  rmdir %s\n", VAR_3->name);
 VAR_6 = FUNC_4(FUNC_0(VAR_2), &VAR_5, 0);
 FUNC_3(VAR_2);
 FUNC_2("NFS reply rmdir: %d\n", VAR_6);
 return VAR_6;
}
