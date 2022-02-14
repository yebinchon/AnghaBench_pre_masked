
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree_refs {struct audit_chunk** c; struct audit_tree_refs* next; } ;
struct audit_context {int tree_count; struct audit_tree_refs* trees; } ;
struct audit_chunk {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct audit_context *VAR_0, struct audit_chunk *VAR_1)
{
 struct audit_tree_refs *VAR_2 = VAR_0->trees;
 int VAR_3 = VAR_0->tree_count;
 if (FUNC_0(VAR_3)) {
  VAR_2->c[--VAR_3] = VAR_1;
  VAR_0->tree_count = VAR_3;
  return 1;
 }
 if (!VAR_2)
  return 0;
 VAR_2 = VAR_2->next;
 if (VAR_2) {
  VAR_2->c[30] = VAR_1;
  VAR_0->trees = VAR_2;
  VAR_0->tree_count = 30;
  return 1;
 }
 return 0;
}
