
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int delayed_ref_updates; int new_bgs; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int flags; int last_byte_to_unpin; int needs_free_space; int bg_list; int space_info; int bytes_super; int cached; int item; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_2 (struct btrfs_fs_info*,struct btrfs_block_group_cache*) ;
 struct btrfs_block_group_cache* FUNC_3 (struct btrfs_fs_info*,int,int) ;
 int FUNC_4 (struct btrfs_fs_info*,int) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 int FUNC_6 (struct btrfs_block_group_cache*) ;
 int FUNC_7 (struct btrfs_block_group_cache*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_12 (struct btrfs_block_group_cache*) ;
 int FUNC_13 (struct btrfs_trans_handle*) ;
 int FUNC_14 (struct btrfs_fs_info*) ;
 int FUNC_15 (struct btrfs_fs_info*,int,int,int,int ,int *) ;
 int FUNC_16 (struct btrfs_block_group_cache*) ;
 int FUNC_17 (struct btrfs_block_group_cache*) ;
 int FUNC_18 (struct btrfs_block_group_cache*) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (struct btrfs_fs_info*,int) ;
 int FUNC_21 (struct btrfs_fs_info*,struct btrfs_block_group_cache*,int) ;

int FUNC_22(struct btrfs_trans_handle *VAR_3, u64 VAR_4,
      u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_3->fs_info;
 struct btrfs_block_group_cache *VAR_9;
 int VAR_10;

 FUNC_11(VAR_3);

 VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_7);
 if (!VAR_9)
  return -VAR_2;

 FUNC_10(&VAR_9->item, VAR_4);
 FUNC_8(&VAR_9->item,
          VAR_1);
 FUNC_9(&VAR_9->item, VAR_5);

 VAR_9->flags = VAR_5;
 VAR_9->last_byte_to_unpin = (u64)-1;
 VAR_9->cached = VAR_0;
 VAR_9->needs_free_space = 1;
 VAR_10 = FUNC_16(VAR_9);
 if (VAR_10) {

  FUNC_5(VAR_9);
  FUNC_6(VAR_9);
  return VAR_10;
 }

 FUNC_1(VAR_9, VAR_6, VAR_6 + VAR_7);

 FUNC_5(VAR_9);
 VAR_9->space_info = FUNC_4(VAR_8, VAR_9->flags);
 FUNC_0(VAR_9->space_info);

 VAR_10 = FUNC_2(VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_7(VAR_9);
  FUNC_6(VAR_9);
  return VAR_10;
 }





 FUNC_21(VAR_8, VAR_9, 1);
 FUNC_15(VAR_8, VAR_9->flags, VAR_7, VAR_4,
    VAR_9->bytes_super, &VAR_9->space_info);
 FUNC_14(VAR_8);

 FUNC_18(VAR_9);

 FUNC_19(&VAR_9->bg_list, &VAR_3->new_bgs);
 VAR_3->delayed_ref_updates++;
 FUNC_13(VAR_3);

 FUNC_20(VAR_8, VAR_5);
 return 0;
}
