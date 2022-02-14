
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; int s_inode_lru; int s_dentry_lru; int s_shrink; int s_active; struct file_system_type* s_type; } ;
struct file_system_type {int (* kill_sb ) (struct super_block*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file_system_type*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct super_block *VAR_0)
{
 struct file_system_type *VAR_1 = VAR_0->s_type;
 if (FUNC_0(&VAR_0->s_active)) {
  FUNC_1(VAR_0);
  FUNC_6(&VAR_0->s_shrink);
  VAR_1->kill_sb(VAR_0);






  FUNC_2(&VAR_0->s_dentry_lru);
  FUNC_2(&VAR_0->s_inode_lru);

  FUNC_3(VAR_1);
  FUNC_4(VAR_0);
 } else {
  FUNC_7(&VAR_0->s_umount);
 }
}
