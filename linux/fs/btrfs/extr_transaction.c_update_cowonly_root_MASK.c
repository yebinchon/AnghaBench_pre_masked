
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int root_item; int root_key; TYPE_1__* node; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {struct btrfs_root* tree_root; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct btrfs_trans_handle *VAR_0,
          struct btrfs_root *VAR_1)
{
 int VAR_2;
 u64 VAR_3;
 u64 VAR_4;
 struct btrfs_fs_info *VAR_5 = VAR_1->fs_info;
 struct btrfs_root *VAR_6 = VAR_5->tree_root;

 VAR_4 = FUNC_1(&VAR_1->root_item);

 while (1) {
  VAR_3 = FUNC_0(&VAR_1->root_item);
  if (VAR_3 == VAR_1->node->start &&
      VAR_4 == FUNC_1(&VAR_1->root_item))
   break;

  FUNC_2(&VAR_1->root_item, VAR_1->node);
  VAR_2 = FUNC_3(VAR_0, VAR_6,
     &VAR_1->root_key,
     &VAR_1->root_item);
  if (VAR_2)
   return VAR_2;

  VAR_4 = FUNC_1(&VAR_1->root_item);
 }

 return 0;
}
