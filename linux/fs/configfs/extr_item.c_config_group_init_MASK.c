
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int default_groups; int cg_children; int cg_item; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct config_group *VAR_0)
{
 FUNC_1(&VAR_0->cg_item);
 FUNC_0(&VAR_0->cg_children);
 FUNC_0(&VAR_0->default_groups);
}
