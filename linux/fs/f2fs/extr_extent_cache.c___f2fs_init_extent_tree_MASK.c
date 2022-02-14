
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int extent_lock; int extent_list; } ;
struct f2fs_extent {scalar_t__ len; } ;
struct extent_tree {int lock; int node_cnt; } ;
struct extent_node {int list; } ;
struct extent_info {int dummy; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 struct extent_tree* FUNC_1 (struct inode*) ;
 struct extent_node* FUNC_2 (struct f2fs_sb_info*,struct extent_tree*,struct extent_info*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct extent_info*,struct f2fs_extent*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static bool FUNC_11(struct inode *VAR_0, struct f2fs_extent *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_0(VAR_0);
 struct extent_tree *VAR_3;
 struct extent_node *VAR_4;
 struct extent_info VAR_5;

 if (!FUNC_4(VAR_0)) {

  if (VAR_1 && VAR_1->len) {
   VAR_1->len = 0;
   return 1;
  }
  return 0;
 }

 VAR_3 = FUNC_1(VAR_0);

 if (!VAR_1 || !VAR_1->len)
  return 0;

 FUNC_5(&VAR_5, VAR_1);

 FUNC_9(&VAR_3->lock);
 if (FUNC_3(&VAR_3->node_cnt))
  goto out;

 VAR_4 = FUNC_2(VAR_2, VAR_3, &VAR_5);
 if (VAR_4) {
  FUNC_7(&VAR_2->extent_lock);
  FUNC_6(&VAR_4->list, &VAR_2->extent_list);
  FUNC_8(&VAR_2->extent_lock);
 }
out:
 FUNC_10(&VAR_3->lock);
 return 0;
}
