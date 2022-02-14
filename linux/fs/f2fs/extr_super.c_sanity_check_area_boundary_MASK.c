
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int s_bdev; } ;
struct f2fs_super_block {int segment_count; int log_blocks_per_seg; int segment_count_main; int segment_count_ssa; int segment_count_nat; int segment_count_sit; int segment_count_ckpt; int main_blkaddr; int ssa_blkaddr; int nat_blkaddr; int sit_blkaddr; int cp_blkaddr; int segment0_blkaddr; } ;
struct f2fs_sb_info {struct super_block* sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct f2fs_sb_info*,char*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline bool FUNC_7(struct f2fs_sb_info *VAR_2,
     struct buffer_head *VAR_3)
{
 struct f2fs_super_block *VAR_4 = (struct f2fs_super_block *)
     (VAR_3->b_data + VAR_0);
 struct super_block *VAR_5 = VAR_2->sb;
 u32 VAR_6 = FUNC_5(VAR_4->segment0_blkaddr);
 u32 VAR_7 = FUNC_5(VAR_4->cp_blkaddr);
 u32 VAR_8 = FUNC_5(VAR_4->sit_blkaddr);
 u32 VAR_9 = FUNC_5(VAR_4->nat_blkaddr);
 u32 VAR_10 = FUNC_5(VAR_4->ssa_blkaddr);
 u32 VAR_11 = FUNC_5(VAR_4->main_blkaddr);
 u32 VAR_12 = FUNC_5(VAR_4->segment_count_ckpt);
 u32 VAR_13 = FUNC_5(VAR_4->segment_count_sit);
 u32 VAR_14 = FUNC_5(VAR_4->segment_count_nat);
 u32 VAR_15 = FUNC_5(VAR_4->segment_count_ssa);
 u32 VAR_16 = FUNC_5(VAR_4->segment_count_main);
 u32 VAR_17 = FUNC_5(VAR_4->segment_count);
 u32 VAR_18 = FUNC_5(VAR_4->log_blocks_per_seg);
 u64 VAR_19 = VAR_11 +
    (VAR_16 << VAR_18);
 u64 VAR_20 = VAR_6 +
    (VAR_17 << VAR_18);

 if (VAR_6 != VAR_7) {
  FUNC_3(VAR_2, "Mismatch start address, segment0(%u) cp_blkaddr(%u)",
     VAR_6, VAR_7);
  return 1;
 }

 if (VAR_7 + (VAR_12 << VAR_18) !=
       VAR_8) {
  FUNC_3(VAR_2, "Wrong CP boundary, start(%u) end(%u) blocks(%u)",
     VAR_7, VAR_8,
     VAR_12 << VAR_18);
  return 1;
 }

 if (VAR_8 + (VAR_13 << VAR_18) !=
       VAR_9) {
  FUNC_3(VAR_2, "Wrong SIT boundary, start(%u) end(%u) blocks(%u)",
     VAR_8, VAR_9,
     VAR_13 << VAR_18);
  return 1;
 }

 if (VAR_9 + (VAR_14 << VAR_18) !=
       VAR_10) {
  FUNC_3(VAR_2, "Wrong NAT boundary, start(%u) end(%u) blocks(%u)",
     VAR_9, VAR_10,
     VAR_14 << VAR_18);
  return 1;
 }

 if (VAR_10 + (VAR_15 << VAR_18) !=
       VAR_11) {
  FUNC_3(VAR_2, "Wrong SSA boundary, start(%u) end(%u) blocks(%u)",
     VAR_10, VAR_11,
     VAR_15 << VAR_18);
  return 1;
 }

 if (VAR_19 > VAR_20) {
  FUNC_3(VAR_2, "Wrong MAIN_AREA boundary, start(%u) end(%u) block(%u)",
     VAR_11,
     VAR_6 +
     (VAR_17 << VAR_18),
     VAR_16 << VAR_18);
  return 1;
 } else if (VAR_19 < VAR_20) {
  int VAR_21 = 0;
  char *VAR_22;


  VAR_4->segment_count = FUNC_2((VAR_19 -
    VAR_6) >> VAR_18);

  if (FUNC_4(VAR_5) || FUNC_1(VAR_5->s_bdev)) {
   FUNC_6(VAR_2, VAR_1);
   VAR_22 = "internally";
  } else {
   VAR_21 = FUNC_0(VAR_3, ((void*)0));
   VAR_22 = VAR_21 ? "failed" : "done";
  }
  FUNC_3(VAR_2, "Fix alignment : %s, start(%u) end(%u) block(%u)",
     VAR_22, VAR_11,
     VAR_6 +
     (VAR_17 << VAR_18),
     VAR_16 << VAR_18);
  if (VAR_21)
   return 1;
 }
 return 0;
}
