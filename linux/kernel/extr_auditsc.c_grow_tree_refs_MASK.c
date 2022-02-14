
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree_refs {struct audit_tree_refs* next; } ;
struct audit_context {int tree_count; struct audit_tree_refs* trees; struct audit_tree_refs* first_trees; } ;


 int VAR_0 ;
 struct audit_tree_refs* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct audit_context *VAR_1)
{
 struct audit_tree_refs *VAR_2 = VAR_1->trees;
 VAR_1->trees = FUNC_0(sizeof(struct audit_tree_refs), VAR_0);
 if (!VAR_1->trees) {
  VAR_1->trees = VAR_2;
  return 0;
 }
 if (VAR_2)
  VAR_2->next = VAR_1->trees;
 else
  VAR_1->first_trees = VAR_1->trees;
 VAR_1->tree_count = 31;
 return 1;
}
