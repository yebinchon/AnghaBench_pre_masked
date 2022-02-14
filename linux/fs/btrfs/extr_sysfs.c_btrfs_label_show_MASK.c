
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_fs_info {int super_lock; TYPE_1__* super_copy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* label; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct btrfs_fs_info* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_1,
    struct kobj_attribute *VAR_2, char *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_3(VAR_1);
 char *VAR_5 = VAR_4->super_copy->label;
 ssize_t VAR_6;

 FUNC_1(&VAR_4->super_lock);
 VAR_6 = FUNC_0(VAR_3, VAR_0, VAR_5[0] ? "%s\n" : "%s", VAR_5);
 FUNC_2(&VAR_4->super_lock);

 return VAR_6;
}
