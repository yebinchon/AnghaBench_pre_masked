
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct msdos_sb_info {int fat_bits; unsigned long fat_length; } ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct msdos_sb_info*) ;

__attribute__((used)) static unsigned long FUNC_2(struct super_block *VAR_0)
{
 struct msdos_sb_info *VAR_1 = FUNC_0(VAR_0);


 if (!FUNC_1(VAR_1)) {
  unsigned long VAR_2 = VAR_0->s_blocksize * 8 / VAR_1->fat_bits;
  return VAR_2 * VAR_1->fat_length;
 }

 return VAR_1->fat_length * VAR_0->s_blocksize * 8 / VAR_1->fat_bits;
}
