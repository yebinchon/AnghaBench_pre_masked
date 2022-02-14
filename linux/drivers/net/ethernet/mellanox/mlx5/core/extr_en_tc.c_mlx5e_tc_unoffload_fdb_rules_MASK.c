
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {int * rule; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_esw_flow_attr {scalar_t__ split_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_1 (struct mlx5_eswitch*,int ,struct mlx5_esw_flow_attr*) ;
 int FUNC_2 (struct mlx5_eswitch*,int ,struct mlx5_esw_flow_attr*) ;

__attribute__((used)) static void
FUNC_3(struct mlx5_eswitch *VAR_1,
        struct mlx5e_tc_flow *VAR_2,
      struct mlx5_esw_flow_attr *VAR_3)
{
 FUNC_0(VAR_2, VAR_0);

 if (VAR_3->split_count)
  FUNC_1(VAR_1, VAR_2->rule[1], VAR_3);

 FUNC_2(VAR_1, VAR_2->rule[0], VAR_3);
}
