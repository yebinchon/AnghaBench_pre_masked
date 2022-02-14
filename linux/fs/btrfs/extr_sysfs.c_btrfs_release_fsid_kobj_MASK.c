
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct btrfs_fs_devices {int kobj_unregister; int fsid_kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 struct btrfs_fs_devices* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct btrfs_fs_devices *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->fsid_kobj, 0, sizeof(struct kobject));
 FUNC_0(&VAR_1->kobj_unregister);
}
