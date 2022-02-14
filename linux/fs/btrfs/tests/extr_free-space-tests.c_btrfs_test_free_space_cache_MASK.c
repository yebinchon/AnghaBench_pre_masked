
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* extent_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct btrfs_root*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct btrfs_block_group_cache* FUNC_2 (struct btrfs_fs_info*,scalar_t__) ;
 struct btrfs_fs_info* FUNC_3 (int,int) ;
 struct btrfs_root* FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 (struct btrfs_root*) ;
 int FUNC_8 (struct btrfs_block_group_cache*,int) ;
 int FUNC_9 (struct btrfs_block_group_cache*,int) ;
 int FUNC_10 (struct btrfs_block_group_cache*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct btrfs_block_group_cache*,int) ;

int FUNC_14(u32 VAR_6, u32 VAR_7)
{
 struct btrfs_fs_info *VAR_8;
 struct btrfs_block_group_cache *VAR_9;
 struct btrfs_root *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_1;

 FUNC_11("running btrfs free space cache tests");
 VAR_8 = FUNC_3(VAR_7, VAR_6);
 if (!VAR_8) {
  FUNC_12(VAR_4);
  return -VAR_1;
 }






 VAR_9 = FUNC_2(VAR_8,
          VAR_0 * VAR_6 + VAR_2);
 if (!VAR_9) {
  FUNC_12(VAR_3);
  FUNC_6(VAR_8);
  return 0;
 }

 VAR_10 = FUNC_4(VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_12(VAR_5);
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->fs_info->extent_root = VAR_10;

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_8(VAR_9, VAR_6);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_9(VAR_9, VAR_6);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_13(VAR_9, VAR_6);
out:
 FUNC_5(VAR_9);
 FUNC_7(VAR_10);
 FUNC_6(VAR_8);
 return VAR_11;
}
