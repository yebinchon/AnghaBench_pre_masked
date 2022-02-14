
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_mount_state; int ns_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int s_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nilfs_super_block**) ;
 int FUNC_3 (struct super_block*,int ) ;
 struct nilfs_super_block** FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_2)
{
 struct the_nilfs *VAR_3 = VAR_2->s_fs_info;
 struct nilfs_super_block **VAR_4;

 FUNC_1(&VAR_3->ns_sem);
 if (!(VAR_3->ns_mount_state & VAR_0)) {
  VAR_3->ns_mount_state |= VAR_0;
  VAR_4 = FUNC_4(VAR_2, 0);
  if (FUNC_2(VAR_4)) {
   VAR_4[0]->s_state |= FUNC_0(VAR_0);
   if (VAR_4[1])
    VAR_4[1]->s_state |= FUNC_0(VAR_0);
   FUNC_3(VAR_2, VAR_1);
  }
 }
 FUNC_5(&VAR_3->ns_sem);
}
