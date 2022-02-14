
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dep_map; int active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int) ;

struct kernfs_node *FUNC_4(struct kernfs_node *VAR_1)
{
 if (FUNC_3(!VAR_1))
  return ((void*)0);

 if (!FUNC_0(&VAR_1->active))
  return ((void*)0);

 if (FUNC_1(VAR_1))
  FUNC_2(&VAR_1->dep_map, 0, 1, VAR_0);
 return VAR_1;
}
