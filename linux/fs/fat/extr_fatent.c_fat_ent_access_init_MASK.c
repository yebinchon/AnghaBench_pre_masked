
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int fatent_shift; int fat_bits; int * fatent_ops; int fat_lock; } ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*,char*,int ) ;
 scalar_t__ FUNC_2 (struct msdos_sb_info*) ;
 scalar_t__ FUNC_3 (struct msdos_sb_info*) ;
 scalar_t__ FUNC_4 (struct msdos_sb_info*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct super_block *VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_3);

 FUNC_5(&VAR_4->fat_lock);

 if (FUNC_4(VAR_4)) {
  VAR_4->fatent_shift = 2;
  VAR_4->fatent_ops = &VAR_2;
 } else if (FUNC_3(VAR_4)) {
  VAR_4->fatent_shift = 1;
  VAR_4->fatent_ops = &VAR_1;
 } else if (FUNC_2(VAR_4)) {
  VAR_4->fatent_shift = -1;
  VAR_4->fatent_ops = &VAR_0;
 } else {
  FUNC_1(VAR_3, "invalid FAT variant, %u bits", VAR_4->fat_bits);
 }
}
