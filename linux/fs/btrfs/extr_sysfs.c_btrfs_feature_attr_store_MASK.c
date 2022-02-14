
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_fs_info {int transaction_kthread; int super_lock; int sb; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct btrfs_feature_attr {scalar_t__ feature_set; int feature_bit; TYPE_2__ kobj_attr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct btrfs_fs_info*,char*,char*,int ) ;
 int FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_3 (int ,int ,unsigned long*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct btrfs_fs_info*,scalar_t__,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct btrfs_feature_attr* FUNC_9 (struct kobj_attribute*) ;
 struct btrfs_fs_info* FUNC_10 (struct kobject*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static ssize_t FUNC_12(struct kobject *VAR_11,
     struct kobj_attribute *VAR_12,
     const char *VAR_13, size_t VAR_14)
{
 struct btrfs_fs_info *VAR_15;
 struct btrfs_feature_attr *VAR_16 = FUNC_9(VAR_12);
 u64 VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 VAR_15 = FUNC_10(VAR_11);
 if (!VAR_15)
  return -VAR_7;

 if (FUNC_4(VAR_15->sb))
  return -VAR_8;

 VAR_21 = FUNC_3(FUNC_6(VAR_13), 0, &VAR_20);
 if (VAR_21)
  return VAR_21;

 if (VAR_16->feature_set == VAR_9) {
  VAR_18 = VAR_3;
  VAR_19 = VAR_2;
 } else if (VAR_16->feature_set == VAR_10) {
  VAR_18 = VAR_1;
  VAR_19 = VAR_0;
 } else {
  VAR_18 = VAR_5;
  VAR_19 = VAR_4;
 }

 VAR_17 = FUNC_2(VAR_15, VAR_16->feature_set);


 if ((VAR_20 && (VAR_17 & VAR_16->feature_bit)) ||
     (!VAR_20 && !(VAR_17 & VAR_16->feature_bit)))
  return VAR_14;

 if ((VAR_20 && !(VAR_18 & VAR_16->feature_bit)) ||
     (!VAR_20 && !(VAR_19 & VAR_16->feature_bit))) {
  FUNC_0(VAR_15,
   "%sabling feature %s on mounted fs is not supported.",
   VAR_20 ? "En" : "Dis", VAR_16->kobj_attr.attr.name);
  return -VAR_7;
 }

 FUNC_0(VAR_15, "%s %s feature flag",
     VAR_20 ? "Setting" : "Clearing", VAR_16->kobj_attr.attr.name);

 FUNC_7(&VAR_15->super_lock);
 VAR_17 = FUNC_2(VAR_15, VAR_16->feature_set);
 if (VAR_20)
  VAR_17 |= VAR_16->feature_bit;
 else
  VAR_17 &= ~VAR_16->feature_bit;
 FUNC_5(VAR_15, VAR_16->feature_set, VAR_17);
 FUNC_8(&VAR_15->super_lock);




 FUNC_1(VAR_15, VAR_6);
 FUNC_11(VAR_15->transaction_kthread);

 return VAR_14;
}
