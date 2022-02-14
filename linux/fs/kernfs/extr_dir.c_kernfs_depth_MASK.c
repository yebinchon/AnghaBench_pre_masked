
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {struct kernfs_node* parent; } ;



__attribute__((used)) static size_t FUNC_0(struct kernfs_node *VAR_0, struct kernfs_node *VAR_1)
{
 size_t VAR_2 = 0;

 while (VAR_1->parent && VAR_1 != VAR_0) {
  VAR_2++;
  VAR_1 = VAR_1->parent;
 }
 return VAR_2;
}
