
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_esw_offload {int ft_offloads; } ;
struct mlx5_eswitch {struct mlx5_esw_offload offloads; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_eswitch *VAR_0)
{
 struct mlx5_esw_offload *VAR_1 = &VAR_0->offloads;

 FUNC_0(VAR_1->ft_offloads);
}
