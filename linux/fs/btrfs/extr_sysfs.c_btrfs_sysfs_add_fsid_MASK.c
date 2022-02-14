
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_3__ {int kset; } ;
struct btrfs_fs_devices {TYPE_1__ fsid_kobj; int fsid; int kobj_unregister; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,struct kobject*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct btrfs_fs_devices *VAR_2,
    struct kobject *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->kobj_unregister);
 VAR_2->fsid_kobj.kset = VAR_0;
 VAR_4 = FUNC_1(&VAR_2->fsid_kobj,
    &VAR_1, VAR_3, "%pU", VAR_2->fsid);
 if (VAR_4) {
  FUNC_2(&VAR_2->fsid_kobj);
  return VAR_4;
 }

 return 0;
}
