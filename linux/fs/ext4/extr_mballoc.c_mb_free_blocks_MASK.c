
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {int i_ino; } ;
struct ext4_sb_info {int* s_mb_maxs; } ;
struct ext4_buddy {TYPE_1__* bd_info; int bd_group; int bd_bitmap; struct super_block* bd_sb; } ;
typedef int ext4_fsblk_t ;
struct TYPE_3__ {int bb_free; int bb_first_free; int* bb_counters; int bb_fragments; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct super_block*,int ) ;
 int FUNC_8 (struct super_block*,int ,int ,int ,char*,int) ;
 int FUNC_9 (struct super_block*,int ,int ) ;
 int FUNC_10 (struct ext4_buddy*,int,int) ;
 int FUNC_11 (struct ext4_buddy*) ;
 int FUNC_12 (struct inode*,struct ext4_buddy*,int,int) ;
 int FUNC_13 (struct ext4_buddy*) ;
 int FUNC_14 (struct super_block*,TYPE_1__*) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct inode *VAR_1, struct ext4_buddy *VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8 = VAR_3 + VAR_4 - 1;
 struct super_block *VAR_9 = VAR_2->bd_sb;

 if (FUNC_4(VAR_4 == 0))
  return;
 FUNC_0(VAR_8 >= (VAR_9->s_blocksize << 3));
 FUNC_5(FUNC_7(VAR_9, VAR_2->bd_group));

 if (FUNC_17(FUNC_2(VAR_2->bd_info)))
  return;

 FUNC_11(VAR_2);
 FUNC_12(VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_2->bd_info->bb_free += VAR_4;
 if (VAR_3 < VAR_2->bd_info->bb_first_free)
  VAR_2->bd_info->bb_first_free = VAR_3;




 if (VAR_3 != 0)
  VAR_5 = !FUNC_16(VAR_3 - 1, VAR_2->bd_bitmap);
 VAR_7 = FUNC_15(VAR_2->bd_bitmap, VAR_3, VAR_4);
 if (VAR_8 + 1 < FUNC_3(VAR_9)->s_mb_maxs[0])
  VAR_6 = !FUNC_16(VAR_8 + 1, VAR_2->bd_bitmap);

 if (FUNC_17(VAR_7 != -1)) {
  struct ext4_sb_info *VAR_10 = FUNC_3(VAR_9);
  ext4_fsblk_t VAR_11;

  VAR_11 = FUNC_6(VAR_9, VAR_2->bd_group);
  VAR_11 += FUNC_1(VAR_10, VAR_7);
  FUNC_8(VAR_9, VAR_2->bd_group,
          VAR_1 ? VAR_1->i_ino : 0,
          VAR_11,
          "freeing already freed block "
          "(bit %u); block bitmap corrupt.",
          VAR_7);
  FUNC_9(VAR_9, VAR_2->bd_group,
    VAR_0);
  FUNC_13(VAR_2);
  goto done;
 }


 if (VAR_5 && VAR_6)
  VAR_2->bd_info->bb_fragments--;
 else if (!VAR_5 && !VAR_6)
  VAR_2->bd_info->bb_fragments++;







 if (VAR_3 & 1) {
  VAR_3 += !VAR_5;
  VAR_2->bd_info->bb_counters[0] += VAR_5 ? -1 : 1;
 }
 if (!(VAR_8 & 1)) {
  VAR_8 -= !VAR_6;
  VAR_2->bd_info->bb_counters[0] += VAR_6 ? -1 : 1;
 }

 if (VAR_3 <= VAR_8)
  FUNC_10(VAR_2, VAR_3 >> 1, VAR_8 >> 1);

done:
 FUNC_14(VAR_9, VAR_2->bd_info);
 FUNC_11(VAR_2);
}
