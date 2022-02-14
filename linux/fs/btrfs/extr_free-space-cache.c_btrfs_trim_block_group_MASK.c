
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_group_cache {int lock; scalar_t__ removed; } ;


 int FUNC_0 (struct btrfs_block_group_cache*) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_block_group_cache*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct btrfs_block_group_cache*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_6(struct btrfs_block_group_cache *VAR_0,
      u64 *VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 int VAR_5;

 *VAR_1 = 0;

 FUNC_2(&VAR_0->lock);
 if (VAR_0->removed) {
  FUNC_3(&VAR_0->lock);
  return 0;
 }
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->lock);

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
out:
 FUNC_1(VAR_0);
 return VAR_5;
}
