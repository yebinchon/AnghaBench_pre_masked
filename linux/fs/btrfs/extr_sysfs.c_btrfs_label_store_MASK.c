
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_fs_info {int transaction_kthread; int super_lock; TYPE_1__* super_copy; int sb; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int label; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct btrfs_fs_info*,int ) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int FUNC_2 (int ,int ,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char const*,char*) ;
 struct btrfs_fs_info* FUNC_7 (struct kobject*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct kobject *VAR_5,
     struct kobj_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct btrfs_fs_info *VAR_9 = FUNC_7(VAR_5);
 size_t VAR_10;

 if (!VAR_9)
  return -VAR_3;

 if (FUNC_3(VAR_9->sb))
  return -VAR_4;





 VAR_10 = FUNC_6(VAR_7, "\n");

 if (VAR_10 >= VAR_0)
  return -VAR_2;

 FUNC_4(&VAR_9->super_lock);
 FUNC_2(VAR_9->super_copy->label, 0, VAR_0);
 FUNC_1(VAR_9->super_copy->label, VAR_7, VAR_10);
 FUNC_5(&VAR_9->super_lock);




 FUNC_0(VAR_9, VAR_1);
 FUNC_8(VAR_9->transaction_kthread);

 return VAR_8;
}
