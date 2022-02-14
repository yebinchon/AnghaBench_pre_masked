
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct btrfs_fs_info {TYPE_2__* fs_devices; } ;
struct attribute {int dummy; } ;
struct TYPE_3__ {struct attribute attr; } ;
struct btrfs_feature_attr {TYPE_1__ kobj_attr; } ;
struct attribute_group {char* name; struct attribute** attrs; } ;
struct TYPE_4__ {int fsid_kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_feature_attr** VAR_2 ;
 unsigned long long FUNC_0 (struct btrfs_fs_info*,int) ;
 unsigned long long* VAR_3 ;
 int FUNC_1 (int *,struct attribute_group*) ;
 int FUNC_2 (int *,struct attribute_group*) ;

__attribute__((used)) static int FUNC_3(struct btrfs_fs_info *VAR_4, bool VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  int VAR_7;
  struct attribute *VAR_8[2];
  struct attribute_group VAR_9 = {
   .name = "features",
   .attrs = VAR_8,
  };
  u64 VAR_10 = FUNC_0(VAR_4, VAR_6);
  VAR_10 &= ~VAR_3[VAR_6];

  if (!VAR_10)
   continue;

  VAR_8[1] = ((void*)0);
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   struct btrfs_feature_attr *VAR_11;

   if (!(VAR_10 & (1ULL << VAR_7)))
    continue;

   VAR_11 = &VAR_2[VAR_6][VAR_7];
   VAR_8[0] = &VAR_11->kobj_attr.attr;
   if (VAR_5) {
    int VAR_12;
    VAR_12 = FUNC_1(&VAR_4->fs_devices->fsid_kobj,
       &VAR_9);
    if (VAR_12)
     return VAR_12;
   } else
    FUNC_2(&VAR_4->fs_devices->fsid_kobj,
          &VAR_9);
  }

 }
 return 0;
}
