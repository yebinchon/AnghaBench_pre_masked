
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct TYPE_2__ {int children; } ;
struct kernfs_node {TYPE_1__ dir; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 struct rb_node* FUNC_1 (int *) ;
 struct kernfs_node* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static struct kernfs_node *FUNC_3(struct kernfs_node *VAR_1)
{
 struct kernfs_node *VAR_2;

 while (1) {
  struct rb_node *VAR_3;

  VAR_2 = VAR_1;

  if (FUNC_0(VAR_1) != VAR_0)
   break;

  VAR_3 = FUNC_1(&VAR_1->dir.children);
  if (!VAR_3)
   break;

  VAR_1 = FUNC_2(VAR_3);
 }

 return VAR_2;
}
