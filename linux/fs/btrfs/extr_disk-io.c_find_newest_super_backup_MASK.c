
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root_backup {int dummy; } ;
struct btrfs_fs_info {TYPE_1__* super_copy; } ;
struct TYPE_2__ {struct btrfs_root_backup* super_roots; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_root_backup*) ;

__attribute__((used)) static int FUNC_1(struct btrfs_fs_info *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 int VAR_4 = -1;
 struct btrfs_root_backup *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_1->super_copy->super_roots + VAR_6;
  VAR_3 = FUNC_0(VAR_5);
  if (VAR_3 == VAR_2)
   VAR_4 = VAR_6;
 }


 if (VAR_4 == VAR_0 - 1) {
  VAR_5 = VAR_1->super_copy->super_roots;
  VAR_3 = FUNC_0(VAR_5);
  if (VAR_3 == VAR_2)
   VAR_4 = 0;
 }
 return VAR_4;
}
