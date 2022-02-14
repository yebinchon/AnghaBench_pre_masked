
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int * ktype; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct kobject*) ;

__attribute__((used)) static inline struct btrfs_fs_info *FUNC_1(struct kobject *VAR_1)
{
 if (VAR_1->ktype != &VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_1)->fs_info;
}
