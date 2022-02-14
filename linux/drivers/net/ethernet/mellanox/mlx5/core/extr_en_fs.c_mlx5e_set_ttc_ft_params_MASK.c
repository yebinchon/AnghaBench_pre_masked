
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table_attr {int prio; int level; int max_fte; } ;
struct ttc_params {struct mlx5_flow_table_attr ft_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct ttc_params *VAR_3)

{
 struct mlx5_flow_table_attr *VAR_4 = &VAR_3->ft_attr;

 VAR_4->max_fte = VAR_2;
 VAR_4->level = VAR_1;
 VAR_4->prio = VAR_0;
}
