
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_root_namespace {scalar_t__ mode; TYPE_1__* cmds; int dev; } ;
struct TYPE_2__ {int (* set_peer ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_root_namespace*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlx5_flow_root_namespace*,struct mlx5_flow_root_namespace*) ;

int FUNC_2(struct mlx5_flow_root_namespace *VAR_1,
     struct mlx5_flow_root_namespace *VAR_2)
{
 if (VAR_2 && VAR_1->mode != VAR_2->mode) {
  FUNC_0(VAR_1->dev,
         "Can't peer namespace of different steering mode\n");
  return -VAR_0;
 }

 return VAR_1->cmds->set_peer(VAR_1, VAR_2);
}
