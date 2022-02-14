
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct rb_node {int dummy; } ;
struct inode {int i_sb; } ;
struct btrfs_root {int nr_ordered_extents; int ordered_extent_lock; int ordered_root; int ordered_extents; } ;
struct btrfs_ordered_inode_tree {int lock; int tree; } ;
struct btrfs_ordered_extent {int compress_type; int root_extent_list; int rb_node; int trans_list; int log_list; int completion; int work_list; int list; int wait; int refs; int flags; void* truncated_len; int inode; void* bytes_left; void* disk_len; void* len; void* start; void* file_offset; } ;
struct btrfs_fs_info {int ordered_root_lock; int ordered_roots; int delalloc_batch; int dio_bytes; } ;
struct TYPE_3__ {int lock; struct btrfs_ordered_inode_tree ordered_tree; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_6 ;
 struct btrfs_fs_info* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct btrfs_ordered_extent* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,int ,void*) ;
 int FUNC_12 (int *,void*,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct inode*,struct btrfs_ordered_extent*) ;
 struct rb_node* FUNC_20 (int *,void*,int *) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_7, u64 VAR_8,
          u64 VAR_9, u64 VAR_10, u64 VAR_11,
          int VAR_12, int VAR_13, int VAR_14)
{
 struct btrfs_fs_info *VAR_15 = FUNC_4(VAR_7->i_sb);
 struct btrfs_root *VAR_16 = FUNC_0(VAR_7)->root;
 struct btrfs_ordered_inode_tree *VAR_17;
 struct rb_node *VAR_18;
 struct btrfs_ordered_extent *VAR_19;

 VAR_17 = &FUNC_0(VAR_7)->ordered_tree;
 VAR_19 = FUNC_8(VAR_6, VAR_5);
 if (!VAR_19)
  return -VAR_4;

 VAR_19->file_offset = VAR_8;
 VAR_19->start = VAR_9;
 VAR_19->len = VAR_10;
 VAR_19->disk_len = VAR_11;
 VAR_19->bytes_left = VAR_10;
 VAR_19->inode = FUNC_5(VAR_7);
 VAR_19->compress_type = VAR_14;
 VAR_19->truncated_len = (u64)-1;
 if (VAR_12 != VAR_2 && VAR_12 != VAR_0)
  FUNC_14(VAR_12, &VAR_19->flags);

 if (VAR_13) {
  FUNC_12(&VAR_15->dio_bytes, VAR_10,
      VAR_15->delalloc_batch);
  FUNC_14(VAR_1, &VAR_19->flags);
 }


 FUNC_13(&VAR_19->refs, 1);
 FUNC_7(&VAR_19->wait);
 FUNC_2(&VAR_19->list);
 FUNC_2(&VAR_19->root_extent_list);
 FUNC_2(&VAR_19->work_list);
 FUNC_6(&VAR_19->completion);
 FUNC_2(&VAR_19->log_list);
 FUNC_2(&VAR_19->trans_list);

 FUNC_19(VAR_7, VAR_19);

 FUNC_16(&VAR_17->lock);
 VAR_18 = FUNC_20(&VAR_17->tree, VAR_8,
      &VAR_19->rb_node);
 if (VAR_18)
  FUNC_11(VAR_7, -VAR_3, VAR_8);
 FUNC_18(&VAR_17->lock);

 FUNC_15(&VAR_16->ordered_extent_lock);
 FUNC_9(&VAR_19->root_extent_list,
        &VAR_16->ordered_extents);
 VAR_16->nr_ordered_extents++;
 if (VAR_16->nr_ordered_extents == 1) {
  FUNC_15(&VAR_15->ordered_root_lock);
  FUNC_1(!FUNC_10(&VAR_16->ordered_root));
  FUNC_9(&VAR_16->ordered_root, &VAR_15->ordered_roots);
  FUNC_17(&VAR_15->ordered_root_lock);
 }
 FUNC_17(&VAR_16->ordered_extent_lock);






 FUNC_15(&FUNC_0(VAR_7)->lock);
 FUNC_3(FUNC_0(VAR_7), 1);
 FUNC_17(&FUNC_0(VAR_7)->lock);

 return 0;
}
