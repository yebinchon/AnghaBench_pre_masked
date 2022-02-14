
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int ,int *) ;
 struct btrfs_fs_info* FUNC_4 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_4,
        struct kobj_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct btrfs_fs_info *VAR_8 = FUNC_4(VAR_4);
 unsigned long VAR_9;
 int VAR_10;

 if (!VAR_8)
  return -VAR_3;

 if (!FUNC_0(VAR_1))
  return -VAR_3;

 VAR_10 = FUNC_2(VAR_6, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 > 1)
  return -VAR_2;

 if (VAR_9)
  FUNC_3(VAR_0, &VAR_8->flags);
 else
  FUNC_1(VAR_0, &VAR_8->flags);

 return VAR_7;
}
