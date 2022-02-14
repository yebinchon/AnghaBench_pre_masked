
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; int i_size; int i_ino; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int tree_root; struct inode* btree_inode; } ;
struct TYPE_5__ {int track_uptodate; int * ops; } ;
struct TYPE_6__ {int runtime_flags; int location; int root; TYPE_2__ io_tree; int extent_tree; int rb_node; } ;
struct TYPE_4__ {int * a_ops; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct btrfs_fs_info*,TYPE_2__*,int ,struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct inode*,int) ;

__attribute__((used)) static void FUNC_8(struct btrfs_fs_info *VAR_6)
{
 struct inode *VAR_7 = VAR_6->btree_inode;

 VAR_7->i_ino = VAR_0;
 FUNC_7(VAR_7, 1);





 VAR_7->i_size = VAR_3;
 VAR_7->i_mapping->a_ops = &VAR_4;

 FUNC_1(&FUNC_0(VAR_7)->rb_node);
 FUNC_3(VAR_6, &FUNC_0(VAR_7)->io_tree,
       VAR_2, VAR_7);
 FUNC_0(VAR_7)->io_tree.track_uptodate = 0;
 FUNC_4(&FUNC_0(VAR_7)->extent_tree);

 FUNC_0(VAR_7)->io_tree.ops = &VAR_5;

 FUNC_0(VAR_7)->root = VAR_6->tree_root;
 FUNC_5(&FUNC_0(VAR_7)->location, 0, sizeof(struct btrfs_key));
 FUNC_6(VAR_1, &FUNC_0(VAR_7)->runtime_flags);
 FUNC_2(VAR_7);
}
