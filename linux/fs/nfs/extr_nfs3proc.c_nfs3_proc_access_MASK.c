
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int rpc_cred; struct nfs3_accessres* rpc_resp; struct nfs3_accessargs* rpc_argp; int * rpc_proc; } ;
struct nfs_access_entry {int cred; int mask; } ;
struct nfs3_accessres {int * fattr; int access; } ;
struct nfs3_accessargs {int access; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int * VAR_2 ;
 int FUNC_3 (struct nfs_access_entry*,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct nfs_access_entry *VAR_4)
{
 struct nfs3_accessargs VAR_5 = {
  .fh = FUNC_1(VAR_3),
  .access = VAR_4->mask,
 };
 struct nfs3_accessres VAR_6;
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_5,
  .rpc_resp = &VAR_6,
  .rpc_cred = VAR_4->cred,
 };
 int VAR_8 = -VAR_0;

 FUNC_2("NFS call  access\n");
 VAR_6.fattr = FUNC_4();
 if (VAR_6.fattr == ((void*)0))
  goto out;

 VAR_8 = FUNC_7(FUNC_0(VAR_3), &VAR_7, 0);
 FUNC_6(VAR_3, VAR_6.fattr);
 if (VAR_8 == 0)
  FUNC_3(VAR_4, VAR_6.access);
 FUNC_5(VAR_6.fattr);
out:
 FUNC_2("NFS reply access: %d\n", VAR_8);
 return VAR_8;
}
