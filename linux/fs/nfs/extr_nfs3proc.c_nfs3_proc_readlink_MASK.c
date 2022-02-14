
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_fattr* rpc_resp; struct nfs3_readlinkargs* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs3_readlinkargs {unsigned int pgbase; unsigned int pglen; struct page** pages; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int * VAR_2 ;
 struct nfs_fattr* FUNC_3 () ;
 int FUNC_4 (struct nfs_fattr*) ;
 int FUNC_5 (struct inode*,struct nfs_fattr*) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct page *VAR_4,
  unsigned int VAR_5, unsigned int VAR_6)
{
 struct nfs_fattr *VAR_7;
 struct nfs3_readlinkargs VAR_8 = {
  .fh = FUNC_1(VAR_3),
  .pgbase = VAR_5,
  .pglen = VAR_6,
  .pages = &VAR_4
 };
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_8,
 };
 int VAR_10 = -VAR_0;

 FUNC_2("NFS call  readlink\n");
 VAR_7 = FUNC_3();
 if (VAR_7 == ((void*)0))
  goto out;
 VAR_9.rpc_resp = VAR_7;

 VAR_10 = FUNC_6(FUNC_0(VAR_3), &VAR_9, 0);
 FUNC_5(VAR_3, VAR_7);
 FUNC_4(VAR_7);
out:
 FUNC_2("NFS reply readlink: %d\n", VAR_10);
 return VAR_10;
}
