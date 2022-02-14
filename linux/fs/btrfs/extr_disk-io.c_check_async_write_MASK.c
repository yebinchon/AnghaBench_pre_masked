
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_inode {int sync_writers; } ;
struct btrfs_fs_info {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct btrfs_fs_info *VAR_1,
        struct btrfs_inode *VAR_2)
{
 if (FUNC_0(&VAR_2->sync_writers))
  return 0;
 if (FUNC_1(VAR_0, &VAR_1->flags))
  return 0;
 return 1;
}
