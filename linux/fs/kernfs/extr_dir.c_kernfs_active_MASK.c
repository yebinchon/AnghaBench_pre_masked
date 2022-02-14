
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int active; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct kernfs_node *VAR_1)
{
 FUNC_1(&VAR_0);
 return FUNC_0(&VAR_1->active) >= 0;
}
