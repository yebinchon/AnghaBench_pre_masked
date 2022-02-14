
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {int log_transid_committed; int swapped_blocks; int root_item_lock; scalar_t__ anon_dev; TYPE_1__ root_key; scalar_t__ defrag_trans_start; TYPE_1__ defrag_progress; TYPE_1__ root_item; int dirty_log_pages; scalar_t__ last_log_commit; scalar_t__ log_transid; int nr_swapfiles; int snapshot_force_cow; int will_be_snapshotted; int refs; int log_batch; int log_writers; int * log_commit; int * log_ctxs; int * log_commit_wait; int log_writer_wait; int delalloc_mutex; int ordered_extent_mutex; int log_mutex; int objectid_mutex; int qgroup_meta_rsv_lock; int * log_extents_lock; int accounting_lock; int ordered_extent_lock; int delalloc_lock; int inode_lock; int * logged_list; int reloc_dirty_list; int ordered_root; int ordered_extents; int delalloc_root; int delalloc_inodes; int root_list; int dirty_list; int * block_rsv; int delayed_nodes_tree; int inode_tree; scalar_t__ nr_ordered_extents; scalar_t__ nr_delalloc_inodes; scalar_t__ highest_objectid; scalar_t__ last_trans; scalar_t__ orphan_cleanup_state; scalar_t__ state; int * commit_root; int * node; } ;
struct btrfs_fs_info {scalar_t__ generation; int fs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_fs_info*,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct btrfs_root *VAR_4, struct btrfs_fs_info *VAR_5,
    u64 VAR_6)
{
 bool VAR_7 = FUNC_10(VAR_0, &VAR_5->fs_state);
 VAR_4->node = ((void*)0);
 VAR_4->commit_root = ((void*)0);
 VAR_4->state = 0;
 VAR_4->orphan_cleanup_state = 0;

 VAR_4->last_trans = 0;
 VAR_4->highest_objectid = 0;
 VAR_4->nr_delalloc_inodes = 0;
 VAR_4->nr_ordered_extents = 0;
 VAR_4->inode_tree = VAR_3;
 FUNC_1(&VAR_4->delayed_nodes_tree, VAR_1);
 VAR_4->block_rsv = ((void*)0);

 FUNC_0(&VAR_4->dirty_list);
 FUNC_0(&VAR_4->root_list);
 FUNC_0(&VAR_4->delalloc_inodes);
 FUNC_0(&VAR_4->delalloc_root);
 FUNC_0(&VAR_4->ordered_extents);
 FUNC_0(&VAR_4->ordered_root);
 FUNC_0(&VAR_4->reloc_dirty_list);
 FUNC_0(&VAR_4->logged_list[0]);
 FUNC_0(&VAR_4->logged_list[1]);
 FUNC_9(&VAR_4->inode_lock);
 FUNC_9(&VAR_4->delalloc_lock);
 FUNC_9(&VAR_4->ordered_extent_lock);
 FUNC_9(&VAR_4->accounting_lock);
 FUNC_9(&VAR_4->log_extents_lock[0]);
 FUNC_9(&VAR_4->log_extents_lock[1]);
 FUNC_9(&VAR_4->qgroup_meta_rsv_lock);
 FUNC_7(&VAR_4->objectid_mutex);
 FUNC_7(&VAR_4->log_mutex);
 FUNC_7(&VAR_4->ordered_extent_mutex);
 FUNC_7(&VAR_4->delalloc_mutex);
 FUNC_5(&VAR_4->log_writer_wait);
 FUNC_5(&VAR_4->log_commit_wait[0]);
 FUNC_5(&VAR_4->log_commit_wait[1]);
 FUNC_0(&VAR_4->log_ctxs[0]);
 FUNC_0(&VAR_4->log_ctxs[1]);
 FUNC_2(&VAR_4->log_commit[0], 0);
 FUNC_2(&VAR_4->log_commit[1], 0);
 FUNC_2(&VAR_4->log_writers, 0);
 FUNC_2(&VAR_4->log_batch, 0);
 FUNC_8(&VAR_4->refs, 1);
 FUNC_2(&VAR_4->will_be_snapshotted, 0);
 FUNC_2(&VAR_4->snapshot_force_cow, 0);
 FUNC_2(&VAR_4->nr_swapfiles, 0);
 VAR_4->log_transid = 0;
 VAR_4->log_transid_committed = -1;
 VAR_4->last_log_commit = 0;
 if (!VAR_7)
  FUNC_4(VAR_5, &VAR_4->dirty_log_pages,
        VAR_2, ((void*)0));

 FUNC_6(&VAR_4->root_key, 0, sizeof(VAR_4->root_key));
 FUNC_6(&VAR_4->root_item, 0, sizeof(VAR_4->root_item));
 FUNC_6(&VAR_4->defrag_progress, 0, sizeof(VAR_4->defrag_progress));
 if (!VAR_7)
  VAR_4->defrag_trans_start = VAR_5->generation;
 else
  VAR_4->defrag_trans_start = 0;
 VAR_4->root_key.objectid = VAR_6;
 VAR_4->anon_dev = 0;

 FUNC_9(&VAR_4->root_item_lock);
 FUNC_3(&VAR_4->swapped_blocks);
}
