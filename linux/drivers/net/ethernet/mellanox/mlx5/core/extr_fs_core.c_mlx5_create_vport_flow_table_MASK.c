
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_flow_table_attr {int max_fte; int prio; int level; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (struct mlx5_flow_namespace*,struct mlx5_flow_table_attr*,int ,int ) ;

struct mlx5_flow_table *FUNC_1(struct mlx5_flow_namespace *VAR_1,
           int VAR_2, int VAR_3,
           u32 VAR_4, u16 VAR_5)
{
 struct mlx5_flow_table_attr VAR_6 = {};

 VAR_6.max_fte = VAR_3;
 VAR_6.level = VAR_4;
 VAR_6.prio = VAR_2;

 return FUNC_0(VAR_1, &VAR_6, VAR_0, VAR_5);
}
