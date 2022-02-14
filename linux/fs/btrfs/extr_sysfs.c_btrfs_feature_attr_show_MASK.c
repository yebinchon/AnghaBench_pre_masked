
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_feature_attr {int feature_bit; int feature_set; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_feature_attr*) ;
 int FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct btrfs_feature_attr* FUNC_3 (struct kobj_attribute*) ;
 struct btrfs_fs_info* FUNC_4 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_1,
           struct kobj_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;
 struct btrfs_fs_info *VAR_5 = FUNC_4(VAR_1);
 struct btrfs_feature_attr *VAR_6 = FUNC_3(VAR_2);
 if (VAR_5) {
  u64 VAR_7 = FUNC_1(VAR_5, VAR_6->feature_set);
  if (VAR_7 & VAR_6->feature_bit)
   VAR_4 = 1;
 } else
  VAR_4 = FUNC_0(VAR_6);

 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_4);
}
