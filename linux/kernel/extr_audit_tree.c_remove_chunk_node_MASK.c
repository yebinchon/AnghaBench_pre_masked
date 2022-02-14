
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {struct audit_tree* owner; int list; } ;
struct audit_tree {struct audit_chunk* root; int same_root; } ;
struct audit_chunk {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct audit_tree*) ;

__attribute__((used)) static void FUNC_2(struct audit_chunk *VAR_0, struct node *VAR_1)
{
 struct audit_tree *VAR_2 = VAR_1->owner;

 if (VAR_2->root == VAR_0) {
  FUNC_0(&VAR_2->same_root);
  VAR_2->root = ((void*)0);
 }
 FUNC_0(&VAR_1->list);
 VAR_1->owner = ((void*)0);
 FUNC_1(VAR_2);
}
