
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table_attr {int prio; int level; int max_fte; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_steering {int dev; } ;
struct mlx5_flow_namespace {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_table*) ;
 int VAR_4 ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 struct mlx5_flow_table* FUNC_4 (struct mlx5_flow_namespace*,struct mlx5_flow_table_attr*) ;
 struct mlx5_flow_namespace* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx5_flow_steering *VAR_5)
{
 struct mlx5_flow_namespace *VAR_6 = ((void*)0);
 struct mlx5_flow_table_attr VAR_7 = {};
 struct mlx5_flow_table *VAR_8;

 VAR_6 = FUNC_5(VAR_5->dev, VAR_4);
 if (FUNC_2(!VAR_6))
  return -VAR_3;

 VAR_7.max_fte = VAR_2;
 VAR_7.level = VAR_0;
 VAR_7.prio = VAR_1;

 VAR_8 = FUNC_4(VAR_6, &VAR_7);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_5->dev, "Failed to create last anchor flow table");
  return FUNC_1(VAR_8);
 }
 return 0;
}
