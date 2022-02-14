
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {struct kernfs_node* parent; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static struct kernfs_node *FUNC_1(struct kernfs_node *VAR_0,
           struct kernfs_node *VAR_1)
{
 if (VAR_0 == VAR_1) {
  FUNC_0("BUG in find_next_ancestor: called with parent == child");
  return ((void*)0);
 }

 while (VAR_0->parent != VAR_1) {
  if (!VAR_0->parent)
   return ((void*)0);
  VAR_0 = VAR_0->parent;
 }

 return VAR_0;
}
