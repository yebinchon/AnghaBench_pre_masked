
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kobject {int state_initialized; } ;
struct btrfs_fs_info {struct btrfs_fs_devices* fs_devices; } ;
struct btrfs_fs_devices {struct kobject fsid_kobj; } ;
typedef enum btrfs_feature_set { ____Placeholder_btrfs_feature_set } btrfs_feature_set ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_fs_info*,int) ;
 int* VAR_1 ;
 int FUNC_2 (struct kobject*,int *) ;
 int FUNC_3 (struct kobject*,int *) ;

void FUNC_4(struct btrfs_fs_info *VAR_2,
  u64 VAR_3, enum btrfs_feature_set VAR_4)
{
 struct btrfs_fs_devices *VAR_5;
 struct kobject *VAR_6;
 u64 VAR_7;
 int VAR_8;

 if (!VAR_2)
  return;

 VAR_7 = FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_3 & VAR_1[VAR_4]);

 VAR_5 = VAR_2->fs_devices;
 VAR_6 = &VAR_5->fsid_kobj;

 if (!VAR_6->state_initialized)
  return;





 FUNC_3(VAR_6, &VAR_0);
 VAR_8 = FUNC_2(VAR_6, &VAR_0);
}
