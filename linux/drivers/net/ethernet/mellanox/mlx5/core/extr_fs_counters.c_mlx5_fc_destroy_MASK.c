
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fc_stats {int work; int wq; int dellist; } ;
struct mlx5_fc {int dellist; scalar_t__ aging; } ;
struct TYPE_2__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_fc*) ;
 int FUNC_2 (int ,int *,int ) ;

void FUNC_3(struct mlx5_core_dev *VAR_0, struct mlx5_fc *VAR_1)
{
 struct mlx5_fc_stats *VAR_2 = &VAR_0->priv.fc_stats;

 if (!VAR_1)
  return;

 if (VAR_1->aging) {
  FUNC_0(&VAR_1->dellist, &VAR_2->dellist);
  FUNC_2(VAR_2->wq, &VAR_2->work, 0);
  return;
 }

 FUNC_1(VAR_0, VAR_1);
}
