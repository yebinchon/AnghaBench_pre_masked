
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_magic; int s_active; } ;
struct pts_fs_info {int dummy; } ;
struct path {TYPE_1__* mnt; } ;
struct file {struct path f_path; } ;
struct TYPE_2__ {struct super_block* mnt_sb; } ;


 struct pts_fs_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 struct pts_fs_info* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct path*) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (struct path*) ;

struct pts_fs_info *FUNC_6(struct file *VAR_1)
{
 struct pts_fs_info *VAR_2;
 struct path VAR_3;
 struct super_block *VAR_4;

 VAR_3 = VAR_1->f_path;
 FUNC_4(&VAR_3);


 if (VAR_3.mnt->mnt_sb->s_magic != VAR_0) {
  int VAR_5;

  VAR_5 = FUNC_3(&VAR_3);
  if (VAR_5) {
   VAR_2 = FUNC_1(VAR_5);
   goto out;
  }
 }




 VAR_4 = VAR_3.mnt->mnt_sb;
 FUNC_2(&VAR_4->s_active);
 VAR_2 = FUNC_0(VAR_4);

out:
 FUNC_5(&VAR_3);
 return VAR_2;
}
