
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fc_stats {int counters_idr_lock; int counters_idr; } ;
struct mlx5_fc {int id; int list; } ;
struct TYPE_2__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_0,
     struct mlx5_fc *VAR_1)
{
 struct mlx5_fc_stats *VAR_2 = &VAR_0->priv.fc_stats;

 FUNC_2(&VAR_1->list);

 FUNC_3(&VAR_2->counters_idr_lock);
 FUNC_0(!FUNC_1(&VAR_2->counters_idr, VAR_1->id));
 FUNC_4(&VAR_2->counters_idr_lock);
}
