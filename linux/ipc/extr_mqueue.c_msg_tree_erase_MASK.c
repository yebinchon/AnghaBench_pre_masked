
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct posix_msg_tree_node {struct rb_node rb_node; } ;
struct mqueue_inode_info {struct posix_msg_tree_node* node_cache; int msg_tree; struct rb_node* msg_tree_rightmost; } ;


 int FUNC_0 (struct posix_msg_tree_node*) ;
 int FUNC_1 (struct rb_node*,int *) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static inline void FUNC_3(struct posix_msg_tree_node *VAR_0,
      struct mqueue_inode_info *VAR_1)
{
 struct rb_node *VAR_2 = &VAR_0->rb_node;

 if (VAR_1->msg_tree_rightmost == VAR_2)
  VAR_1->msg_tree_rightmost = FUNC_2(VAR_2);

 FUNC_1(VAR_2, &VAR_1->msg_tree);
 if (VAR_1->node_cache) {
  FUNC_0(VAR_0);
 } else {
  VAR_1->node_cache = VAR_0;
 }
}
