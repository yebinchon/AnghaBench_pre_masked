
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct page {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {int bdev; scalar_t__ block_start; void* block_len; void* len; scalar_t__ start; } ;
struct btrfs_inode {struct extent_map_tree extent_tree; TYPE_1__* root; } ;
struct btrfs_fs_info {TYPE_2__* fs_devices; } ;
struct TYPE_4__ {int latest_bdev; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct extent_map* FUNC_0 (int) ;
 int FUNC_1 (struct extent_map_tree*,struct extent_map*,int ) ;
 struct extent_map* FUNC_2 () ;
 int FUNC_3 (struct extent_map*) ;
 struct extent_map* FUNC_4 (struct extent_map_tree*,void*,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct extent_map *FUNC_9(struct btrfs_inode *VAR_3,
  struct page *VAR_4, size_t VAR_5, u64 VAR_6, u64 VAR_7,
  int VAR_8)
{
 struct btrfs_fs_info *VAR_9 = VAR_3->root->fs_info;
 struct extent_map_tree *VAR_10 = &VAR_3->extent_tree;
 struct extent_map *VAR_11;
 int VAR_12;

 FUNC_5(&VAR_10->lock);
 VAR_11 = FUNC_4(VAR_10, VAR_6, VAR_7);
 if (VAR_11) {
  VAR_11->bdev = VAR_9->fs_devices->latest_bdev;
  FUNC_6(&VAR_10->lock);
  goto out;
 }
 FUNC_6(&VAR_10->lock);

 VAR_11 = FUNC_2();
 if (!VAR_11) {
  VAR_11 = FUNC_0(-VAR_2);
  goto out;
 }
 VAR_11->start = 0;
 VAR_11->len = (u64)-1;
 VAR_11->block_len = (u64)-1;
 VAR_11->block_start = 0;
 VAR_11->bdev = VAR_9->fs_devices->latest_bdev;

 FUNC_7(&VAR_10->lock);
 VAR_12 = FUNC_1(VAR_10, VAR_11, 0);
 if (VAR_12 == -VAR_0) {
  FUNC_3(VAR_11);
  VAR_11 = FUNC_4(VAR_10, VAR_6, VAR_7);
  if (!VAR_11)
   VAR_11 = FUNC_0(-VAR_1);
 } else if (VAR_12) {
  FUNC_3(VAR_11);
  VAR_11 = FUNC_0(VAR_12);
 }
 FUNC_8(&VAR_10->lock);

out:
 return VAR_11;
}
