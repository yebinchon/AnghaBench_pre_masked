
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int fs_roots_radix_lock; int fs_roots_radix; } ;


 struct btrfs_root* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct btrfs_root *FUNC_3(struct btrfs_fs_info *VAR_0,
     u64 VAR_1)
{
 struct btrfs_root *VAR_2;

 FUNC_1(&VAR_0->fs_roots_radix_lock);
 VAR_2 = FUNC_0(&VAR_0->fs_roots_radix,
     (unsigned long)VAR_1);
 FUNC_2(&VAR_0->fs_roots_radix_lock);
 return VAR_2;
}
