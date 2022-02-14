
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int dummy; } ;
struct __btrfs_workqueue {struct btrfs_fs_info* fs_info; } ;



struct btrfs_fs_info *
FUNC_0(const struct __btrfs_workqueue *VAR_0)
{
 return VAR_0->fs_info;
}
