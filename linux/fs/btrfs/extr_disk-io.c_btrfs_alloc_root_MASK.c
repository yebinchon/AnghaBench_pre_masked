
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
typedef int gfp_t ;


 struct btrfs_root* FUNC_0 (int,int ) ;

__attribute__((used)) static struct btrfs_root *FUNC_1(struct btrfs_fs_info *VAR_0,
  gfp_t VAR_1)
{
 struct btrfs_root *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (VAR_2)
  VAR_2->fs_info = VAR_0;
 return VAR_2;
}
