
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_flow_steering {TYPE_1__** esw_ingress_root_ns; TYPE_3__** esw_egress_root_ns; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct TYPE_5__ {struct mlx5_flow_steering* steering; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;
struct TYPE_6__ {struct mlx5_flow_namespace ns; } ;
struct TYPE_4__ {struct mlx5_flow_namespace ns; } ;




 int FUNC_0 (struct mlx5_core_dev*) ;

struct mlx5_flow_namespace *FUNC_1(struct mlx5_core_dev *VAR_0,
             enum mlx5_flow_namespace_type VAR_1,
             int VAR_2)
{
 struct mlx5_flow_steering *VAR_3 = VAR_0->priv.steering;

 if (!VAR_3 || VAR_2 >= FUNC_0(VAR_0))
  return ((void*)0);

 switch (VAR_1) {
 case 129:
  if (VAR_3->esw_egress_root_ns &&
      VAR_3->esw_egress_root_ns[VAR_2])
   return &VAR_3->esw_egress_root_ns[VAR_2]->ns;
  else
   return ((void*)0);
 case 128:
  if (VAR_3->esw_ingress_root_ns &&
      VAR_3->esw_ingress_root_ns[VAR_2])
   return &VAR_3->esw_ingress_root_ns[VAR_2]->ns;
  else
   return ((void*)0);
 default:
  return ((void*)0);
 }
}
