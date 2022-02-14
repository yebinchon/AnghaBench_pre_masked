
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_mount_state; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {scalar_t__ s_last_cno; int s_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,int) ;
 struct nilfs_super_block** FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct nilfs_super_block*,struct the_nilfs*) ;

int FUNC_4(struct super_block *VAR_3)
{
 struct the_nilfs *VAR_4 = VAR_3->s_fs_info;
 struct nilfs_super_block **VAR_5;
 int VAR_6 = VAR_1;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_2(VAR_3, 0);
 if (VAR_5) {
  VAR_5[0]->s_state = FUNC_0(VAR_4->ns_mount_state);
  FUNC_3(VAR_5[0], VAR_4);
  if (VAR_5[1] && VAR_5[0]->s_last_cno == VAR_5[1]->s_last_cno) {





   VAR_5[1]->s_state = VAR_5[0]->s_state;
   VAR_6 = VAR_2;
  }
  VAR_7 = FUNC_1(VAR_3, VAR_6);
 }
 return VAR_7;
}
