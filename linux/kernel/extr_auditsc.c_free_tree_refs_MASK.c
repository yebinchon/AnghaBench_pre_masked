
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree_refs {struct audit_tree_refs* next; } ;
struct audit_context {struct audit_tree_refs* first_trees; } ;


 int FUNC_0 (struct audit_tree_refs*) ;

__attribute__((used)) static void FUNC_1(struct audit_context *VAR_0)
{
 struct audit_tree_refs *VAR_1, *VAR_2;
 for (VAR_1 = VAR_0->first_trees; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }
}
