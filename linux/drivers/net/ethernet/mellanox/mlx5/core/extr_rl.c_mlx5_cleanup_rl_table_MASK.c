
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_rl_table {int max_size; TYPE_3__* rl_entry; } ;
struct mlx5_rate_limit {int member_0; } ;
struct TYPE_4__ {struct mlx5_rl_table rl_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_5__ {scalar_t__ rate; } ;
struct TYPE_6__ {int index; TYPE_2__ rl; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,struct mlx5_rate_limit*) ;

void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_rl_table *VAR_1 = &VAR_0->priv.rl_table;
 struct mlx5_rate_limit VAR_2 = {0};
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1->max_size; VAR_3++)
  if (VAR_1->rl_entry[VAR_3].rl.rate)
   FUNC_1(VAR_0, VAR_1->rl_entry[VAR_3].index,
         &VAR_2);

 FUNC_0(VAR_0->priv.rl_table.rl_entry);
}
