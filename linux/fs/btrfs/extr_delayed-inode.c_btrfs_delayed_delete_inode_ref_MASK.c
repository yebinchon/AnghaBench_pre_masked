
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_inode {TYPE_2__* root; } ;
struct btrfs_fs_info {TYPE_1__* delayed_root; int flags; } ;
struct btrfs_delayed_node {int mutex; int count; int flags; } ;
struct TYPE_4__ {struct btrfs_fs_info* fs_info; } ;
struct TYPE_3__ {int items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_delayed_node*) ;
 int FUNC_1 (struct btrfs_delayed_node*) ;
 int FUNC_2 (int *) ;
 struct btrfs_delayed_node* FUNC_3 (struct btrfs_inode*) ;
 int FUNC_4 (struct btrfs_delayed_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct btrfs_inode *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_3->root->fs_info;
 struct btrfs_delayed_node *VAR_5;






 if (FUNC_8(VAR_1, &VAR_4->flags))
  return -VAR_2;

 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 FUNC_5(&VAR_5->mutex);
 if (FUNC_8(VAR_0, &VAR_5->flags))
  goto release_node;

 FUNC_7(VAR_0, &VAR_5->flags);
 VAR_5->count++;
 FUNC_2(&VAR_4->delayed_root->items);
release_node:
 FUNC_6(&VAR_5->mutex);
 FUNC_4(VAR_5);
 return 0;
}
