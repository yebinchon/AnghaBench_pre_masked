
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hv_vhca_agent {size_t type; int (* cleanup ) (struct mlx5_hv_vhca_agent*) ;struct mlx5_hv_vhca* hv_vhca; } ;
struct mlx5_hv_vhca {int agents_lock; struct mlx5_hv_vhca_agent** agents; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_2 (struct mlx5_hv_vhca*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_hv_vhca_agent*) ;

void FUNC_6(struct mlx5_hv_vhca_agent *VAR_0)
{
 struct mlx5_hv_vhca *VAR_1 = VAR_0->hv_vhca;

 FUNC_3(&VAR_1->agents_lock);

 if (FUNC_0(VAR_0 != VAR_1->agents[VAR_0->type])) {
  FUNC_4(&VAR_1->agents_lock);
  return;
 }

 VAR_1->agents[VAR_0->type] = ((void*)0);
 FUNC_4(&VAR_1->agents_lock);

 if (VAR_0->cleanup)
  VAR_0->cleanup(VAR_0);

 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
