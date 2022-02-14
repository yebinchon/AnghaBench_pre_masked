
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_group {int id; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

void FUNC_3(struct mlx5_flow_group *VAR_0)
{
 if (FUNC_2(&VAR_0->node, 0))
  FUNC_1(FUNC_0(&VAR_0->node), "Flow group %d wasn't destroyed, refcount > 1\n",
          VAR_0->id);
}
