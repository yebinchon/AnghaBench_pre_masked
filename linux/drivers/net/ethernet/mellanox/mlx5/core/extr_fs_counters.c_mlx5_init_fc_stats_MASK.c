
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fc_stats {int bulk_query_out; int fc_pool; int work; int sampling_interval; int wq; int dellist; int addlist; int counters; int counters_idr; int counters_idr_lock; } ;
struct TYPE_2__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct mlx5_core_dev*) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mlx5_core_dev *VAR_4)
{
 struct mlx5_fc_stats *VAR_5 = &VAR_4->priv.fc_stats;
 int VAR_6;
 int VAR_7;

 FUNC_10(&VAR_5->counters_idr_lock);
 FUNC_4(&VAR_5->counters_idr);
 FUNC_1(&VAR_5->counters);
 FUNC_5(&VAR_5->addlist);
 FUNC_5(&VAR_5->dellist);

 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = FUNC_8(VAR_6);
 VAR_5->bulk_query_out = FUNC_7(VAR_7, VAR_1);
 if (!VAR_5->bulk_query_out)
  return -VAR_0;

 VAR_5->wq = FUNC_2("mlx5_fc");
 if (!VAR_5->wq)
  goto err_wq_create;

 VAR_5->sampling_interval = VAR_2;
 FUNC_0(&VAR_5->work, VAR_3);

 FUNC_9(&VAR_5->fc_pool, VAR_4);
 return 0;

err_wq_create:
 FUNC_6(VAR_5->bulk_query_out);
 return -VAR_0;
}
