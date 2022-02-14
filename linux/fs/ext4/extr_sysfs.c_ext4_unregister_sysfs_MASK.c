
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_id; } ;
struct ext4_sb_info {int s_kobj; scalar_t__ s_proc; } ;


 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct super_block *VAR_1)
{
 struct ext4_sb_info *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->s_proc)
  FUNC_2(VAR_1->s_id, VAR_0);
 FUNC_1(&VAR_2->s_kobj);
}
