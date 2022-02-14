
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_root {TYPE_2__* fs_info; int root_item; struct btrfs_root* reloc_root; int state; } ;
struct TYPE_4__ {TYPE_1__* running_transaction; } ;
struct TYPE_3__ {int transid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct btrfs_root *VAR_1)
{
 struct btrfs_root *VAR_2;

 if (!FUNC_1(VAR_0, &VAR_1->state))
  return 0;

 VAR_2 = VAR_1->reloc_root;
 if (!VAR_2)
  return 0;

 if (FUNC_0(&VAR_2->root_item) ==
     VAR_1->fs_info->running_transaction->transid - 1)
  return 0;






 return 1;
}
