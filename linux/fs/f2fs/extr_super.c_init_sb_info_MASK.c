
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_super_block {int meta_ino; int node_ino; int root_ino; int segment_count_nat; int section_count; int secs_per_zone; int segs_per_sec; int log_blocks_per_seg; int log_blocksize; int log_sectors_per_block; } ;
struct f2fs_sb_info {int log_sectors_per_block; int log_blocksize; int blocksize; int log_blocks_per_seg; int blocks_per_seg; int segs_per_sec; int secs_per_zone; int total_sections; int total_node_count; int root_ino_num; int node_ino_num; int meta_ino_num; int migration_granularity; int sb_lock; int dev_lock; scalar_t__ dirty_device; int cp_lock; int io_order_lock; int umount_mutex; int s_list; int * wb_sync_req; int * nr_pages; void** interval_time; int dir_level; int max_victim_search; void** next_victim_seg; int cur_victim_sec; struct f2fs_super_block* raw_super; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct f2fs_sb_info *VAR_20)
{
 struct f2fs_super_block *VAR_21 = VAR_20->raw_super;
 int VAR_22;

 VAR_20->log_sectors_per_block =
  FUNC_4(VAR_21->log_sectors_per_block);
 VAR_20->log_blocksize = FUNC_4(VAR_21->log_blocksize);
 VAR_20->blocksize = 1 << VAR_20->log_blocksize;
 VAR_20->log_blocks_per_seg = FUNC_4(VAR_21->log_blocks_per_seg);
 VAR_20->blocks_per_seg = 1 << VAR_20->log_blocks_per_seg;
 VAR_20->segs_per_sec = FUNC_4(VAR_21->segs_per_sec);
 VAR_20->secs_per_zone = FUNC_4(VAR_21->secs_per_zone);
 VAR_20->total_sections = FUNC_4(VAR_21->section_count);
 VAR_20->total_node_count =
  (FUNC_4(VAR_21->segment_count_nat) / 2)
   * VAR_20->blocks_per_seg * VAR_13;
 VAR_20->root_ino_num = FUNC_4(VAR_21->root_ino);
 VAR_20->node_ino_num = FUNC_4(VAR_21->node_ino);
 VAR_20->meta_ino_num = FUNC_4(VAR_21->meta_ino);
 VAR_20->cur_victim_sec = VAR_15;
 VAR_20->next_victim_seg[VAR_0] = VAR_16;
 VAR_20->next_victim_seg[VAR_10] = VAR_16;
 VAR_20->max_victim_search = VAR_6;
 VAR_20->migration_granularity = VAR_20->segs_per_sec;

 VAR_20->dir_level = VAR_3;
 VAR_20->interval_time[VAR_1] = VAR_2;
 VAR_20->interval_time[VAR_17] = VAR_5;
 VAR_20->interval_time[VAR_9] = VAR_5;
 VAR_20->interval_time[VAR_11] = VAR_5;
 VAR_20->interval_time[VAR_8] = VAR_4;
 VAR_20->interval_time[VAR_19] =
    VAR_7;
 FUNC_2(VAR_20, VAR_18);

 for (VAR_22 = 0; VAR_22 < VAR_14; VAR_22++)
  FUNC_1(&VAR_20->nr_pages[VAR_22], 0);

 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++)
  FUNC_1(&VAR_20->wb_sync_req[VAR_22], 0);

 FUNC_0(&VAR_20->s_list);
 FUNC_5(&VAR_20->umount_mutex);
 FUNC_3(&VAR_20->io_order_lock);
 FUNC_6(&VAR_20->cp_lock);

 VAR_20->dirty_device = 0;
 FUNC_6(&VAR_20->dev_lock);

 FUNC_3(&VAR_20->sb_lock);
}
