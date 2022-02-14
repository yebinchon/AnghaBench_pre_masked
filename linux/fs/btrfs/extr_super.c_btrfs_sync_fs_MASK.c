
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {scalar_t__ pending_changes; TYPE_1__* btree_inode; struct btrfs_root* tree_root; } ;
struct TYPE_2__ {int i_mapping; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int VAR_1 ;
 struct btrfs_trans_handle* FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 struct btrfs_fs_info* FUNC_4 (struct super_block*) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*,int ) ;
 int FUNC_6 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct btrfs_fs_info*,int) ;

int FUNC_11(struct super_block *VAR_2, int VAR_3)
{
 struct btrfs_trans_handle *VAR_4;
 struct btrfs_fs_info *VAR_5 = FUNC_4(VAR_2);
 struct btrfs_root *VAR_6 = VAR_5->tree_root;

 FUNC_10(VAR_5, VAR_3);

 if (!VAR_3) {
  FUNC_7(VAR_5->btree_inode->i_mapping);
  return 0;
 }

 FUNC_6(VAR_5, VAR_1, 0, (u64)-1);

 VAR_4 = FUNC_2(VAR_6);
 if (FUNC_0(VAR_4)) {

  if (FUNC_1(VAR_4) == -VAR_0) {




   if (VAR_5->pending_changes == 0)
    return 0;






   if (FUNC_9(VAR_2))
    FUNC_8(VAR_2);
   else
    return 0;
   VAR_4 = FUNC_5(VAR_6, 0);
  }
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);
 }
 return FUNC_3(VAR_4);
}
