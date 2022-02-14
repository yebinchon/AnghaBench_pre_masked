
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_steering {int dummy; } ;
struct mlx5_flow_root_namespace {TYPE_2__* dev; } ;
struct fs_node {int dummy; } ;
struct TYPE_3__ {struct mlx5_flow_steering* steering; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 struct mlx5_flow_root_namespace* FUNC_0 (struct fs_node*) ;

__attribute__((used)) static inline struct mlx5_flow_steering *FUNC_1(struct fs_node *VAR_0)
{
 struct mlx5_flow_root_namespace *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1->dev->priv.steering;
 return ((void*)0);
}
