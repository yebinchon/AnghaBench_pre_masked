
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
typedef int ssize_t ;
struct TYPE_2__ {int metadata_uuid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 struct btrfs_fs_info* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
    struct kobj_attribute *VAR_2, char *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, VAR_0, "%pU\n",
   VAR_4->fs_devices->metadata_uuid);
}
