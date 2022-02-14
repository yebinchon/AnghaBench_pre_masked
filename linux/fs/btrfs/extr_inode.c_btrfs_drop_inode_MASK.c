
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_root {int root_item; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_0)
{
 struct btrfs_root *VAR_1 = FUNC_0(VAR_0)->root;

 if (VAR_1 == ((void*)0))
  return 1;


 if (FUNC_1(&VAR_1->root_item) == 0)
  return 1;
 else
  return FUNC_2(VAR_0);
}
