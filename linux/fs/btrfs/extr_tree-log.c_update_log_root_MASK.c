
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_root {int log_transid; int root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int log_root_tree; } ;


 int FUNC_0 (struct btrfs_trans_handle*,int ,int *,struct btrfs_root_item*) ;
 int FUNC_1 (struct btrfs_trans_handle*,int ,int *,struct btrfs_root_item*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0,
      struct btrfs_root *VAR_1,
      struct btrfs_root_item *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->fs_info;
 int VAR_4;

 if (VAR_1->log_transid == 1) {

  VAR_4 = FUNC_0(VAR_0, VAR_3->log_root_tree,
    &VAR_1->root_key, VAR_2);
 } else {
  VAR_4 = FUNC_1(VAR_0, VAR_3->log_root_tree,
    &VAR_1->root_key, VAR_2);
 }
 return VAR_4;
}
