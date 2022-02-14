
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_fs_info {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (int ,int *) ;
 struct btrfs_fs_info* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_2,
       struct kobj_attribute *VAR_3, char *VAR_4)
{
 struct btrfs_fs_info *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, &VAR_5->flags);
 return FUNC_0(VAR_4, VAR_1, "%d\n", VAR_6);
}
