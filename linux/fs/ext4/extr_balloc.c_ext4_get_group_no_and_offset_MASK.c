
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_super_block {int s_first_data_block; } ;
typedef int ext4_grpblk_t ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_cluster_bits; struct ext4_super_block* s_es; } ;


 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct super_block *VAR_0, ext4_fsblk_t VAR_1,
  ext4_group_t *VAR_2, ext4_grpblk_t *VAR_3)
{
 struct ext4_super_block *VAR_4 = FUNC_1(VAR_0)->s_es;
 ext4_grpblk_t VAR_5;

 VAR_1 = VAR_1 - FUNC_3(VAR_4->s_first_data_block);
 VAR_5 = FUNC_2(VAR_1, FUNC_0(VAR_0)) >>
  FUNC_1(VAR_0)->s_cluster_bits;
 if (VAR_3)
  *VAR_3 = VAR_5;
 if (VAR_2)
  *VAR_2 = VAR_1;

}
