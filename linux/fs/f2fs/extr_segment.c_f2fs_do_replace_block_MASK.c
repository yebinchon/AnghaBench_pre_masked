
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_info {int sentry_lock; } ;
struct seg_entry {int type; scalar_t__ valid_blocks; } ;
struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {unsigned int segno; unsigned short next_blkoff; unsigned int next_segno; int curseg_mutex; } ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {int curseg_lock; } ;


 int VAR_0 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_1 ;
 unsigned short FUNC_1 (struct f2fs_sb_info*,scalar_t__) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 struct sit_info* FUNC_6 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*,int,struct f2fs_summary*) ;
 int FUNC_9 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_10 (struct f2fs_sb_info*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct f2fs_sb_info*,int) ;
 struct seg_entry* FUNC_13 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct f2fs_sb_info*,scalar_t__,int) ;

void FUNC_20(struct f2fs_sb_info *VAR_5, struct f2fs_summary *VAR_6,
    block_t VAR_7, block_t VAR_8,
    bool VAR_9, bool VAR_10)
{
 struct sit_info *VAR_11 = FUNC_6(VAR_5);
 struct curseg_info *VAR_12;
 unsigned int VAR_13, VAR_14;
 struct seg_entry *VAR_15;
 int VAR_16;
 unsigned short VAR_17;

 VAR_13 = FUNC_2(VAR_5, VAR_8);
 VAR_15 = FUNC_13(VAR_5, VAR_13);
 VAR_16 = VAR_15->type;

 FUNC_11(&FUNC_7(VAR_5)->curseg_lock);

 if (!VAR_9) {

  if (VAR_15->valid_blocks == 0 && !FUNC_3(VAR_5, VAR_13)) {
   if (VAR_7 == VAR_3)
    VAR_16 = VAR_0;
   else
    VAR_16 = VAR_1;
  }
 } else {
  if (FUNC_3(VAR_5, VAR_13)) {

   VAR_16 = FUNC_9(VAR_5, VAR_13);
   FUNC_12(VAR_5, VAR_16 == VAR_2);
  } else {
   VAR_16 = VAR_1;
  }
 }

 FUNC_12(VAR_5, !FUNC_4(VAR_16));
 VAR_12 = FUNC_0(VAR_5, VAR_16);

 FUNC_16(&VAR_12->curseg_mutex);
 FUNC_11(&VAR_11->sentry_lock);

 VAR_14 = VAR_12->segno;
 VAR_17 = VAR_12->next_blkoff;


 if (VAR_13 != VAR_12->segno) {
  VAR_12->next_segno = VAR_13;
  FUNC_10(VAR_5, VAR_16);
 }

 VAR_12->next_blkoff = FUNC_1(VAR_5, VAR_8);
 FUNC_8(VAR_5, VAR_16, VAR_6);

 if (!VAR_9 || VAR_10)
  FUNC_19(VAR_5, VAR_8, 1);
 if (FUNC_2(VAR_5, VAR_7) != VAR_4) {
  FUNC_14(FUNC_5(VAR_5),
     VAR_7, VAR_7);
  FUNC_19(VAR_5, VAR_7, -1);
 }

 FUNC_15(VAR_5, FUNC_2(VAR_5, VAR_7));
 FUNC_15(VAR_5, FUNC_2(VAR_5, VAR_8));

 FUNC_15(VAR_5, VAR_14);

 if (VAR_9) {
  if (VAR_14 != VAR_12->segno) {
   VAR_12->next_segno = VAR_14;
   FUNC_10(VAR_5, VAR_16);
  }
  VAR_12->next_blkoff = VAR_17;
 }

 FUNC_18(&VAR_11->sentry_lock);
 FUNC_17(&VAR_12->curseg_mutex);
 FUNC_18(&FUNC_7(VAR_5)->curseg_lock);
}
