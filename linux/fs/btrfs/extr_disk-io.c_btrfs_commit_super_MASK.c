
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int cleanup_work_sem; int cleaner_kthread; int cleaner_mutex; struct btrfs_root* tree_root; } ;


 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_root *VAR_1 = VAR_0->tree_root;
 struct btrfs_trans_handle *VAR_2;

 FUNC_6(&VAR_0->cleaner_mutex);
 FUNC_4(VAR_0);
 FUNC_7(&VAR_0->cleaner_mutex);
 FUNC_9(VAR_0->cleaner_kthread);


 FUNC_5(&VAR_0->cleanup_work_sem);
 FUNC_8(&VAR_0->cleanup_work_sem);

 VAR_2 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 return FUNC_2(VAR_2);
}
