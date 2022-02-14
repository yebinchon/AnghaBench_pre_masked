
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct full_stripe_lock {scalar_t__ refs; int mutex; int node; int logical; } ;
struct btrfs_full_stripe_locks_tree {int lock; int root; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int flags; struct btrfs_full_stripe_locks_tree full_stripe_locks_root; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct btrfs_block_group_cache* FUNC_2 (struct btrfs_fs_info*,int ) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 int FUNC_4 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_5 (struct btrfs_block_group_cache*,int ) ;
 int FUNC_6 (struct full_stripe_lock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 struct full_stripe_lock* FUNC_10 (struct btrfs_full_stripe_locks_tree*,int ) ;

__attribute__((used)) static int FUNC_11(struct btrfs_fs_info *VAR_2, u64 VAR_3,
         bool VAR_4)
{
 struct btrfs_block_group_cache *VAR_5;
 struct btrfs_full_stripe_locks_tree *VAR_6;
 struct full_stripe_lock *VAR_7;
 u64 VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;


 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(0);
  return -VAR_1;
 }
 if (!(VAR_5->flags & VAR_0))
  goto out;

 VAR_6 = &VAR_5->full_stripe_locks_root;
 VAR_8 = FUNC_5(VAR_5, VAR_3);

 FUNC_7(&VAR_6->lock);
 VAR_7 = FUNC_10(VAR_6, VAR_8);

 if (!VAR_7) {
  FUNC_1(1);
  VAR_10 = -VAR_1;
  FUNC_8(&VAR_6->lock);
  goto out;
 }

 if (VAR_7->refs == 0) {
  FUNC_1(1);
  FUNC_4(VAR_2, "full stripe lock at %llu refcount underflow",
   VAR_7->logical);
 } else {
  VAR_7->refs--;
 }

 if (VAR_7->refs == 0) {
  FUNC_9(&VAR_7->node, &VAR_6->root);
  VAR_9 = 1;
 }
 FUNC_8(&VAR_6->lock);

 FUNC_8(&VAR_7->mutex);
 if (VAR_9)
  FUNC_6(VAR_7);
out:
 FUNC_3(VAR_5);
 return VAR_10;
}
