
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u64 ;
struct kobject {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_feature_attr {int feature_bit; int feature_set; } ;
struct attribute {int mode; } ;


 int VAR_0 ;
 struct btrfs_feature_attr* FUNC_0 (struct attribute*) ;
 scalar_t__ FUNC_1 (struct btrfs_feature_attr*) ;
 int FUNC_2 (struct btrfs_fs_info*,int ) ;
 struct btrfs_fs_info* FUNC_3 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_4(struct kobject *VAR_1,
         struct attribute *VAR_2, int VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_3(VAR_1);
 umode_t VAR_5 = VAR_2->mode;

 if (VAR_4) {
  struct btrfs_feature_attr *VAR_6;
  u64 VAR_7;

  VAR_6 = FUNC_0(VAR_2);
  VAR_7 = FUNC_2(VAR_4, VAR_6->feature_set);

  if (FUNC_1(VAR_6))
   VAR_5 |= VAR_0;
  else if (!(VAR_7 & VAR_6->feature_bit))
   VAR_5 = 0;
 }

 return VAR_5;
}
