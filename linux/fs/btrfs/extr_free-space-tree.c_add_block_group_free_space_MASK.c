
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int free_space_lock; int needs_free_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_1 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct btrfs_trans_handle *VAR_2,
          struct btrfs_block_group_cache *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_2->fs_info;
 struct btrfs_path *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (!FUNC_4(VAR_4, VAR_1))
  return 0;

 FUNC_5(&VAR_3->free_space_lock);
 if (!VAR_3->needs_free_space)
  goto out;

 VAR_5 = FUNC_2();
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5);

out:
 FUNC_3(VAR_5);
 FUNC_6(&VAR_3->free_space_lock);
 if (VAR_6)
  FUNC_1(VAR_2, VAR_6);
 return VAR_6;
}
