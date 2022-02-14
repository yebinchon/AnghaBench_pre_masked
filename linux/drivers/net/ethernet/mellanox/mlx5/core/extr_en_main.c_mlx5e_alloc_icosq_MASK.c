
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int db_numa_node; } ;
struct mlx5e_sq_param {TYPE_3__ wq; int sqc; } ;
struct mlx5_wq_cyc {int * db; } ;
struct mlx5e_icosq {int wq_ctrl; int recover_work; int uar_map; struct mlx5e_channel* channel; struct mlx5_wq_cyc wq; } ;
struct mlx5e_channel {int cpu; struct mlx5_core_dev* mdev; } ;
struct TYPE_4__ {int map; } ;
struct TYPE_5__ {TYPE_1__ bfreg; } ;
struct mlx5_core_dev {TYPE_2__ mlx5e_res; } ;


 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_3__*,void*,struct mlx5_wq_cyc*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5e_icosq*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_wq_cyc* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct mlx5e_channel *VAR_4,
        struct mlx5e_sq_param *VAR_5,
        struct mlx5e_icosq *VAR_6)
{
 void *VAR_7 = FUNC_1(VAR_2, VAR_5->sqc, VAR_3);
 struct mlx5_core_dev *VAR_8 = VAR_4->mdev;
 struct mlx5_wq_cyc *VAR_9 = &VAR_6->wq;
 int VAR_10;

 VAR_6->channel = VAR_4;
 VAR_6->uar_map = VAR_8->mlx5e_res.bfreg.map;

 VAR_5->wq.db_numa_node = FUNC_2(VAR_4->cpu);
 VAR_10 = FUNC_3(VAR_8, &VAR_5->wq, VAR_7, VAR_9, &VAR_6->wq_ctrl);
 if (VAR_10)
  return VAR_10;
 VAR_9->db = &VAR_9->db[VAR_0];

 VAR_10 = FUNC_5(VAR_6, FUNC_2(VAR_4->cpu));
 if (VAR_10)
  goto err_sq_wq_destroy;

 FUNC_0(&VAR_6->recover_work, VAR_1);

 return 0;

err_sq_wq_destroy:
 FUNC_4(&VAR_6->wq_ctrl);

 return VAR_10;
}
