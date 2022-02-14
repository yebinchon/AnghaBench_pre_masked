
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {int s_ind_per_block_bits; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;

__attribute__((used)) static unsigned FUNC_1(struct super_block *VAR_2, loff_t VAR_3)
{
 struct sysv_sb_info *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = VAR_4->s_ind_per_block_bits;
 unsigned VAR_6, VAR_7, VAR_8 = VAR_1, VAR_9 = VAR_0;
 VAR_6 = (VAR_3 + VAR_2->s_blocksize - 1) >> VAR_2->s_blocksize_bits;
 VAR_7 = VAR_6;
 while (--VAR_9 && VAR_6 > VAR_8) {
  VAR_6 = ((VAR_6 - VAR_8 - 1) >> VAR_5) + 1;
  VAR_7 += VAR_6;
  VAR_8 = 1;
 }
 return VAR_6;
}
