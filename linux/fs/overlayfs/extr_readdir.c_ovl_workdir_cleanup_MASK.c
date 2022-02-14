
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct path*,int) ;

void FUNC_6(struct inode *VAR_1, struct vfsmount *VAR_2,
    struct dentry *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!FUNC_0(VAR_3) || VAR_4 > 1) {
  FUNC_3(VAR_1, VAR_3);
  return;
 }

 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5) {
  struct path VAR_6 = { .mnt = VAR_2, .dentry = VAR_3 };

  FUNC_2(VAR_1);
  FUNC_5(&VAR_6, VAR_4 + 1);
  FUNC_1(VAR_1, VAR_0);
  FUNC_3(VAR_1, VAR_3);
 }
}
