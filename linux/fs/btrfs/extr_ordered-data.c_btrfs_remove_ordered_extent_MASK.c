
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct inode {int i_sb; } ;
struct btrfs_root {int ordered_extent_lock; int ordered_root; int nr_ordered_extents; } ;
struct btrfs_ordered_inode_tree {int lock; struct rb_node* last; int tree; } ;
struct btrfs_ordered_extent {int wait; int root_extent_list; int flags; struct rb_node rb_node; int len; } ;
struct btrfs_inode {struct btrfs_ordered_inode_tree ordered_tree; int lock; struct btrfs_root* root; } ;
struct btrfs_fs_info {int ordered_root_lock; int delalloc_batch; int dio_bytes; struct btrfs_root* tree_root; } ;


 struct btrfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rb_node*) ;
 int FUNC_3 (struct btrfs_inode*,int ,int) ;
 int FUNC_4 (struct btrfs_inode*,int) ;
 struct btrfs_fs_info* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct rb_node*,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (struct inode*,struct btrfs_ordered_extent*) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct inode *VAR_2,
     struct btrfs_ordered_extent *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_5(VAR_2->i_sb);
 struct btrfs_ordered_inode_tree *VAR_5;
 struct btrfs_inode *VAR_6 = FUNC_0(VAR_2);
 struct btrfs_root *VAR_7 = VAR_6->root;
 struct rb_node *VAR_8;


 FUNC_11(&VAR_6->lock);
 FUNC_4(VAR_6, -1);
 FUNC_13(&VAR_6->lock);
 if (VAR_7 != VAR_4->tree_root)
  FUNC_3(VAR_6, VAR_3->len, 0);

 if (FUNC_15(VAR_1, &VAR_3->flags))
  FUNC_8(&VAR_4->dio_bytes, -VAR_3->len,
      VAR_4->delalloc_batch);

 VAR_5 = &VAR_6->ordered_tree;
 FUNC_12(&VAR_5->lock);
 VAR_8 = &VAR_3->rb_node;
 FUNC_9(VAR_8, &VAR_5->tree);
 FUNC_2(VAR_8);
 if (VAR_5->last == VAR_8)
  VAR_5->last = ((void*)0);
 FUNC_10(VAR_0, &VAR_3->flags);
 FUNC_14(&VAR_5->lock);

 FUNC_11(&VAR_7->ordered_extent_lock);
 FUNC_6(&VAR_3->root_extent_list);
 VAR_7->nr_ordered_extents--;

 FUNC_16(VAR_2, VAR_3);

 if (!VAR_7->nr_ordered_extents) {
  FUNC_11(&VAR_4->ordered_root_lock);
  FUNC_1(FUNC_7(&VAR_7->ordered_root));
  FUNC_6(&VAR_7->ordered_root);
  FUNC_13(&VAR_4->ordered_root_lock);
 }
 FUNC_13(&VAR_7->ordered_extent_lock);
 FUNC_17(&VAR_3->wait);
}
