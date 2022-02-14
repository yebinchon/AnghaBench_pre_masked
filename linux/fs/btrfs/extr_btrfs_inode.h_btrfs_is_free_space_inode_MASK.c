
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {scalar_t__ objectid; } ;
struct btrfs_inode {TYPE_2__ location; struct btrfs_root* root; } ;
struct TYPE_3__ {struct btrfs_root* tree_root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_inode*) ;

__attribute__((used)) static inline bool FUNC_1(struct btrfs_inode *VAR_2)
{
 struct btrfs_root *VAR_3 = VAR_2->root;

 if (VAR_3 == VAR_3->fs_info->tree_root &&
     FUNC_0(VAR_2) != VAR_0)
  return 1;
 if (VAR_2->location.objectid == VAR_1)
  return 1;
 return 0;
}
