
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree_refs {int * c; struct audit_tree_refs* next; } ;
struct audit_tree {int dummy; } ;
struct audit_context {int tree_count; struct audit_tree_refs* trees; struct audit_tree_refs* first_trees; } ;


 scalar_t__ FUNC_0 (int ,struct audit_tree*) ;

__attribute__((used)) static int FUNC_1(struct audit_context *VAR_0, struct audit_tree *VAR_1)
{
 struct audit_tree_refs *VAR_2;
 int VAR_3;
 if (!VAR_1)
  return 0;

 for (VAR_2 = VAR_0->first_trees; VAR_2 != VAR_0->trees; VAR_2 = VAR_2->next) {
  for (VAR_3 = 0; VAR_3 < 31; VAR_3++)
   if (FUNC_0(VAR_2->c[VAR_3], VAR_1))
    return 1;
 }

 if (VAR_2) {
  for (VAR_3 = VAR_0->tree_count; VAR_3 < 31; VAR_3++)
   if (FUNC_0(VAR_2->c[VAR_3], VAR_1))
    return 1;
 }
 return 0;
}
