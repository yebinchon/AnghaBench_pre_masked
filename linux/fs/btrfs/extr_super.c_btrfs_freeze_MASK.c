
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int flags; struct btrfs_root* tree_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 struct btrfs_fs_info* FUNC_4 (struct super_block*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2)
{
 struct btrfs_trans_handle *VAR_3;
 struct btrfs_fs_info *VAR_4 = FUNC_4(VAR_2);
 struct btrfs_root *VAR_5 = VAR_4->tree_root;

 FUNC_5(VAR_0, &VAR_4->flags);






 VAR_3 = FUNC_2(VAR_5);
 if (FUNC_0(VAR_3)) {

  if (FUNC_1(VAR_3) == -VAR_1)
   return 0;
  return FUNC_1(VAR_3);
 }
 return FUNC_3(VAR_3);
}
