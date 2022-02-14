
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_super_block {int * s_backup_bgs; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_2__ {struct ext4_super_block* s_es; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

int FUNC_5(struct super_block *VAR_0, ext4_group_t VAR_1)
{
 struct ext4_super_block *VAR_2 = FUNC_0(VAR_0)->s_es;

 if (VAR_1 == 0)
  return 1;
 if (FUNC_2(VAR_0)) {
  if (VAR_1 == FUNC_3(VAR_2->s_backup_bgs[0]) ||
      VAR_1 == FUNC_3(VAR_2->s_backup_bgs[1]))
   return 1;
  return 0;
 }
 if ((VAR_1 <= 1) || !FUNC_1(VAR_0))
  return 1;
 if (!(VAR_1 & 1))
  return 0;
 if (FUNC_4(VAR_1, 3) || (FUNC_4(VAR_1, 5)) ||
     FUNC_4(VAR_1, 7))
  return 1;

 return 0;
}
