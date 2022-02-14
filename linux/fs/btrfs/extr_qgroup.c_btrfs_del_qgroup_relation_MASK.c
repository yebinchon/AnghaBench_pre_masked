
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int qgroup_ioctl_lock; } ;


 int FUNC_0 (struct btrfs_trans_handle*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct btrfs_trans_handle *VAR_0, u64 VAR_1,
         u64 VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_0->fs_info;
 int VAR_4 = 0;

 FUNC_1(&VAR_3->qgroup_ioctl_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->qgroup_ioctl_lock);

 return VAR_4;
}
