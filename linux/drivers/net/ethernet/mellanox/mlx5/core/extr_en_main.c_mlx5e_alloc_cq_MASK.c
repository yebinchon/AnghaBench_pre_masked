
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* db_numa_node; void* buf_numa_node; } ;
struct mlx5e_cq_param {int eq_ix; TYPE_2__ wq; } ;
struct mlx5e_cq {struct mlx5e_channel* channel; int * napi; } ;
struct mlx5e_channel {int napi; int ix; int cpu; TYPE_1__* priv; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_3__ {struct mlx5_core_dev* mdev; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5e_cq_param*,struct mlx5e_cq*) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_channel *VAR_0,
     struct mlx5e_cq_param *VAR_1,
     struct mlx5e_cq *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = VAR_0->priv->mdev;
 int VAR_4;

 VAR_1->wq.buf_numa_node = FUNC_0(VAR_0->cpu);
 VAR_1->wq.db_numa_node = FUNC_0(VAR_0->cpu);
 VAR_1->eq_ix = VAR_0->ix;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

 VAR_2->napi = &VAR_0->napi;
 VAR_2->channel = VAR_0;

 return VAR_4;
}
