
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_qgroup {int dummy; } ;
struct btrfs_fs_info {int qgroup_ioctl_lock; int qgroup_lock; struct btrfs_root* quota_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_qgroup*) ;
 int FUNC_1 (struct btrfs_qgroup*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;
 struct btrfs_qgroup* FUNC_3 (struct btrfs_fs_info*,int ) ;
 struct btrfs_qgroup* FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct btrfs_trans_handle *VAR_2, u64 VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_2->fs_info;
 struct btrfs_root *VAR_5;
 struct btrfs_qgroup *VAR_6;
 int VAR_7 = 0;

 FUNC_5(&VAR_4->qgroup_ioctl_lock);
 VAR_5 = VAR_4->quota_root;
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_5, VAR_3);
 if (VAR_7)
  goto out;

 FUNC_7(&VAR_4->qgroup_lock);
 VAR_6 = FUNC_3(VAR_4, VAR_3);
 FUNC_8(&VAR_4->qgroup_lock);

 if (FUNC_0(VAR_6))
  VAR_7 = FUNC_1(VAR_6);
out:
 FUNC_6(&VAR_4->qgroup_ioctl_lock);
 return VAR_7;
}
