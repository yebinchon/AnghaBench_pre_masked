
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hv_vhca_agent {int dummy; } ;
struct mlx5_hv_vhca {int dev; int agents_lock; struct mlx5_hv_vhca_agent** agents; } ;


 scalar_t__ FUNC_0 (struct mlx5_hv_vhca*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlx5_hv_vhca *VAR_2)
{
 struct mlx5_hv_vhca_agent *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return;

 VAR_3 = VAR_2->agents[VAR_0];
 if (VAR_3)
  FUNC_3(VAR_3);

 FUNC_4(&VAR_2->agents_lock);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_2->agents[VAR_4]);

 FUNC_5(&VAR_2->agents_lock);

 FUNC_2(VAR_2->dev);
}
