
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sit_info {char* bitmap; int sit_base_addr; unsigned int sit_blocks; unsigned int bitmap_size; int sentry_lock; int mounted_time; int elapsed_time; int sents_per_block; scalar_t__ dirty_sentries; scalar_t__ written_valid_blocks; int * s_ops; void* invalid_segmap; void* sit_bitmap_mir; void* sit_bitmap; void* sec_entries; void* tmp_map; TYPE_1__* sentries; void* dirty_sentries_bitmap; } ;
struct seg_entry {int dummy; } ;
struct sec_entry {int dummy; } ;
struct f2fs_super_block {int sit_blkaddr; int segment_count_sit; } ;
struct f2fs_sb_info {unsigned int log_blocks_per_seg; TYPE_2__* ckpt; } ;
struct TYPE_6__ {struct sit_info* sit_info; } ;
struct TYPE_5__ {int elapsed_time; } ;
struct TYPE_4__ {char* cur_valid_map; char* ckpt_valid_map; char* cur_valid_map_mir; char* discard_map; } ;


 int VAR_0 ;
 struct f2fs_super_block* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (struct f2fs_sb_info*) ;
 char* FUNC_4 (struct f2fs_sb_info*,int ) ;
 unsigned int FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*) ;
 unsigned int FUNC_7 (int,unsigned int) ;
 int VAR_5 ;
 unsigned int FUNC_8 (unsigned int) ;
 void* FUNC_9 (struct f2fs_sb_info*,unsigned int,int ) ;
 void* FUNC_10 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (char*,unsigned int,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct f2fs_sb_info *VAR_6)
{
 struct f2fs_super_block *VAR_7 = FUNC_0(VAR_6);
 struct sit_info *VAR_8;
 unsigned int VAR_9, VAR_10;
 char *VAR_11, *VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15;


 VAR_8 = FUNC_10(VAR_6, sizeof(struct sit_info), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_6)->sit_info = VAR_8;

 VAR_8->sentries =
  FUNC_9(VAR_6, FUNC_7(sizeof(struct seg_entry),
           FUNC_2(VAR_6)),
         VAR_1);
 if (!VAR_8->sentries)
  return -VAR_0;

 VAR_14 = FUNC_8(FUNC_2(VAR_6));
 VAR_8->dirty_sentries_bitmap = FUNC_9(VAR_6, VAR_14,
        VAR_1);
 if (!VAR_8->dirty_sentries_bitmap)
  return -VAR_0;




 VAR_13 = FUNC_2(VAR_6) * VAR_4 * 3;

 VAR_8->bitmap = FUNC_9(VAR_6, VAR_13, VAR_1);
 if (!VAR_8->bitmap)
  return -VAR_0;

 VAR_12 = VAR_8->bitmap;

 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_6); VAR_10++) {
  VAR_8->sentries[VAR_10].cur_valid_map = VAR_12;
  VAR_12 += VAR_4;

  VAR_8->sentries[VAR_10].ckpt_valid_map = VAR_12;
  VAR_12 += VAR_4;






  VAR_8->sentries[VAR_10].discard_map = VAR_12;
  VAR_12 += VAR_4;
 }

 VAR_8->tmp_map = FUNC_10(VAR_6, VAR_4, VAR_1);
 if (!VAR_8->tmp_map)
  return -VAR_0;

 if (FUNC_6(VAR_6)) {
  VAR_8->sec_entries =
   FUNC_9(VAR_6, FUNC_7(sizeof(struct sec_entry),
            FUNC_1(VAR_6)),
          VAR_1);
  if (!VAR_8->sec_entries)
   return -VAR_0;
 }


 VAR_9 = FUNC_14(VAR_7->segment_count_sit) >> 1;


 VAR_15 = FUNC_5(VAR_6, VAR_2);
 VAR_11 = FUNC_4(VAR_6, VAR_2);

 VAR_8->sit_bitmap = FUNC_12(VAR_11, VAR_15, VAR_1);
 if (!VAR_8->sit_bitmap)
  return -VAR_0;
 VAR_8->s_ops = &VAR_5;

 VAR_8->sit_base_addr = FUNC_14(VAR_7->sit_blkaddr);
 VAR_8->sit_blocks = VAR_9 << VAR_6->log_blocks_per_seg;
 VAR_8->written_valid_blocks = 0;
 VAR_8->bitmap_size = VAR_15;
 VAR_8->dirty_sentries = 0;
 VAR_8->sents_per_block = VAR_3;
 VAR_8->elapsed_time = FUNC_15(VAR_6->ckpt->elapsed_time);
 VAR_8->mounted_time = FUNC_13();
 FUNC_11(&VAR_8->sentry_lock);
 return 0;
}
