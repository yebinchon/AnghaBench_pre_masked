
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_node {int rb; TYPE_2__* parent; } ;
struct TYPE_3__ {int children; int subdirs; } ;
struct TYPE_4__ {TYPE_1__ dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool FUNC_4(struct kernfs_node *VAR_1)
{
 if (FUNC_1(&VAR_1->rb))
  return 0;

 if (FUNC_2(VAR_1) == VAR_0)
  VAR_1->parent->dir.subdirs--;

 FUNC_3(&VAR_1->rb, &VAR_1->parent->dir.children);
 FUNC_0(&VAR_1->rb);
 return 1;
}
