
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_remove_count; } ;
struct ext2_sb_info {TYPE_1__* s_es; int s_lock; int s_mount_state; } ;
struct TYPE_2__ {int s_state; } ;


 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*,TYPE_1__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_0)
{
 struct ext2_sb_info *VAR_1 = FUNC_0(VAR_0);






 if (FUNC_1(&VAR_0->s_remove_count)) {
  FUNC_3(VAR_0, 1);
  return 0;
 }

 FUNC_5(&VAR_1->s_lock);
 VAR_1->s_es->s_state = FUNC_2(VAR_1->s_mount_state);
 FUNC_6(&VAR_1->s_lock);
 FUNC_4(VAR_0, VAR_1->s_es, 1);

 return 0;
}
