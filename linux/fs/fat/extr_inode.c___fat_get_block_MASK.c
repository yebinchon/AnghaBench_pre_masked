
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct msdos_sb_info {int sec_per_clus; } ;
struct inode {int i_blocks; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int mmu_private; int i_pos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct msdos_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int,int*,unsigned long*,int,int) ;
 int FUNC_5 (struct super_block*,char*,int ,unsigned long long) ;
 int FUNC_6 (struct buffer_head*,struct super_block*,int) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static inline int FUNC_9(struct inode *VAR_1, sector_t VAR_2,
      unsigned long *VAR_3,
      struct buffer_head *VAR_4, int VAR_5)
{
 struct super_block *VAR_6 = VAR_1->i_sb;
 struct msdos_sb_info *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;
 sector_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_1, VAR_2, &VAR_9, &VAR_8, VAR_5, 0);
 if (VAR_11)
  return VAR_11;
 if (VAR_9) {
  FUNC_6(VAR_4, VAR_6, VAR_9);
  *VAR_3 = FUNC_7(VAR_8, *VAR_3);
  return 0;
 }
 if (!VAR_5)
  return 0;

 if (VAR_2 != FUNC_1(VAR_1)->mmu_private >> VAR_6->s_blocksize_bits) {
  FUNC_5(VAR_6, "corrupted file size (i_pos %lld, %lld)",
   FUNC_1(VAR_1)->i_pos, FUNC_1(VAR_1)->mmu_private);
  return -VAR_0;
 }

 VAR_10 = VAR_1->i_blocks >> (VAR_6->s_blocksize_bits - 9);
 VAR_12 = (unsigned long)VAR_2 & (VAR_7->sec_per_clus - 1);





 if (!VAR_12 && !(VAR_2 < VAR_10)) {

  VAR_11 = FUNC_3(VAR_1);
  if (VAR_11)
   return VAR_11;
 }

 VAR_8 = VAR_7->sec_per_clus - VAR_12;

 *VAR_3 = FUNC_7(VAR_8, *VAR_3);
 FUNC_1(VAR_1)->mmu_private += *VAR_3 << VAR_6->s_blocksize_bits;

 VAR_11 = FUNC_4(VAR_1, VAR_2, &VAR_9, &VAR_8, VAR_5, 0);
 if (VAR_11)
  return VAR_11;
 if (!VAR_9) {
  FUNC_5(VAR_6,
        "invalid FAT chain (i_pos %lld, last_block %llu)",
        FUNC_1(VAR_1)->i_pos,
        (unsigned long long)VAR_10);
  return -VAR_0;
 }

 FUNC_0(*VAR_3 != VAR_8);
 FUNC_8(VAR_4);
 FUNC_6(VAR_4, VAR_6, VAR_9);

 return 0;
}
