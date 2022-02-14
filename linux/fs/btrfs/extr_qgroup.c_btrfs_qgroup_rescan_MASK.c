
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_fs_info {int qgroup_rescan_work; int qgroup_rescan_workers; int qgroup_flags; int fs_root; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct btrfs_fs_info*,int ,int) ;
 int FUNC_6 (struct btrfs_fs_info*) ;

int
FUNC_7(struct btrfs_fs_info *VAR_1)
{
 int VAR_2 = 0;
 struct btrfs_trans_handle *VAR_3;

 VAR_2 = FUNC_5(VAR_1, 0, 1);
 if (VAR_2)
  return VAR_2;
 VAR_3 = FUNC_3(VAR_1->fs_root);
 if (FUNC_0(VAR_3)) {
  VAR_1->qgroup_flags &= ~VAR_0;
  return FUNC_1(VAR_3);
 }
 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2) {
  VAR_1->qgroup_flags &= ~VAR_0;
  return VAR_2;
 }

 FUNC_6(VAR_1);

 FUNC_4(VAR_1->qgroup_rescan_workers,
    &VAR_1->qgroup_rescan_work);

 return 0;
}
