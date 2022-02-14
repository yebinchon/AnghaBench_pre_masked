
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {scalar_t__ s_magic; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int track_uptodate; } ;
struct TYPE_3__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct btrfs_inode {int dio_sem; int rb_node; int delayed_iput; int delalloc_inodes; int ordered_tree; int delalloc_mutex; int log_mutex; int sync_writers; TYPE_2__ io_failure_tree; TYPE_2__ io_tree; int extent_tree; struct inode vfs_inode; TYPE_1__ i_otime; int * delayed_node; void* defrag_compress; void* prop_compress; scalar_t__ runtime_flags; int block_rsv; scalar_t__ outstanding_extents; int lock; scalar_t__ last_log_commit; scalar_t__ last_unlink_trans; scalar_t__ dir_index; scalar_t__ index_cnt; scalar_t__ csum_bytes; scalar_t__ flags; scalar_t__ disk_i_size; scalar_t__ defrag_bytes; scalar_t__ new_delalloc_bytes; scalar_t__ delalloc_bytes; scalar_t__ logged_trans; scalar_t__ last_sub_trans; scalar_t__ last_trans; scalar_t__ generation; int * root; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,int *,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 struct btrfs_fs_info* FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct btrfs_fs_info*,TYPE_2__*,int ,struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct btrfs_inode* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct inode *FUNC_12(struct super_block *VAR_7)
{
 struct btrfs_fs_info *VAR_8 = FUNC_5(VAR_7);
 struct btrfs_inode *VAR_9;
 struct inode *VAR_10;

 VAR_9 = FUNC_9(VAR_6, VAR_3);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->root = ((void*)0);
 VAR_9->generation = 0;
 VAR_9->last_trans = 0;
 VAR_9->last_sub_trans = 0;
 VAR_9->logged_trans = 0;
 VAR_9->delalloc_bytes = 0;
 VAR_9->new_delalloc_bytes = 0;
 VAR_9->defrag_bytes = 0;
 VAR_9->disk_i_size = 0;
 VAR_9->flags = 0;
 VAR_9->csum_bytes = 0;
 VAR_9->index_cnt = (u64)-1;
 VAR_9->dir_index = 0;
 VAR_9->last_unlink_trans = 0;
 VAR_9->last_log_commit = 0;

 FUNC_11(&VAR_9->lock);
 VAR_9->outstanding_extents = 0;
 if (VAR_7->s_magic != VAR_2)
  FUNC_3(VAR_8, &VAR_9->block_rsv,
           VAR_0);
 VAR_9->runtime_flags = 0;
 VAR_9->prop_compress = VAR_1;
 VAR_9->defrag_compress = VAR_1;

 VAR_9->delayed_node = ((void*)0);

 VAR_9->i_otime.tv_sec = 0;
 VAR_9->i_otime.tv_nsec = 0;

 VAR_10 = &VAR_9->vfs_inode;
 FUNC_7(&VAR_9->extent_tree);
 FUNC_6(VAR_8, &VAR_9->io_tree, VAR_4, VAR_10);
 FUNC_6(VAR_8, &VAR_9->io_failure_tree,
       VAR_5, VAR_10);
 VAR_9->io_tree.track_uptodate = 1;
 VAR_9->io_failure_tree.track_uptodate = 1;
 FUNC_2(&VAR_9->sync_writers, 0);
 FUNC_10(&VAR_9->log_mutex);
 FUNC_10(&VAR_9->delalloc_mutex);
 FUNC_4(&VAR_9->ordered_tree);
 FUNC_0(&VAR_9->delalloc_inodes);
 FUNC_0(&VAR_9->delayed_iput);
 FUNC_1(&VAR_9->rb_node);
 FUNC_8(&VAR_9->dio_sem);

 return VAR_10;
}
