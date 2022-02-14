
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state_initialized; } ;
struct btrfs_fs_devices {int kobj_unregister; TYPE_1__ fsid_kobj; TYPE_1__* device_dir_kobj; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_devices *VAR_0)
{
 if (VAR_0->device_dir_kobj) {
  FUNC_0(VAR_0->device_dir_kobj);
  FUNC_1(VAR_0->device_dir_kobj);
  VAR_0->device_dir_kobj = ((void*)0);
 }

 if (VAR_0->fsid_kobj.state_initialized) {
  FUNC_0(&VAR_0->fsid_kobj);
  FUNC_1(&VAR_0->fsid_kobj);
  FUNC_2(&VAR_0->kobj_unregister);
 }
}
