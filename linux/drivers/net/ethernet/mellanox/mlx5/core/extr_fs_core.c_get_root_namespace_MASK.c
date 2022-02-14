
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_root_namespace {int dummy; } ;
struct mlx5_flow_namespace {int node; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_flow_root_namespace* FUNC_0 (int *) ;
 struct mlx5_flow_namespace* FUNC_1 (struct mlx5_core_dev*,int) ;
 struct mlx5_flow_namespace* FUNC_2 (struct mlx5_core_dev*,int,int ) ;

__attribute__((used)) static struct mlx5_flow_root_namespace
*FUNC_3(struct mlx5_core_dev *VAR_2, enum mlx5_flow_namespace_type VAR_3)
{
 struct mlx5_flow_namespace *VAR_4;

 if (VAR_3 == VAR_0 ||
     VAR_3 == VAR_1)
  VAR_4 = FUNC_2(VAR_2, VAR_3, 0);
 else
  VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 return FUNC_0(&VAR_4->node);
}
