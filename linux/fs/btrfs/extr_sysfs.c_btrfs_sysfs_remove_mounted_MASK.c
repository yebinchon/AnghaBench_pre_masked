
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_fs_info {TYPE_1__* fs_devices; int * space_info_kobj; } ;
struct TYPE_2__ {int fsid_kobj; } ;


 int FUNC_0 (struct btrfs_fs_info*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;

void FUNC_7(struct btrfs_fs_info *VAR_3)
{
 FUNC_1(VAR_3);

 if (VAR_3->space_info_kobj) {
  FUNC_5(VAR_3->space_info_kobj, VAR_0);
  FUNC_3(VAR_3->space_info_kobj);
  FUNC_4(VAR_3->space_info_kobj);
 }
 FUNC_0(VAR_3, 0);
 FUNC_6(&VAR_3->fs_devices->fsid_kobj, &VAR_2);
 FUNC_5(&VAR_3->fs_devices->fsid_kobj, VAR_1);
 FUNC_2(VAR_3->fs_devices, ((void*)0));
}
