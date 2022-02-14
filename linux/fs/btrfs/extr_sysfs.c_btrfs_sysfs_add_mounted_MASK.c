
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct btrfs_fs_info {struct kobject* space_info_kobj; struct btrfs_fs_devices* fs_devices; } ;
struct btrfs_fs_devices {struct kobject fsid_kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (struct btrfs_fs_devices*,int *) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_fs_devices*,int *) ;
 struct kobject* FUNC_5 (char*,struct kobject*) ;
 int FUNC_6 (struct kobject*,int ) ;
 int FUNC_7 (struct kobject*,int *) ;

int FUNC_8(struct btrfs_fs_info *VAR_5)
{
 int VAR_6;
 struct btrfs_fs_devices *VAR_7 = VAR_5->fs_devices;
 struct kobject *VAR_8 = &VAR_7->fsid_kobj;

 FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_7, ((void*)0));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_8, VAR_2);
 if (VAR_6) {
  FUNC_4(VAR_7, ((void*)0));
  return VAR_6;
 }

 VAR_6 = FUNC_7(VAR_8,
       &VAR_4);
 if (VAR_6)
  goto failure;
 VAR_6 = FUNC_0(VAR_5, 1);
 if (VAR_6)
  goto failure;

 VAR_5->space_info_kobj = FUNC_5("allocation",
        VAR_8);
 if (!VAR_5->space_info_kobj) {
  VAR_6 = -VAR_0;
  goto failure;
 }

 VAR_6 = FUNC_6(VAR_5->space_info_kobj, VAR_1);
 if (VAR_6)
  goto failure;

 return 0;
failure:
 FUNC_3(VAR_5);
 return VAR_6;
}
