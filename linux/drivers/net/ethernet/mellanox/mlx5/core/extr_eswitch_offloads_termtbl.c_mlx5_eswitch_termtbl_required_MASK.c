
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_act {int action; } ;
struct mlx5_eswitch {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mlx5_eswitch*,struct mlx5_flow_spec*) ;
 int VAR_1 ;

bool
FUNC_2(struct mlx5_eswitch *VAR_2,
         struct mlx5_flow_act *VAR_3,
         struct mlx5_flow_spec *VAR_4)
{
 if (!FUNC_0(VAR_2->dev, VAR_1))
  return 0;


 return (VAR_3->action & VAR_0) &&
  FUNC_1(VAR_2, VAR_4);
}
