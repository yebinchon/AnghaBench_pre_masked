
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_fs_info {int * log_root_tree; } ;


 int FUNC_0 (struct btrfs_trans_handle*,int *) ;

int FUNC_1(struct btrfs_trans_handle *VAR_0,
        struct btrfs_fs_info *VAR_1)
{
 if (VAR_1->log_root_tree) {
  FUNC_0(VAR_0, VAR_1->log_root_tree);
  VAR_1->log_root_tree = ((void*)0);
 }
 return 0;
}
