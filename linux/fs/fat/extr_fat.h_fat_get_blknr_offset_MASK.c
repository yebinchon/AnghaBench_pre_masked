
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_sb_info {int dir_per_block_bits; int dir_per_block; } ;
typedef int sector_t ;
typedef int loff_t ;



__attribute__((used)) static inline void FUNC_0(struct msdos_sb_info *VAR_0,
    loff_t VAR_1, sector_t *VAR_2, int *VAR_3)
{
 *VAR_2 = VAR_1 >> VAR_0->dir_per_block_bits;
 *VAR_3 = VAR_1 & (VAR_0->dir_per_block - 1);
}
