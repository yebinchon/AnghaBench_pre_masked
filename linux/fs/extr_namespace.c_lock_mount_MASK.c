
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct mountpoint {int dummy; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 struct mountpoint* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mountpoint*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ) ;
 struct mountpoint* FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 struct vfsmount* FUNC_8 (struct path*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct path*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static struct mountpoint *FUNC_13(struct path *VAR_1)
{
 struct vfsmount *VAR_2;
 struct dentry *VAR_3 = VAR_1->dentry;
retry:
 FUNC_5(VAR_3->d_inode);
 if (FUNC_12(FUNC_2(VAR_3))) {
  FUNC_6(VAR_3->d_inode);
  return FUNC_0(-VAR_0);
 }
 FUNC_9();
 VAR_2 = FUNC_8(VAR_1);
 if (FUNC_7(!VAR_2)) {
  struct mountpoint *VAR_4 = FUNC_4(VAR_3);
  if (FUNC_1(VAR_4)) {
   FUNC_10();
   FUNC_6(VAR_3->d_inode);
   return VAR_4;
  }
  return VAR_4;
 }
 FUNC_10();
 FUNC_6(VAR_1->dentry->d_inode);
 FUNC_11(VAR_1);
 VAR_1->mnt = VAR_2;
 VAR_3 = VAR_1->dentry = FUNC_3(VAR_2->mnt_root);
 goto retry;
}
