
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_umount; struct ovl_fs* s_fs_info; } ;
struct ovl_fs {TYPE_1__* upper_mnt; } ;
struct TYPE_2__ {struct super_block* mnt_sb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, int VAR_1)
{
 struct ovl_fs *VAR_2 = VAR_0->s_fs_info;
 struct super_block *VAR_3;
 int VAR_4;

 if (!VAR_2->upper_mnt)
  return 0;
 if (!VAR_1)
  return 0;

 VAR_3 = VAR_2->upper_mnt->mnt_sb;

 FUNC_0(&VAR_3->s_umount);
 VAR_4 = FUNC_1(VAR_3);
 FUNC_2(&VAR_3->s_umount);

 return VAR_4;
}
