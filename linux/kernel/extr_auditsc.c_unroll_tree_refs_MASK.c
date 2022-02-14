
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree_refs {int ** c; struct audit_tree_refs* next; } ;
struct audit_context {int tree_count; struct audit_tree_refs* trees; struct audit_tree_refs* first_trees; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct audit_context *VAR_0,
        struct audit_tree_refs *VAR_1, int VAR_2)
{
 struct audit_tree_refs *VAR_3;
 int VAR_4;
 if (!VAR_1) {

  VAR_1 = VAR_0->first_trees;
  VAR_2 = 31;

  if (!VAR_1)
   return;
 }
 VAR_4 = VAR_2;
 for (VAR_3 = VAR_1; VAR_3 != VAR_0->trees; VAR_3 = VAR_3->next, VAR_4 = 31) {
  while (VAR_4--) {
   FUNC_0(VAR_3->c[VAR_4]);
   VAR_3->c[VAR_4] = ((void*)0);
  }
 }
 while (VAR_4-- > VAR_0->tree_count) {
  FUNC_0(VAR_3->c[VAR_4]);
  VAR_3->c[VAR_4] = ((void*)0);
 }
 VAR_0->trees = VAR_1;
 VAR_0->tree_count = VAR_2;
}
