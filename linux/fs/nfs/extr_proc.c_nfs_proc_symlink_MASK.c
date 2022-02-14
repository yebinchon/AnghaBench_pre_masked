
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct nfs_symlinkargs* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs_symlinkargs {unsigned int pathlen; struct iattr* sattr; struct page** pages; int fromlen; int fromname; int fromfh; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 struct nfs_fattr* FUNC_3 () ;
 struct nfs_fh* FUNC_4 () ;
 int FUNC_5 (struct nfs_fattr*) ;
 int FUNC_6 (struct nfs_fh*) ;
 int FUNC_7 (struct dentry*,struct nfs_fh*,struct nfs_fattr*,int *) ;
 int FUNC_8 (struct inode*) ;
 int * VAR_4 ;
 int FUNC_9 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_5, struct dentry *VAR_6, struct page *VAR_7,
   unsigned int VAR_8, struct iattr *VAR_9)
{
 struct nfs_fh *VAR_10;
 struct nfs_fattr *VAR_11;
 struct nfs_symlinkargs VAR_12 = {
  .fromfh = FUNC_1(VAR_5),
  .fromname = VAR_6->d_name.name,
  .fromlen = VAR_6->d_name.len,
  .pages = &VAR_7,
  .pathlen = VAR_8,
  .sattr = VAR_9
 };
 struct rpc_message VAR_13 = {
  .rpc_proc = &VAR_4[VAR_3],
  .rpc_argp = &VAR_12,
 };
 int VAR_14 = -VAR_0;

 FUNC_2("NFS call  symlink %pd\n", VAR_6);

 if (VAR_8 > VAR_2)
  goto out;

 VAR_10 = FUNC_4();
 VAR_11 = FUNC_3();
 VAR_14 = -VAR_1;
 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
  goto out_free;

 VAR_14 = FUNC_9(FUNC_0(VAR_5), &VAR_13, 0);
 FUNC_8(VAR_5);






 if (VAR_14 == 0)
  VAR_14 = FUNC_7(VAR_6, VAR_10, VAR_11, ((void*)0));

out_free:
 FUNC_5(VAR_11);
 FUNC_6(VAR_10);
out:
 FUNC_2("NFS reply symlink: %d\n", VAR_14);
 return VAR_14;
}
