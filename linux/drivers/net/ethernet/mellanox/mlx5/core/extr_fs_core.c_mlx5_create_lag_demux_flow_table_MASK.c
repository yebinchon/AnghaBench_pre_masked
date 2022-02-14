
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_flow_table_attr {int prio; int level; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (struct mlx5_flow_namespace*,struct mlx5_flow_table_attr*,int ,int ) ;

struct mlx5_flow_table*
FUNC_1(struct mlx5_flow_namespace *VAR_1,
     int VAR_2, u32 VAR_3)
{
 struct mlx5_flow_table_attr VAR_4 = {};

 VAR_4.level = VAR_3;
 VAR_4.prio = VAR_2;
 return FUNC_0(VAR_1, &VAR_4, VAR_0, 0);
}
