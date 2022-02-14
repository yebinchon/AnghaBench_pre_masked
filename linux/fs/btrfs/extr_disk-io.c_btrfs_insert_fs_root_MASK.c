
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {int state; TYPE_1__ root_key; } ;
struct btrfs_fs_info {int fs_roots_radix_lock; int fs_roots_radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long,struct btrfs_root*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct btrfs_fs_info *VAR_2,
    struct btrfs_root *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_4(&VAR_2->fs_roots_radix_lock);
 VAR_4 = FUNC_0(&VAR_2->fs_roots_radix,
    (unsigned long)VAR_3->root_key.objectid,
    VAR_3);
 if (VAR_4 == 0)
  FUNC_3(VAR_0, &VAR_3->state);
 FUNC_5(&VAR_2->fs_roots_radix_lock);
 FUNC_2();

 return VAR_4;
}
