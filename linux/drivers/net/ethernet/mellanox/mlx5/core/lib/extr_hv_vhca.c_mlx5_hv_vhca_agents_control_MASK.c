
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hv_vhca_control_block {int control; } ;
struct mlx5_hv_vhca_agent {int (* control ) (struct mlx5_hv_vhca_agent*,struct mlx5_hv_vhca_control_block*) ;int type; } ;
struct mlx5_hv_vhca {struct mlx5_hv_vhca_agent** agents; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_hv_vhca_agent*,struct mlx5_hv_vhca_control_block*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_hv_vhca *VAR_1,
     struct mlx5_hv_vhca_control_block *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct mlx5_hv_vhca_agent *VAR_4 = VAR_1->agents[VAR_3];

  if (!VAR_4 || !VAR_4->control)
   continue;

  if (!(FUNC_0(VAR_4->type) & VAR_2->control))
   continue;

  VAR_4->control(VAR_4, VAR_2);
 }
}
