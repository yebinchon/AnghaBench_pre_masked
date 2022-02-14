
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct msdos_sb_info {int fatent_shift; scalar_t__ fat_start; } ;
typedef scalar_t__ sector_t ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct msdos_sb_info*,int) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, int VAR_1,
       int *VAR_2, sector_t *VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = (VAR_1 << VAR_4->fatent_shift);
 FUNC_1(!FUNC_2(VAR_4, VAR_1));
 *VAR_2 = VAR_5 & (VAR_0->s_blocksize - 1);
 *VAR_3 = VAR_4->fat_start + (VAR_5 >> VAR_0->s_blocksize_bits);
}
