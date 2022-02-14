
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_space_info {int total_bytes_pinned; } ;
typedef int ssize_t ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 struct btrfs_space_info* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
             struct kobj_attribute *VAR_2,
             char *VAR_3)
{
 struct btrfs_space_info *VAR_4 = FUNC_2(VAR_1);
 s64 VAR_5 = FUNC_0(&VAR_4->total_bytes_pinned);
 return FUNC_1(VAR_3, VAR_0, "%lld\n", VAR_5);
}
