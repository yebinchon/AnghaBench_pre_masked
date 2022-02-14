
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_block_group_cache {int free_space_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int ,int ) ;
 int FUNC_2 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (int ,int ) ;
 struct btrfs_block_group_cache* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct btrfs_block_group_cache*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct btrfs_trans_handle *VAR_3,
      u64 VAR_4, u64 VAR_5)
{
 struct btrfs_block_group_cache *VAR_6;
 struct btrfs_path *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_3->fs_info, VAR_2))
  return 0;

 VAR_7 = FUNC_3();
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_6(VAR_3->fs_info, VAR_4);
 if (!VAR_6) {
  FUNC_0(0);
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_8(&VAR_6->free_space_lock);
 VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_7, VAR_4, VAR_5);
 FUNC_9(&VAR_6->free_space_lock);

 FUNC_7(VAR_6);
out:
 FUNC_4(VAR_7);
 if (VAR_8)
  FUNC_2(VAR_3, VAR_8);
 return VAR_8;
}
