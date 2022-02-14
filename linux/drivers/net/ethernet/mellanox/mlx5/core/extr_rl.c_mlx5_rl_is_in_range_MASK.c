
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_rl_table {scalar_t__ max_rate; scalar_t__ min_rate; } ;
struct TYPE_2__ {struct mlx5_rl_table rl_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;



bool FUNC_0(struct mlx5_core_dev *VAR_0, u32 VAR_1)
{
 struct mlx5_rl_table *VAR_2 = &VAR_0->priv.rl_table;

 return (VAR_1 <= VAR_2->max_rate && VAR_1 >= VAR_2->min_rate);
}
