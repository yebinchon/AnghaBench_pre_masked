
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct gc_inode_list {int dummy; } ;
struct f2fs_summary_block {int entries; int footer; } ;
struct f2fs_sb_info {int migration_granularity; unsigned int* next_victim_seg; int stat_info; int segs_per_sec; } ;
struct blk_plug {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*,unsigned int) ;
 unsigned char FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct blk_plug*) ;
 int FUNC_9 (struct blk_plug*) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_sb_info*,char*,unsigned int,unsigned char,unsigned char) ;
 struct page* FUNC_12 (struct f2fs_sb_info*,int ) ;
 int FUNC_13 (struct page*,int ) ;
 int FUNC_14 (struct f2fs_sb_info*,int ,unsigned int,int ,int) ;
 int FUNC_15 (struct f2fs_sb_info*,int) ;
 int FUNC_16 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (struct f2fs_sb_info*,int ,struct gc_inode_list*,unsigned int,int) ;
 scalar_t__ FUNC_19 (struct f2fs_sb_info*,int ,unsigned int,int) ;
 TYPE_1__* FUNC_20 (struct f2fs_sb_info*,unsigned int) ;
 scalar_t__ FUNC_21 (struct f2fs_sb_info*,unsigned int,int) ;
 struct f2fs_summary_block* FUNC_22 (struct page*) ;
 unsigned int FUNC_23 (unsigned int,int ) ;
 int FUNC_24 (struct f2fs_sb_info*,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct f2fs_sb_info*,unsigned char,int) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (struct page*) ;

__attribute__((used)) static int FUNC_29(struct f2fs_sb_info *VAR_7,
    unsigned int VAR_8,
    struct gc_inode_list *VAR_9, int VAR_10)
{
 struct page *VAR_11;
 struct f2fs_summary_block *VAR_12;
 struct blk_plug VAR_13;
 unsigned int VAR_14 = VAR_8;
 unsigned int VAR_15 = VAR_8 + VAR_7->segs_per_sec;
 int VAR_16 = 0, VAR_17 = 0;
 unsigned char VAR_18 = FUNC_2(FUNC_20(VAR_7, VAR_14)->type) ?
      VAR_5 : VAR_6;
 int VAR_19 = 0;

 if (FUNC_7(VAR_7))
  VAR_15 = FUNC_23(VAR_15, VAR_7->segs_per_sec);


 if (FUNC_7(VAR_7))
  FUNC_14(VAR_7, FUNC_0(VAR_7, VAR_14),
     VAR_15 - VAR_14, VAR_2, 1);


 while (VAR_14 < VAR_15) {
  VAR_11 = FUNC_12(VAR_7, VAR_14++);
  if (FUNC_3(VAR_11)) {
   int VAR_20 = FUNC_5(VAR_11);

   VAR_15 = VAR_14 - 1;
   for (VAR_14 = VAR_8; VAR_14 < VAR_15; VAR_14++) {
    VAR_11 = FUNC_17(FUNC_4(VAR_7),
      FUNC_0(VAR_7, VAR_14));
    FUNC_13(VAR_11, 0);
    FUNC_13(VAR_11, 0);
   }
   return VAR_20;
  }
  FUNC_28(VAR_11);
 }

 FUNC_9(&VAR_13);

 for (VAR_14 = VAR_8; VAR_14 < VAR_15; VAR_14++) {


  VAR_11 = FUNC_17(FUNC_4(VAR_7),
     FUNC_0(VAR_7, VAR_14));
  FUNC_13(VAR_11, 0);

  if (FUNC_21(VAR_7, VAR_14, 0) == 0)
   goto freed;
  if (FUNC_7(VAR_7) &&
    VAR_17 >= VAR_7->migration_granularity)
   goto skip;
  if (!FUNC_6(VAR_11) || FUNC_27(FUNC_10(VAR_7)))
   goto skip;

  VAR_12 = FUNC_22(VAR_11);
  if (VAR_18 != FUNC_1((&VAR_12->footer))) {
   FUNC_11(VAR_7, "Inconsistent segment (%u) type [%d, %d] in SSA and SIT",
     VAR_14, VAR_18, FUNC_1((&VAR_12->footer)));
   FUNC_24(VAR_7, VAR_4);
   FUNC_15(VAR_7, 0);
   goto skip;
  }
  if (VAR_18 == VAR_6)
   VAR_19 += FUNC_19(VAR_7, VAR_12->entries, VAR_14,
        VAR_10);
  else
   VAR_19 += FUNC_18(VAR_7, VAR_12->entries, VAR_9,
       VAR_14, VAR_10);

  FUNC_26(VAR_7, VAR_18, VAR_10);

freed:
  if (VAR_10 == VAR_1 &&
    FUNC_21(VAR_7, VAR_14, 0) == 0)
   VAR_16++;
  VAR_17++;

  if (FUNC_7(VAR_7) && VAR_14 + 1 < VAR_15)
   VAR_7->next_victim_seg[VAR_10] = VAR_14 + 1;
skip:
  FUNC_13(VAR_11, 0);
 }

 if (VAR_19)
  FUNC_16(VAR_7,
    (VAR_18 == VAR_6) ? VAR_3 : VAR_0);

 FUNC_8(&VAR_13);

 FUNC_25(VAR_7->stat_info);

 return VAR_16;
}
