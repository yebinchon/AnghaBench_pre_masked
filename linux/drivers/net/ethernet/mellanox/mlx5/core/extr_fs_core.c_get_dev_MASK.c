
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_node {int dummy; } ;


 struct mlx5_flow_root_namespace* FUNC_0 (struct fs_node*) ;

__attribute__((used)) static inline struct mlx5_core_dev *FUNC_1(struct fs_node *VAR_0)
{
 struct mlx5_flow_root_namespace *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1->dev;
 return ((void*)0);
}
