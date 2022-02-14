
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_2__* nic_attr; TYPE_1__* esw_attr; } ;
struct mlx5_fc {int dummy; } ;
struct TYPE_4__ {struct mlx5_fc* counter; } ;
struct TYPE_3__ {struct mlx5_fc* counter; } ;


 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*) ;

__attribute__((used)) static struct mlx5_fc *FUNC_1(struct mlx5e_tc_flow *VAR_0)
{
 if (FUNC_0(VAR_0))
  return VAR_0->esw_attr->counter;
 else
  return VAR_0->nic_attr->counter;
}
