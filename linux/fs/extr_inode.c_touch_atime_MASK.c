
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct timespec64 {int dummy; } ;
struct path {int dentry; struct vfsmount* mnt; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct vfsmount*) ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (struct path const*,struct inode*) ;
 struct timespec64 FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct timespec64*,int ) ;

void FUNC_8(const struct path *VAR_1)
{
 struct vfsmount *VAR_2 = VAR_1->mnt;
 struct inode *VAR_3 = FUNC_4(VAR_1->dentry);
 struct timespec64 VAR_4;

 if (!FUNC_2(VAR_1, VAR_3))
  return;

 if (!FUNC_6(VAR_3->i_sb))
  return;

 if (FUNC_1(VAR_2) != 0)
  goto skip_update;
 VAR_4 = FUNC_3(VAR_3);
 FUNC_7(VAR_3, &VAR_4, VAR_0);
 FUNC_0(VAR_2);
skip_update:
 FUNC_5(VAR_3->i_sb);
}
