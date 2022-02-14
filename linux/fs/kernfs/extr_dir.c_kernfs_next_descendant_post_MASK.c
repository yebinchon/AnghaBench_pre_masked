
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct kernfs_node {struct kernfs_node* parent; int rb; } ;


 struct kernfs_node* FUNC_0 (struct kernfs_node*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct rb_node* FUNC_2 (int *) ;
 struct kernfs_node* FUNC_3 (struct rb_node*) ;

__attribute__((used)) static struct kernfs_node *FUNC_4(struct kernfs_node *VAR_1,
             struct kernfs_node *VAR_2)
{
 struct rb_node *VAR_3;

 FUNC_1(&VAR_0);


 if (!VAR_1)
  return FUNC_0(VAR_2);


 if (VAR_1 == VAR_2)
  return ((void*)0);


 VAR_3 = FUNC_2(&VAR_1->rb);
 if (VAR_3)
  return FUNC_0(FUNC_3(VAR_3));


 return VAR_1->parent;
}
