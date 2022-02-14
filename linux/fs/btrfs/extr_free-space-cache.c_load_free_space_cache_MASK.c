
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_path {int search_commit_root; int skip_locking; } ;
struct btrfs_fs_info {int tree_root; } ;
struct btrfs_free_space_ctl {scalar_t__ free_space; int tree_lock; } ;
struct TYPE_2__ {scalar_t__ offset; int objectid; } ;
struct btrfs_block_group_cache {scalar_t__ disk_cache_state; scalar_t__ bytes_super; TYPE_1__ key; int lock; int item; struct btrfs_free_space_ctl* free_space_ctl; struct btrfs_fs_info* fs_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct btrfs_free_space_ctl*) ;
 int FUNC_2 (int ,struct inode*,struct btrfs_free_space_ctl*,struct btrfs_path*,int ) ;
 struct btrfs_path* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct btrfs_block_group_cache *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_free_space_ctl *VAR_4 = VAR_2->free_space_ctl;
 struct inode *VAR_5;
 struct btrfs_path *VAR_6;
 int VAR_7 = 0;
 bool VAR_8;
 u64 VAR_9 = FUNC_4(&VAR_2->item);





 FUNC_9(&VAR_2->lock);
 if (VAR_2->disk_cache_state != VAR_1) {
  FUNC_10(&VAR_2->lock);
  return 0;
 }
 FUNC_10(&VAR_2->lock);

 VAR_6 = FUNC_3();
 if (!VAR_6)
  return 0;
 VAR_6->search_commit_root = 1;
 VAR_6->skip_locking = 1;
 VAR_5 = FUNC_8(VAR_2, VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_6);
  return 0;
 }


 FUNC_9(&VAR_2->lock);
 if (VAR_2->disk_cache_state != VAR_1) {
  FUNC_10(&VAR_2->lock);
  FUNC_5(VAR_6);
  goto out;
 }
 FUNC_10(&VAR_2->lock);

 VAR_7 = FUNC_2(VAR_3->tree_root, VAR_5, VAR_4,
          VAR_6, VAR_2->key.objectid);
 FUNC_5(VAR_6);
 if (VAR_7 <= 0)
  goto out;

 FUNC_9(&VAR_4->tree_lock);
 VAR_8 = (VAR_4->free_space == (VAR_2->key.offset - VAR_9 -
           VAR_2->bytes_super));
 FUNC_10(&VAR_4->tree_lock);

 if (!VAR_8) {
  FUNC_1(VAR_4);
  FUNC_6(VAR_3,
      "block group %llu has wrong amount of free space",
      VAR_2->key.objectid);
  VAR_7 = -1;
 }
out:
 if (VAR_7 < 0) {

  FUNC_9(&VAR_2->lock);
  VAR_2->disk_cache_state = VAR_0;
  FUNC_10(&VAR_2->lock);
  VAR_7 = 0;

  FUNC_6(VAR_3,
      "failed to load free space cache for block group %llu, rebuilding it now",
      VAR_2->key.objectid);
 }

 FUNC_7(VAR_5);
 return VAR_7;
}
