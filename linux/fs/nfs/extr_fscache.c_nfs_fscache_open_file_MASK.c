
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_size; int i_ctime; int i_mtime; } ;
struct nfs_inode {int flags; TYPE_1__ vfs_inode; } ;
struct nfs_fscache_inode_auxdata {void* ctime; void* mtime; } ;
struct inode {int dummy; } ;
struct fscache_cookie {int dummy; } ;
struct file {int dummy; } ;
typedef int auxdata ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,struct nfs_inode*) ;
 scalar_t__ FUNC_3 (struct fscache_cookie*) ;
 int FUNC_4 (struct fscache_cookie*) ;
 int FUNC_5 (struct fscache_cookie*,struct nfs_fscache_inode_auxdata*,int) ;
 int FUNC_6 (struct fscache_cookie*,struct nfs_fscache_inode_auxdata*,int ,int ,struct inode*) ;
 int FUNC_7 (struct fscache_cookie*,struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct nfs_fscache_inode_auxdata*,int ,int) ;
 int VAR_2 ;
 struct fscache_cookie* FUNC_10 (struct inode*) ;
 int FUNC_11 (int ,int *) ;
 void* FUNC_12 (int ) ;

void FUNC_13(struct inode *VAR_3, struct file *VAR_4)
{
 struct nfs_fscache_inode_auxdata VAR_5;
 struct nfs_inode *VAR_6 = FUNC_0(VAR_3);
 struct fscache_cookie *VAR_7 = FUNC_10(VAR_3);

 if (!FUNC_4(VAR_7))
  return;

 FUNC_9(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.mtime = FUNC_12(VAR_6->vfs_inode.i_mtime);
 VAR_5.ctime = FUNC_12(VAR_6->vfs_inode.i_ctime);

 if (FUNC_8(VAR_3)) {
  FUNC_2(VAR_0, "NFS: nfsi 0x%p disabling cache\n", VAR_6);
  FUNC_1(VAR_1, &VAR_6->flags);
  FUNC_5(VAR_7, &VAR_5, 1);
  FUNC_7(VAR_7, VAR_3);
 } else {
  FUNC_2(VAR_0, "NFS: nfsi 0x%p enabling cache\n", VAR_6);
  FUNC_6(VAR_7, &VAR_5, VAR_6->vfs_inode.i_size,
          VAR_2, VAR_3);
  if (FUNC_3(VAR_7))
   FUNC_11(VAR_1, &FUNC_0(VAR_3)->flags);
 }
}
