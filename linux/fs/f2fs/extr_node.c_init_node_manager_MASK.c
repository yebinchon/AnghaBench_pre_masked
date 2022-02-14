
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_super_block {int log_blocks_per_seg; int segment_count_nat; int nat_blkaddr; } ;
struct f2fs_sb_info {int total_valid_node_count; TYPE_1__* ckpt; } ;
struct f2fs_nm_info {unsigned int nat_blkaddr; unsigned int nat_blocks; int max_nid; int available_nids; unsigned int next_scan_nid; void* nat_bitmap_mir; int bitmap_size; void* nat_bitmap; int nat_tree_lock; int nid_list_lock; int build_lock; int nat_list_lock; int nat_entries; int nat_set_root; int nat_root; int free_nid_list; int free_nid_root; int dirty_nats_ratio; int ra_nid_pages; int ram_thresh; scalar_t__ nat_cnt; scalar_t__* nid_cnt; } ;
struct TYPE_2__ {int next_free_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct f2fs_super_block* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 struct f2fs_nm_info* FUNC_3 (struct f2fs_sb_info*) ;
 size_t VAR_12 ;
 unsigned char* FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (unsigned char*,int ,int ) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct f2fs_sb_info *VAR_13)
{
 struct f2fs_super_block *VAR_14 = FUNC_0(VAR_13);
 struct f2fs_nm_info *VAR_15 = FUNC_3(VAR_13);
 unsigned char *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_15->nat_blkaddr = FUNC_9(VAR_14->nat_blkaddr);


 VAR_17 = FUNC_9(VAR_14->segment_count_nat) >> 1;
 VAR_15->nat_blocks = VAR_17 << FUNC_9(VAR_14->log_blocks_per_seg);
 VAR_15->max_nid = VAR_11 * VAR_15->nat_blocks;


 VAR_15->available_nids = VAR_15->max_nid - VAR_13->total_valid_node_count -
      VAR_5;
 VAR_15->nid_cnt[VAR_6] = 0;
 VAR_15->nid_cnt[VAR_12] = 0;
 VAR_15->nat_cnt = 0;
 VAR_15->ram_thresh = VAR_1;
 VAR_15->ra_nid_pages = VAR_2;
 VAR_15->dirty_nats_ratio = VAR_0;

 FUNC_2(&VAR_15->free_nid_root, VAR_7);
 FUNC_1(&VAR_15->free_nid_list);
 FUNC_2(&VAR_15->nat_root, VAR_9);
 FUNC_2(&VAR_15->nat_set_root, VAR_9);
 FUNC_1(&VAR_15->nat_entries);
 FUNC_11(&VAR_15->nat_list_lock);

 FUNC_10(&VAR_15->build_lock);
 FUNC_11(&VAR_15->nid_list_lock);
 FUNC_7(&VAR_15->nat_tree_lock);

 VAR_15->next_scan_nid = FUNC_9(VAR_13->ckpt->next_free_nid);
 VAR_15->bitmap_size = FUNC_5(VAR_13, VAR_10);
 VAR_16 = FUNC_4(VAR_13, VAR_10);
 if (!VAR_16)
  return -VAR_3;

 VAR_15->nat_bitmap = FUNC_8(VAR_16, VAR_15->bitmap_size,
     VAR_8);
 if (!VAR_15->nat_bitmap)
  return -VAR_4;

 VAR_18 = FUNC_6(VAR_13);
 if (VAR_18)
  return VAR_18;
 return 0;
}
