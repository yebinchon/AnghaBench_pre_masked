
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int fs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_root*,int,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 int VAR_4;

 if (FUNC_1(VAR_0, &VAR_3->fs_state))
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_2, -1, 1);
 if (VAR_4 > 0)
  VAR_4 = 0;
 return VAR_4;
}
