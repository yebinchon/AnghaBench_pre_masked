
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_super_block {int segment_count_main; int log_blocks_per_seg; int segment_count_ssa; int segment_count_nat; int segment_count_sit; int segment_count_ckpt; int segment_count; } ;
struct f2fs_sb_info {unsigned int total_node_count; unsigned int blocks_per_seg; } ;
struct f2fs_checkpoint {int checksum_offset; int nat_ver_bitmap_bytesize; int sit_ver_bitmap_bytesize; int * cur_node_segno; int * cur_data_segno; int * cur_data_blkoff; int * cur_node_blkoff; int valid_node_count; int valid_block_count; int user_block_count; int rsvd_segment_count; int overprov_segment_count; } ;
typedef unsigned int block_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct f2fs_checkpoint* FUNC_0 (struct f2fs_sb_info*) ;
 unsigned int VAR_2 ;
 struct f2fs_super_block* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_checkpoint*,int ) ;
 unsigned int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct f2fs_sb_info*,char*,...) ;
 int FUNC_7 (struct f2fs_sb_info*,char*,unsigned int) ;
 unsigned int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct f2fs_sb_info *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct f2fs_super_block *VAR_10 = FUNC_1(VAR_7);
 struct f2fs_checkpoint *VAR_11 = FUNC_0(VAR_7);
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22, VAR_23;
 block_t VAR_24, VAR_25;
 block_t VAR_26, VAR_27;
 int VAR_28, VAR_29;

 VAR_8 = FUNC_9(VAR_10->segment_count);
 VAR_9 = FUNC_9(VAR_10->segment_count_ckpt);
 VAR_16 = FUNC_9(VAR_10->segment_count_sit);
 VAR_9 += VAR_16;
 VAR_17 = FUNC_9(VAR_10->segment_count_nat);
 VAR_9 += VAR_17;
 VAR_9 += FUNC_9(VAR_11->rsvd_segment_count);
 VAR_9 += FUNC_9(VAR_10->segment_count_ssa);

 if (FUNC_11(VAR_9 >= VAR_8))
  return 1;

 VAR_12 = FUNC_9(VAR_11->overprov_segment_count);
 VAR_13 = FUNC_9(VAR_11->rsvd_segment_count);

 if (FUNC_11(VAR_9 < VAR_2 ||
   VAR_12 == 0 || VAR_13 == 0)) {
  FUNC_6(VAR_7, "Wrong layout: check mkfs.f2fs version");
  return 1;
 }

 VAR_24 = FUNC_10(VAR_11->user_block_count);
 VAR_21 = FUNC_9(VAR_10->segment_count_main);
 VAR_20 = FUNC_9(VAR_10->log_blocks_per_seg);
 if (!VAR_24 || VAR_24 >=
   VAR_21 << VAR_20) {
  FUNC_6(VAR_7, "Wrong user_block_count: %u",
    VAR_24);
  return 1;
 }

 VAR_25 = FUNC_10(VAR_11->valid_block_count);
 if (VAR_25 > VAR_24) {
  FUNC_6(VAR_7, "Wrong valid_user_blocks: %u, user_block_count: %u",
    VAR_25, VAR_24);
  return 1;
 }

 VAR_27 = FUNC_9(VAR_11->valid_node_count);
 VAR_26 = VAR_7->total_node_count - VAR_3;
 if (VAR_27 > VAR_26) {
  FUNC_6(VAR_7, "Wrong valid_node_count: %u, avail_node_count: %u",
    VAR_27, VAR_26);
  return 1;
 }

 VAR_14 = FUNC_9(VAR_10->segment_count_main);
 VAR_15 = VAR_7->blocks_per_seg;

 for (VAR_28 = 0; VAR_28 < VAR_5; VAR_28++) {
  if (FUNC_9(VAR_11->cur_node_segno[VAR_28]) >= VAR_14 ||
   FUNC_8(VAR_11->cur_node_blkoff[VAR_28]) >= VAR_15)
   return 1;
  for (VAR_29 = VAR_28 + 1; VAR_29 < VAR_5; VAR_29++) {
   if (FUNC_9(VAR_11->cur_node_segno[VAR_28]) ==
    FUNC_9(VAR_11->cur_node_segno[VAR_29])) {
    FUNC_6(VAR_7, "Node segment (%u, %u) has the same segno: %u",
      VAR_28, VAR_29,
      FUNC_9(VAR_11->cur_node_segno[VAR_28]));
    return 1;
   }
  }
 }
 for (VAR_28 = 0; VAR_28 < VAR_4; VAR_28++) {
  if (FUNC_9(VAR_11->cur_data_segno[VAR_28]) >= VAR_14 ||
   FUNC_8(VAR_11->cur_data_blkoff[VAR_28]) >= VAR_15)
   return 1;
  for (VAR_29 = VAR_28 + 1; VAR_29 < VAR_4; VAR_29++) {
   if (FUNC_9(VAR_11->cur_data_segno[VAR_28]) ==
    FUNC_9(VAR_11->cur_data_segno[VAR_29])) {
    FUNC_6(VAR_7, "Data segment (%u, %u) has the same segno: %u",
      VAR_28, VAR_29,
      FUNC_9(VAR_11->cur_data_segno[VAR_28]));
    return 1;
   }
  }
 }
 for (VAR_28 = 0; VAR_28 < VAR_5; VAR_28++) {
  for (VAR_29 = 0; VAR_29 < VAR_4; VAR_29++) {
   if (FUNC_9(VAR_11->cur_node_segno[VAR_28]) ==
    FUNC_9(VAR_11->cur_data_segno[VAR_29])) {
    FUNC_6(VAR_7, "Node segment (%u) and Data segment (%u) has the same segno: %u",
      VAR_28, VAR_29,
      FUNC_9(VAR_11->cur_node_segno[VAR_28]));
    return 1;
   }
  }
 }

 VAR_18 = FUNC_9(VAR_11->sit_ver_bitmap_bytesize);
 VAR_19 = FUNC_9(VAR_11->nat_ver_bitmap_bytesize);

 if (VAR_18 != ((VAR_16 / 2) << VAR_20) / 8 ||
  VAR_19 != ((VAR_17 / 2) << VAR_20) / 8) {
  FUNC_6(VAR_7, "Wrong bitmap size: sit: %u, nat:%u",
    VAR_18, VAR_19);
  return 1;
 }

 VAR_22 = FUNC_4(VAR_7);
 VAR_23 = FUNC_2(VAR_7);
 if (VAR_22 < VAR_23 + 1 ||
  VAR_22 > VAR_15 - 1 -
   VAR_6) {
  FUNC_6(VAR_7, "Wrong cp_pack_start_sum: %u",
    VAR_22);
  return 1;
 }

 if (FUNC_3(VAR_11, VAR_0) &&
  FUNC_9(VAR_11->checksum_offset) != VAR_1) {
  FUNC_7(VAR_7, "using deprecated layout of large_nat_bitmap, "
     "please run fsck v1.13.0 or higher to repair, chksum_offset: %u, "
     "fixed with patch: \"f2fs-tools: relocate chksum_offset for large_nat_bitmap feature\"",
     FUNC_9(VAR_11->checksum_offset));
  return 1;
 }

 if (FUNC_11(FUNC_5(VAR_7))) {
  FUNC_6(VAR_7, "A bug case: need to run fsck");
  return 1;
 }
 return 0;
}
