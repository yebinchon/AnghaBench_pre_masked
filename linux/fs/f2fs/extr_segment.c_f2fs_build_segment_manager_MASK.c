
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_super_block {int ssa_blkaddr; int segment_count_main; int segment_count; int main_blkaddr; int segment0_blkaddr; } ;
struct f2fs_sm_info {int main_segments; int rec_prefree_segments; int ipu_policy; int min_seq_blocks; int curseg_lock; int sit_entry_set; int min_ssr_sections; int min_hot_blocks; int min_fsync_blocks; int min_ipu_util; void* ssa_blkaddr; void* ovp_segments; void* reserved_segments; void* segment_count; void* main_blkaddr; void* seg0_blkaddr; } ;
struct f2fs_sb_info {int blocks_per_seg; int segs_per_sec; int sb; struct f2fs_sm_info* sm_info; } ;
struct f2fs_checkpoint {int overprov_segment_count; int rsvd_segment_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct f2fs_checkpoint* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_6 ;
 struct f2fs_super_block* FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 struct f2fs_sm_info* FUNC_10 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (struct f2fs_sb_info*,int ) ;

int FUNC_19(struct f2fs_sb_info *VAR_9)
{
 struct f2fs_super_block *VAR_10 = FUNC_1(VAR_9);
 struct f2fs_checkpoint *VAR_11 = FUNC_0(VAR_9);
 struct f2fs_sm_info *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_10(VAR_9, sizeof(struct f2fs_sm_info), VAR_7);
 if (!VAR_12)
  return -VAR_5;


 VAR_9->sm_info = VAR_12;
 VAR_12->seg0_blkaddr = FUNC_15(VAR_10->segment0_blkaddr);
 VAR_12->main_blkaddr = FUNC_15(VAR_10->main_blkaddr);
 VAR_12->segment_count = FUNC_15(VAR_10->segment_count);
 VAR_12->reserved_segments = FUNC_15(VAR_11->rsvd_segment_count);
 VAR_12->ovp_segments = FUNC_15(VAR_11->overprov_segment_count);
 VAR_12->main_segments = FUNC_15(VAR_10->segment_count_main);
 VAR_12->ssa_blkaddr = FUNC_15(VAR_10->ssa_blkaddr);
 VAR_12->rec_prefree_segments = VAR_12->main_segments *
     VAR_4 / 100;
 if (VAR_12->rec_prefree_segments > VAR_0)
  VAR_12->rec_prefree_segments = VAR_0;

 if (!FUNC_18(VAR_9, VAR_8))
  VAR_12->ipu_policy = 1 << VAR_6;
 VAR_12->min_ipu_util = VAR_3;
 VAR_12->min_fsync_blocks = VAR_1;
 VAR_12->min_seq_blocks = VAR_9->blocks_per_seg * VAR_9->segs_per_sec;
 VAR_12->min_hot_blocks = VAR_2;
 VAR_12->min_ssr_sections = FUNC_16(VAR_9);

 FUNC_2(&VAR_12->sit_entry_set);

 FUNC_14(&VAR_12->curseg_lock);

 if (!FUNC_11(VAR_9->sb)) {
  VAR_13 = FUNC_9(VAR_9);
  if (VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_8(VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_3(VAR_9);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_6(VAR_9);
 if (VAR_13)
  return VAR_13;

 FUNC_12(VAR_9);
 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_17(VAR_9);
 if (VAR_13)
  return VAR_13;

 FUNC_13(VAR_9);
 return 0;
}
