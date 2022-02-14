
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btrfs_fs_devices {int fs_info; int fsid_kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,char*,int const*) ;

void FUNC_3(struct btrfs_fs_devices *VAR_1,
        const u8 *VAR_2)
{
 char VAR_3[VAR_0];





 FUNC_2(VAR_3, VAR_0, "%pU", VAR_2);
 if (FUNC_1(&VAR_1->fsid_kobj, VAR_3))
  FUNC_0(VAR_1->fs_info,
    "sysfs: failed to create fsid for sprout");
}
