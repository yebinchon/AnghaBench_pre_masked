
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_devices {scalar_t__ device_dir_kobj; int fsid_kobj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

int FUNC_1(struct btrfs_fs_devices *VAR_1)
{
 if (!VAR_1->device_dir_kobj)
  VAR_1->device_dir_kobj = FUNC_0("devices",
      &VAR_1->fsid_kobj);

 if (!VAR_1->device_dir_kobj)
  return -VAR_0;

 return 0;
}
