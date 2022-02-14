
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {struct mlx5_flow_namespace** fdb_sub_ns; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct TYPE_2__ {struct mlx5_flow_steering* steering; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;



struct mlx5_flow_namespace *FUNC_0(struct mlx5_core_dev *VAR_0,
      int VAR_1)
{
 struct mlx5_flow_steering *VAR_2 = VAR_0->priv.steering;

 if (!VAR_2 || !VAR_2->fdb_sub_ns)
  return ((void*)0);

 return VAR_2->fdb_sub_ns[VAR_1];
}
