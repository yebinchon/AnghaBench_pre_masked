
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trim_range {int list; } ;
struct btrfs_space_info {int lock; int bytes_reserved; int bytes_readonly; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_ctl {int cache_writeout_mutex; } ;
struct btrfs_block_group_cache {int lock; int reserved; scalar_t__ ro; struct btrfs_free_space_ctl* free_space_ctl; struct btrfs_fs_info* fs_info; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct btrfs_fs_info*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct btrfs_block_group_cache *VAR_0,
         u64 *VAR_1, u64 VAR_2, u64 VAR_3,
         u64 VAR_4, u64 VAR_5,
         struct btrfs_trim_range *VAR_6)
{
 struct btrfs_space_info *VAR_7 = VAR_0->space_info;
 struct btrfs_fs_info *VAR_8 = VAR_0->fs_info;
 struct btrfs_free_space_ctl *VAR_9 = VAR_0->free_space_ctl;
 int VAR_10;
 int VAR_11 = 0;
 u64 VAR_12 = 0;

 FUNC_5(&VAR_7->lock);
 FUNC_5(&VAR_0->lock);
 if (!VAR_0->ro) {
  VAR_0->reserved += VAR_5;
  VAR_7->bytes_reserved += VAR_5;
  VAR_11 = 1;
 }
 FUNC_6(&VAR_0->lock);
 FUNC_6(&VAR_7->lock);

 VAR_10 = FUNC_1(VAR_8, VAR_2, VAR_3, &VAR_12);
 if (!VAR_10)
  *VAR_1 += VAR_12;

 FUNC_3(&VAR_9->cache_writeout_mutex);
 FUNC_0(VAR_0, VAR_4, VAR_5);
 FUNC_2(&VAR_6->list);
 FUNC_4(&VAR_9->cache_writeout_mutex);

 if (VAR_11) {
  FUNC_5(&VAR_7->lock);
  FUNC_5(&VAR_0->lock);
  if (VAR_0->ro)
   VAR_7->bytes_readonly += VAR_5;
  VAR_0->reserved -= VAR_5;
  VAR_7->bytes_reserved -= VAR_5;
  FUNC_6(&VAR_0->lock);
  FUNC_6(&VAR_7->lock);
 }

 return VAR_10;
}
