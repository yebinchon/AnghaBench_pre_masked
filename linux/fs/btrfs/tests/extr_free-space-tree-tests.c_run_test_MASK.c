
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int (* test_func_t ) (struct btrfs_trans_handle*,TYPE_1__*,struct btrfs_block_group_cache*,struct btrfs_path*,int) ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int alloc_bytenr; int node; TYPE_1__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int bitmap_high_thresh; int needs_free_space; TYPE_1__* fs_info; scalar_t__ bitmap_low_thresh; } ;
struct TYPE_5__ {struct btrfs_root* tree_root; struct btrfs_root* free_space_root; int super_copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct btrfs_block_group_cache* FUNC_4 (struct btrfs_fs_info*,int) ;
 struct btrfs_fs_info* FUNC_5 (int,int) ;
 struct btrfs_root* FUNC_6 (struct btrfs_fs_info*) ;
 struct btrfs_path* FUNC_7 () ;
 int FUNC_8 (struct btrfs_block_group_cache*) ;
 int FUNC_9 (struct btrfs_fs_info*) ;
 int FUNC_10 (struct btrfs_root*) ;
 int FUNC_11 (struct btrfs_path*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct btrfs_trans_handle*,TYPE_1__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(test_func_t VAR_7, int VAR_8, u32 VAR_9,
      u32 VAR_10, u32 VAR_11)
{
 struct btrfs_fs_info *VAR_12;
 struct btrfs_root *VAR_13 = ((void*)0);
 struct btrfs_block_group_cache *VAR_14 = ((void*)0);
 struct btrfs_trans_handle VAR_15;
 struct btrfs_path *VAR_16 = ((void*)0);
 int VAR_17;

 VAR_12 = FUNC_5(VAR_10, VAR_9);
 if (!VAR_12) {
  FUNC_20(VAR_5);
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_13 = FUNC_6(VAR_12);
 if (FUNC_0(VAR_13)) {
  FUNC_20(VAR_6);
  VAR_17 = FUNC_1(VAR_13);
  goto out;
 }

 FUNC_16(VAR_13->fs_info->super_copy,
     VAR_0);
 VAR_13->fs_info->free_space_root = VAR_13;
 VAR_13->fs_info->tree_root = VAR_13;

 VAR_13->node = FUNC_3(VAR_13->fs_info, VAR_10);
 if (!VAR_13->node) {
  FUNC_20(VAR_4);
  VAR_17 = -VAR_2;
  goto out;
 }
 FUNC_14(VAR_13->node, 0);
 FUNC_15(VAR_13->node, 0);
 VAR_13->alloc_bytenr += 2 * VAR_10;

 VAR_14 = FUNC_4(VAR_12, 8 * VAR_11);
 if (!VAR_14) {
  FUNC_20(VAR_3);
  VAR_17 = -VAR_2;
  goto out;
 }
 VAR_14->bitmap_low_thresh = 0;
 VAR_14->bitmap_high_thresh = (u32)-1;
 VAR_14->needs_free_space = 1;
 VAR_14->fs_info = VAR_13->fs_info;

 FUNC_13(&VAR_15, VAR_13->fs_info);

 VAR_16 = FUNC_7();
 if (!VAR_16) {
  FUNC_20(VAR_6);
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_17 = FUNC_2(&VAR_15, VAR_14);
 if (VAR_17) {
  FUNC_19("could not add block group free space");
  goto out;
 }

 if (VAR_8) {
  VAR_17 = FUNC_17(&VAR_15, VAR_14, VAR_16);
  if (VAR_17) {
   FUNC_19("could not convert block group to bitmaps");
   goto out;
  }
 }

 VAR_17 = VAR_7(&VAR_15, VAR_13->fs_info, VAR_14, VAR_16, VAR_11);
 if (VAR_17)
  goto out;

 VAR_17 = FUNC_18(&VAR_15, VAR_14);
 if (VAR_17) {
  FUNC_19("could not remove block group free space");
  goto out;
 }

 if (FUNC_12(VAR_13->node) != 0) {
  FUNC_19("free space tree has leftover items");
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_17 = 0;
out:
 FUNC_11(VAR_16);
 FUNC_8(VAR_14);
 FUNC_10(VAR_13);
 FUNC_9(VAR_12);
 return VAR_17;
}
