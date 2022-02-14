
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {int fs_state; int * freed_extents; int * pinned_extents; int fs_roots_radix; int buffer_radix; int tree_mod_seq_list; int dead_roots; int dirty_qgroups; int tree_mod_seq; int * qgroup_ulist; int qgroup_tree; int * running_transaction; int tree_mod_log_lock; int qgroup_rescan_lock; int qgroup_ioctl_lock; int tree_mod_seq_lock; int fs_roots_radix_lock; int super_lock; int qgroup_lock; int buffer_lock; struct btrfs_fs_info* super_copy; struct btrfs_fs_info* fs_devices; int subvol_srcu; void* sectorsize; void* nodesize; } ;
struct btrfs_fs_devices {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mnt_sb; } ;
struct TYPE_3__ {struct btrfs_fs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 TYPE_2__* VAR_6 ;

struct btrfs_fs_info *FUNC_11(u32 VAR_7, u32 VAR_8)
{
 struct btrfs_fs_info *VAR_9 = FUNC_6(sizeof(struct btrfs_fs_info),
      VAR_2);

 if (!VAR_9)
  return VAR_9;
 VAR_9->fs_devices = FUNC_6(sizeof(struct btrfs_fs_devices),
          VAR_2);
 if (!VAR_9->fs_devices) {
  FUNC_5(VAR_9);
  return ((void*)0);
 }
 VAR_9->super_copy = FUNC_6(sizeof(struct btrfs_super_block),
          VAR_2);
 if (!VAR_9->super_copy) {
  FUNC_5(VAR_9->fs_devices);
  FUNC_5(VAR_9);
  return ((void*)0);
 }

 VAR_9->nodesize = VAR_7;
 VAR_9->sectorsize = VAR_8;

 if (FUNC_4(&VAR_9->subvol_srcu)) {
  FUNC_5(VAR_9->fs_devices);
  FUNC_5(VAR_9->super_copy);
  FUNC_5(VAR_9);
  return ((void*)0);
 }

 FUNC_10(&VAR_9->buffer_lock);
 FUNC_10(&VAR_9->qgroup_lock);
 FUNC_10(&VAR_9->super_lock);
 FUNC_10(&VAR_9->fs_roots_radix_lock);
 FUNC_10(&VAR_9->tree_mod_seq_lock);
 FUNC_7(&VAR_9->qgroup_ioctl_lock);
 FUNC_7(&VAR_9->qgroup_rescan_lock);
 FUNC_8(&VAR_9->tree_mod_log_lock);
 VAR_9->running_transaction = ((void*)0);
 VAR_9->qgroup_tree = VAR_5;
 VAR_9->qgroup_ulist = ((void*)0);
 FUNC_2(&VAR_9->tree_mod_seq, 0);
 FUNC_0(&VAR_9->dirty_qgroups);
 FUNC_0(&VAR_9->dead_roots);
 FUNC_0(&VAR_9->tree_mod_seq_list);
 FUNC_1(&VAR_9->buffer_radix, VAR_1);
 FUNC_1(&VAR_9->fs_roots_radix, VAR_1);
 FUNC_3(VAR_9, &VAR_9->freed_extents[0],
       VAR_3, ((void*)0));
 FUNC_3(VAR_9, &VAR_9->freed_extents[1],
       VAR_4, ((void*)0));
 VAR_9->pinned_extents = &VAR_9->freed_extents[0];
 FUNC_9(VAR_0, &VAR_9->fs_state);

 VAR_6->mnt_sb->s_fs_info = VAR_9;

 return VAR_9;
}
