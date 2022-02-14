
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_pport_stats {int * per_tc_congest_prio_counters; int * per_tc_prio_counters; } ;
struct TYPE_2__ {struct mlx5e_pport_stats pport; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; TYPE_1__ stats; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_6,
       u64 *VAR_7, int VAR_8)
{
 struct mlx5e_pport_stats *VAR_9 = &VAR_6->stats.pport;
 struct mlx5_core_dev *VAR_10 = VAR_6->mdev;
 int VAR_11, VAR_12;

 if (!FUNC_1(VAR_10, VAR_5))
  return VAR_8;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   VAR_7[VAR_8++] =
    FUNC_0(&VAR_9->per_tc_prio_counters[VAR_12],
          VAR_4, VAR_11);
  for (VAR_11 = 0; VAR_11 < VAR_0 ; VAR_11++)
   VAR_7[VAR_8++] =
    FUNC_0(&VAR_9->per_tc_congest_prio_counters[VAR_12],
          VAR_3, VAR_11);
 }

 return VAR_8;
}
