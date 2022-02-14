
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct f2fs_sb_info {int extent_tree_lock; int total_zombie_tree; int total_ext_tree; int extent_tree_root; } ;
struct extent_tree {int list; int node_cnt; int lock; int * cached_en; int root; int ino; } ;
typedef int nid_t ;
struct TYPE_2__ {struct extent_tree* extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 struct extent_tree* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,struct extent_tree*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct extent_tree*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct extent_tree* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct extent_tree *FUNC_14(struct inode *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_1(VAR_3);
 struct extent_tree *VAR_5;
 nid_t VAR_6 = VAR_3->i_ino;

 FUNC_10(&VAR_4->extent_tree_lock);
 VAR_5 = FUNC_12(&VAR_4->extent_tree_root, VAR_6);
 if (!VAR_5) {
  VAR_5 = FUNC_6(VAR_2, VAR_0);
  FUNC_7(&VAR_4->extent_tree_root, VAR_6, VAR_5);
  FUNC_9(VAR_5, 0, sizeof(struct extent_tree));
  VAR_5->ino = VAR_6;
  VAR_5->root = VAR_1;
  VAR_5->cached_en = ((void*)0);
  FUNC_13(&VAR_5->lock);
  FUNC_2(&VAR_5->list);
  FUNC_5(&VAR_5->node_cnt, 0);
  FUNC_4(&VAR_4->total_ext_tree);
 } else {
  FUNC_3(&VAR_4->total_zombie_tree);
  FUNC_8(&VAR_5->list);
 }
 FUNC_11(&VAR_4->extent_tree_lock);


 FUNC_0(VAR_3)->extent_tree = VAR_5;

 return VAR_5;
}
