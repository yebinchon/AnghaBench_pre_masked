
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seg_entry {int valid_blocks; scalar_t__ mtime; scalar_t__ ckpt_valid_blocks; int ckpt_valid_map; int discard_map; int cur_valid_map_mir; int cur_valid_map; } ;
struct f2fs_sb_info {long blocks_per_seg; int discard_blks; int stat_lock; int unusable_block_count; } ;
typedef int block_t ;
struct TYPE_4__ {scalar_t__ max_mtime; int written_valid_blocks; } ;
struct TYPE_3__ {int valid_blocks; } ;


 unsigned int FUNC_0 (struct f2fs_sb_info*,int ) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,char*,int ,...) ;
 int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (unsigned int,int ) ;
 scalar_t__ FUNC_9 (unsigned int,int ) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*,int) ;
 TYPE_1__* FUNC_11 (struct f2fs_sb_info*,unsigned int) ;
 struct seg_entry* FUNC_12 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct f2fs_sb_info *VAR_1, block_t VAR_2, int VAR_3)
{
 struct seg_entry *VAR_4;
 unsigned int VAR_5, VAR_6;
 long int VAR_7;
 bool VAR_8;




 VAR_5 = FUNC_1(VAR_1, VAR_2);

 VAR_4 = FUNC_12(VAR_1, VAR_5);
 VAR_7 = VAR_4->valid_blocks + VAR_3;
 VAR_6 = FUNC_0(VAR_1, VAR_2);

 FUNC_5(VAR_1, (VAR_7 >> (sizeof(unsigned short) << 3) ||
    (VAR_7 > VAR_1->blocks_per_seg)));

 VAR_4->valid_blocks = VAR_7;
 VAR_4->mtime = FUNC_10(VAR_1, 0);
 if (VAR_4->mtime > FUNC_2(VAR_1)->max_mtime)
  FUNC_2(VAR_1)->max_mtime = VAR_4->mtime;


 if (VAR_3 > 0) {
  VAR_8 = FUNC_8(VAR_6, VAR_4->cur_valid_map);
  if (FUNC_16(VAR_8)) {
   FUNC_6(VAR_1, "Bitmap was wrongly set, blk:%u",
     VAR_2);
   FUNC_5(VAR_1, 1);
   VAR_4->valid_blocks--;
   VAR_3 = 0;
  }

  if (!FUNC_8(VAR_6, VAR_4->discard_map))
   VAR_1->discard_blks--;





  if (!FUNC_13(VAR_1, VAR_0)) {
   if (!FUNC_8(VAR_6, VAR_4->ckpt_valid_map))
    VAR_4->ckpt_valid_blocks++;
  }
 } else {
  VAR_8 = FUNC_7(VAR_6, VAR_4->cur_valid_map);
  if (FUNC_16(!VAR_8)) {
   FUNC_6(VAR_1, "Bitmap was wrongly cleared, blk:%u",
     VAR_2);
   FUNC_5(VAR_1, 1);
   VAR_4->valid_blocks++;
   VAR_3 = 0;
  } else if (FUNC_16(FUNC_13(VAR_1, VAR_0))) {






   if (FUNC_9(VAR_6, VAR_4->ckpt_valid_map)) {
    FUNC_14(&VAR_1->stat_lock);
    VAR_1->unusable_block_count++;
    FUNC_15(&VAR_1->stat_lock);
   }
  }

  if (FUNC_7(VAR_6, VAR_4->discard_map))
   VAR_1->discard_blks++;
 }
 if (!FUNC_9(VAR_6, VAR_4->ckpt_valid_map))
  VAR_4->ckpt_valid_blocks += VAR_3;

 FUNC_4(VAR_1, VAR_5);


 FUNC_2(VAR_1)->written_valid_blocks += VAR_3;

 if (FUNC_3(VAR_1))
  FUNC_11(VAR_1, VAR_5)->valid_blocks += VAR_3;
}
