
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_delayed_node {int mutex; int count; int flags; int inode_item; } ;
struct TYPE_4__ {TYPE_1__* delayed_root; } ;
struct TYPE_3__ {int items; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct btrfs_delayed_node*) ;
 int FUNC_2 (struct btrfs_delayed_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,int ,struct btrfs_delayed_node*) ;
 struct btrfs_delayed_node* FUNC_5 (int ) ;
 int FUNC_6 (struct btrfs_delayed_node*) ;
 int FUNC_7 (struct btrfs_trans_handle*,int *,struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct btrfs_trans_handle *VAR_1,
          struct btrfs_root *VAR_2, struct inode *VAR_3)
{
 struct btrfs_delayed_node *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_5(FUNC_0(VAR_3));
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_8(&VAR_4->mutex);
 if (FUNC_11(VAR_0, &VAR_4->flags)) {
  FUNC_7(VAR_1, &VAR_4->inode_item, VAR_3);
  goto release_node;
 }

 VAR_5 = FUNC_4(VAR_1, VAR_2, FUNC_0(VAR_3),
         VAR_4);
 if (VAR_5)
  goto release_node;

 FUNC_7(VAR_1, &VAR_4->inode_item, VAR_3);
 FUNC_10(VAR_0, &VAR_4->flags);
 VAR_4->count++;
 FUNC_3(&VAR_2->fs_info->delayed_root->items);
release_node:
 FUNC_9(&VAR_4->mutex);
 FUNC_6(VAR_4);
 return VAR_5;
}
