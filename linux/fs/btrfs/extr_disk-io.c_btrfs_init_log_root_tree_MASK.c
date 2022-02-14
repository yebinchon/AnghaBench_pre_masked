
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {struct btrfs_root* log_root_tree; } ;


 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_root*) ;
 struct btrfs_root* FUNC_3 (struct btrfs_trans_handle*,struct btrfs_fs_info*) ;

int FUNC_4(struct btrfs_trans_handle *VAR_0,
        struct btrfs_fs_info *VAR_1)
{
 struct btrfs_root *VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 FUNC_2(VAR_1->log_root_tree);
 VAR_1->log_root_tree = VAR_2;
 return 0;
}
