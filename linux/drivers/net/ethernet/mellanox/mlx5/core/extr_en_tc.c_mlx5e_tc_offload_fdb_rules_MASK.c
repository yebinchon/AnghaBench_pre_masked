
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {struct mlx5_flow_handle** rule; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_esw_flow_attr {scalar_t__ split_count; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_1 (struct mlx5_eswitch*,struct mlx5_flow_spec*,struct mlx5_esw_flow_attr*) ;
 struct mlx5_flow_handle* FUNC_2 (struct mlx5_eswitch*,struct mlx5_flow_spec*,struct mlx5_esw_flow_attr*) ;
 int FUNC_3 (struct mlx5_eswitch*,struct mlx5_flow_handle*,struct mlx5_esw_flow_attr*) ;

__attribute__((used)) static struct mlx5_flow_handle *
FUNC_4(struct mlx5_eswitch *VAR_0,
      struct mlx5e_tc_flow *VAR_1,
      struct mlx5_flow_spec *VAR_2,
      struct mlx5_esw_flow_attr *VAR_3)
{
 struct mlx5_flow_handle *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return VAR_4;

 if (VAR_3->split_count) {
  VAR_1->rule[1] = FUNC_1(VAR_0, VAR_2, VAR_3);
  if (FUNC_0(VAR_1->rule[1])) {
   FUNC_3(VAR_0, VAR_4, VAR_3);
   return VAR_1->rule[1];
  }
 }

 return VAR_4;
}
