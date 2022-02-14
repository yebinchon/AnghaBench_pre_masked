
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_info {unsigned int sents_per_block; struct seg_entry* sentries; } ;
struct seg_entry {unsigned int valid_blocks; int cur_valid_map; int discard_map; int type; } ;
struct page {int dummy; } ;
struct f2fs_sit_entry {int dummy; } ;
struct f2fs_sit_block {struct f2fs_sit_entry* entries; } ;
struct f2fs_sb_info {unsigned int discard_blks; unsigned int blocks_per_seg; } ;
struct f2fs_journal {int dummy; } ;
struct curseg_info {int journal_rwsem; struct f2fs_journal* journal; } ;
typedef unsigned int block_t ;
struct TYPE_2__ {unsigned int valid_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 size_t FUNC_6 (struct sit_info*,unsigned int) ;
 struct sit_info* FUNC_7 (struct f2fs_sb_info*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct f2fs_sb_info*,unsigned int,struct f2fs_sit_entry*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct f2fs_sb_info*,char*,unsigned int,...) ;
 int FUNC_12 (struct page*,int) ;
 unsigned int FUNC_13 (struct f2fs_sb_info*,unsigned int,int ,int ,int) ;
 struct page* FUNC_14 (struct f2fs_sb_info*,unsigned int) ;
 TYPE_1__* FUNC_15 (struct f2fs_sb_info*,unsigned int) ;
 scalar_t__ FUNC_16 (struct f2fs_sb_info*,int ) ;
 unsigned int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int,int ) ;
 scalar_t__ FUNC_20 (struct page*) ;
 int FUNC_21 (struct seg_entry*,struct f2fs_sit_entry*) ;
 int FUNC_22 (struct f2fs_journal*,unsigned int) ;
 struct f2fs_sit_entry FUNC_23 (struct f2fs_journal*,unsigned int) ;
 unsigned int FUNC_24 (struct f2fs_journal*) ;
 int FUNC_25 (int *) ;
 unsigned int FUNC_26 (struct f2fs_sb_info*) ;

__attribute__((used)) static int FUNC_27(struct f2fs_sb_info *VAR_6)
{
 struct sit_info *VAR_7 = FUNC_7(VAR_6);
 struct curseg_info *VAR_8 = FUNC_0(VAR_6, VAR_2);
 struct f2fs_journal *VAR_9 = VAR_8->journal;
 struct seg_entry *VAR_10;
 struct f2fs_sit_entry VAR_11;
 int VAR_12 = FUNC_5(VAR_6);
 unsigned int VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17 = 0;
 int VAR_18 = 0;
 block_t VAR_19 = 0;

 do {
  VAR_16 = FUNC_13(VAR_6, VAR_17, VAR_0,
       VAR_4, 1);

  VAR_14 = VAR_17 * VAR_7->sents_per_block;
  VAR_15 = (VAR_17 + VAR_16) * VAR_7->sents_per_block;

  for (; VAR_14 < VAR_15 && VAR_14 < FUNC_3(VAR_6); VAR_14++) {
   struct f2fs_sit_block *VAR_20;
   struct page *VAR_21;

   VAR_10 = &VAR_7->sentries[VAR_14];
   VAR_21 = FUNC_14(VAR_6, VAR_14);
   if (FUNC_1(VAR_21))
    return FUNC_4(VAR_21);
   VAR_20 = (struct f2fs_sit_block *)FUNC_20(VAR_21);
   VAR_11 = VAR_20->entries[FUNC_6(VAR_7, VAR_14)];
   FUNC_12(VAR_21, 1);

   VAR_18 = FUNC_9(VAR_6, VAR_14, &VAR_11);
   if (VAR_18)
    return VAR_18;
   FUNC_21(VAR_10, &VAR_11);
   if (FUNC_2(VAR_10->type))
    VAR_19 += VAR_10->valid_blocks;


   if (FUNC_16(VAR_6, VAR_1)) {
    FUNC_19(VAR_10->discard_map, 0xff,
     VAR_5);
   } else {
    FUNC_18(VAR_10->discard_map,
     VAR_10->cur_valid_map,
     VAR_5);
    VAR_6->discard_blks +=
     VAR_6->blocks_per_seg -
     VAR_10->valid_blocks;
   }

   if (FUNC_8(VAR_6))
    FUNC_15(VAR_6, VAR_14)->valid_blocks +=
       VAR_10->valid_blocks;
  }
  VAR_17 += VAR_16;
 } while (VAR_17 < VAR_12);

 FUNC_10(&VAR_8->journal_rwsem);
 for (VAR_13 = 0; VAR_13 < FUNC_24(VAR_9); VAR_13++) {
  unsigned int VAR_22;

  VAR_14 = FUNC_17(FUNC_22(VAR_9, VAR_13));
  if (VAR_14 >= FUNC_3(VAR_6)) {
   FUNC_11(VAR_6, "Wrong journal entry on segno %u",
     VAR_14);
   VAR_18 = -VAR_3;
   break;
  }

  VAR_10 = &VAR_7->sentries[VAR_14];
  VAR_11 = FUNC_23(VAR_9, VAR_13);

  VAR_22 = VAR_10->valid_blocks;
  if (FUNC_2(VAR_10->type))
   VAR_19 -= VAR_22;

  VAR_18 = FUNC_9(VAR_6, VAR_14, &VAR_11);
  if (VAR_18)
   break;
  FUNC_21(VAR_10, &VAR_11);
  if (FUNC_2(VAR_10->type))
   VAR_19 += VAR_10->valid_blocks;

  if (FUNC_16(VAR_6, VAR_1)) {
   FUNC_19(VAR_10->discard_map, 0xff, VAR_5);
  } else {
   FUNC_18(VAR_10->discard_map, VAR_10->cur_valid_map,
      VAR_5);
   VAR_6->discard_blks += VAR_22;
   VAR_6->discard_blks -= VAR_10->valid_blocks;
  }

  if (FUNC_8(VAR_6)) {
   FUNC_15(VAR_6, VAR_14)->valid_blocks +=
       VAR_10->valid_blocks;
   FUNC_15(VAR_6, VAR_14)->valid_blocks -=
       VAR_22;
  }
 }
 FUNC_25(&VAR_8->journal_rwsem);

 if (!VAR_18 && VAR_19 != FUNC_26(VAR_6)) {
  FUNC_11(VAR_6, "SIT is corrupted node# %u vs %u",
    VAR_19, FUNC_26(VAR_6));
  VAR_18 = -VAR_3;
 }

 return VAR_18;
}
