
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fc_stats {int wq; } ;
struct TYPE_2__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct delayed_work {int dummy; } ;


 int FUNC_0 (int ,struct delayed_work*,unsigned long) ;

void FUNC_1(struct mlx5_core_dev *VAR_0,
         struct delayed_work *VAR_1,
         unsigned long VAR_2)
{
 struct mlx5_fc_stats *VAR_3 = &VAR_0->priv.fc_stats;

 FUNC_0(VAR_3->wq, VAR_1, VAR_2);
}
