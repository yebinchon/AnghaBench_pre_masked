
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {scalar_t__ mnt_root; TYPE_1__* mnt_sb; } ;
struct pts_fs_info {int dummy; } ;
struct path {scalar_t__ dentry; struct vfsmount* mnt; } ;
struct file {struct path f_path; } ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 struct pts_fs_info* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_1 (int) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct path*) ;
 int FUNC_5 (struct vfsmount*) ;
 int FUNC_6 (struct path*) ;

struct vfsmount *FUNC_7(struct file *VAR_2, struct pts_fs_info *VAR_3)
{
 struct path VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_2->f_path;
 FUNC_6(&VAR_4);




 while (VAR_4.mnt->mnt_root == VAR_4.dentry)
  if (FUNC_4(&VAR_4) == 0)
   break;


 if ((VAR_4.mnt->mnt_sb->s_magic != VAR_0) ||
     (FUNC_0(VAR_4.mnt->mnt_sb) != VAR_3))
  VAR_5 = FUNC_2(&VAR_4);
 FUNC_3(VAR_4.dentry);
 if (!VAR_5) {
  if (FUNC_0(VAR_4.mnt->mnt_sb) == VAR_3)
   return VAR_4.mnt;

  VAR_5 = -VAR_1;
 }

 FUNC_5(VAR_4.mnt);
 return FUNC_1(VAR_5);
}
