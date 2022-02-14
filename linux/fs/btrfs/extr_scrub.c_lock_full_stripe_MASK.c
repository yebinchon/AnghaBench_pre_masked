
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct full_stripe_lock {int mutex; } ;
struct btrfs_full_stripe_locks_tree {int lock; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int flags; struct btrfs_full_stripe_locks_tree full_stripe_locks_root; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct full_stripe_lock*) ;
 int FUNC_2 (struct full_stripe_lock*) ;
 struct btrfs_block_group_cache* FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct btrfs_block_group_cache*) ;
 int FUNC_5 (struct btrfs_block_group_cache*,int ) ;
 struct full_stripe_lock* FUNC_6 (struct btrfs_full_stripe_locks_tree*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct btrfs_fs_info *VAR_2, u64 VAR_3,
       bool *VAR_4)
{
 struct btrfs_block_group_cache *VAR_5;
 struct btrfs_full_stripe_locks_tree *VAR_6;
 struct full_stripe_lock *VAR_7;
 u64 VAR_8;
 int VAR_9 = 0;

 *VAR_4 = 0;
 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(0);
  return -VAR_1;
 }


 if (!(VAR_5->flags & VAR_0))
  goto out;
 VAR_6 = &VAR_5->full_stripe_locks_root;

 VAR_8 = FUNC_5(VAR_5, VAR_3);


 FUNC_7(&VAR_6->lock);
 VAR_7 = FUNC_6(VAR_6, VAR_8);
 FUNC_8(&VAR_6->lock);
 if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
  goto out;
 }
 FUNC_7(&VAR_7->mutex);
 *VAR_4 = 1;
out:
 FUNC_4(VAR_5);
 return VAR_9;
}
