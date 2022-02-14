
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int node; } ;
struct mlx5_flow_root_namespace {scalar_t__ table_type; int mode; struct mlx5_flow_cmds const* cmds; int dev; struct mlx5_flow_namespace ns; } ;
struct mlx5_flow_cmds {int (* create_ns ) (struct mlx5_flow_root_namespace*) ;int (* destroy_ns ) (struct mlx5_flow_root_namespace*) ;} ;
typedef enum mlx5_flow_steering_mode { ____Placeholder_mlx5_flow_steering_mode } mlx5_flow_steering_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mlx5_flow_root_namespace* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 struct mlx5_flow_cmds* FUNC_2 () ;
 struct mlx5_flow_cmds* FUNC_3 () ;
 int FUNC_4 (struct mlx5_flow_root_namespace*) ;
 int FUNC_5 (struct mlx5_flow_root_namespace*) ;

int FUNC_6(struct mlx5_flow_namespace *VAR_4,
     enum mlx5_flow_steering_mode VAR_5)
{
 struct mlx5_flow_root_namespace *VAR_6;
 const struct mlx5_flow_cmds *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(&VAR_4->node);
 if (&VAR_6->ns != VAR_4)

  return -VAR_0;

 if (VAR_6->table_type != VAR_2)
  return -VAR_1;

 if (VAR_6->mode == VAR_5)
  return 0;

 if (VAR_5 == VAR_3)
  VAR_7 = FUNC_2();
 else
  VAR_7 = FUNC_3();
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = VAR_7->create_ns(VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "Failed to create flow namespace (%d)\n",
         VAR_8);
  return VAR_8;
 }

 VAR_6->cmds->destroy_ns(VAR_6);
 VAR_6->cmds = VAR_7;
 VAR_6->mode = VAR_5;

 return 0;
}
