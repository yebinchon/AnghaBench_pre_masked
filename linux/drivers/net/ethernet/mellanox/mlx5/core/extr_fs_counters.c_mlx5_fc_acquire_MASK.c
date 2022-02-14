
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fc_stats {int fc_pool; } ;
struct mlx5_fc {int dummy; } ;
struct TYPE_2__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_fc*) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 struct mlx5_fc* FUNC_2 (int *) ;
 struct mlx5_fc* FUNC_3 (struct mlx5_core_dev*) ;

__attribute__((used)) static struct mlx5_fc *FUNC_4(struct mlx5_core_dev *VAR_1, bool VAR_2)
{
 struct mlx5_fc_stats *VAR_3 = &VAR_1->priv.fc_stats;
 struct mlx5_fc *VAR_4;

 if (VAR_2 && FUNC_1(VAR_1, VAR_0) != 0) {
  VAR_4 = FUNC_2(&VAR_3->fc_pool);
  if (!FUNC_0(VAR_4))
   return VAR_4;
 }

 return FUNC_3(VAR_1);
}
