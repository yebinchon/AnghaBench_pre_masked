
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct ext4_sb_info {int* s_mb_offsets; } ;
struct ext4_group_info {int * bb_counters; } ;
typedef scalar_t__ ext4_grpblk_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,void*) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_0,
    void *VAR_1, ext4_grpblk_t VAR_2, ext4_grpblk_t VAR_3,
     struct ext4_group_info *VAR_4)
{
 struct ext4_sb_info *VAR_5 = FUNC_2(VAR_0);
 ext4_grpblk_t VAR_6;
 ext4_grpblk_t VAR_7;
 ext4_grpblk_t VAR_8;
 unsigned int VAR_9;

 FUNC_0(VAR_3 > FUNC_1(VAR_0));

 VAR_9 = 2 << VAR_0->s_blocksize_bits;

 while (VAR_3 > 0) {

  VAR_7 = FUNC_3(VAR_2 | VAR_9) - 1;


  VAR_6 = FUNC_4(VAR_3) - 1;

  if (VAR_7 < VAR_6)
   VAR_6 = VAR_7;
  VAR_8 = 1 << VAR_6;


  VAR_4->bb_counters[VAR_6]++;
  if (VAR_6 > 0)
   FUNC_5(VAR_2 >> VAR_6,
         VAR_1 + VAR_5->s_mb_offsets[VAR_6]);

  VAR_3 -= VAR_8;
  VAR_2 += VAR_8;
 }
}
