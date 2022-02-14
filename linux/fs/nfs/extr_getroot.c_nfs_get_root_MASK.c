
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_fsinfo {int * fattr; } ;
struct nfs_fh {int dummy; } ;
struct inode {int d_flags; int d_lock; void* d_fsdata; } ;
struct dentry {int d_flags; int d_lock; void* d_fsdata; } ;
struct TYPE_4__ {TYPE_1__* rpc_ops; } ;
struct TYPE_3__ {int (* getroot ) (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 struct nfs_server* FUNC_4 (struct super_block*) ;
 struct inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (char const*,int ) ;
 int * FUNC_9 () ;
 struct inode* FUNC_10 (struct super_block*,struct nfs_fh*,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct super_block*,struct inode*) ;
 int FUNC_13 (struct inode*,struct inode*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;

struct dentry *FUNC_17(struct super_block *VAR_3, struct nfs_fh *VAR_4,
       const char *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_4(VAR_3);
 struct nfs_fsinfo VAR_7;
 struct dentry *VAR_8;
 struct inode *VAR_9;
 void *VAR_10 = FUNC_8(VAR_5, VAR_2);
 int VAR_11;

 if (!VAR_10)
  return FUNC_1(-VAR_1);


 VAR_7.fattr = FUNC_9();
 if (VAR_7.fattr == ((void*)0)) {
  FUNC_7(VAR_10);
  return FUNC_1(-VAR_1);
 }

 VAR_11 = VAR_6->nfs_client->rpc_ops->getroot(VAR_6, VAR_4, &VAR_7);
 if (VAR_11 < 0) {
  FUNC_6("nfs_get_root: getattr error = %d\n", -VAR_11);
  VAR_8 = FUNC_1(VAR_11);
  goto out;
 }

 VAR_9 = FUNC_10(VAR_3, VAR_4, VAR_7.fattr, ((void*)0));
 if (FUNC_2(VAR_9)) {
  FUNC_6("nfs_get_root: get root inode failed\n");
  VAR_8 = FUNC_0(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_12(VAR_3, VAR_9);
 if (VAR_11 != 0) {
  VAR_8 = FUNC_1(VAR_11);
  goto out;
 }





 VAR_8 = FUNC_5(VAR_9);
 if (FUNC_2(VAR_8)) {
  FUNC_6("nfs_get_root: get root dentry failed\n");
  goto out;
 }

 FUNC_13(VAR_8, VAR_9);
 FUNC_14(&VAR_8->d_lock);
 if (FUNC_3(VAR_8) && !VAR_8->d_fsdata &&
     !(VAR_8->d_flags & VAR_0)) {
  VAR_8->d_fsdata = VAR_10;
  VAR_10 = ((void*)0);
 }
 FUNC_15(&VAR_8->d_lock);
out:
 FUNC_7(VAR_10);
 FUNC_11(VAR_7.fattr);
 return VAR_8;
}
