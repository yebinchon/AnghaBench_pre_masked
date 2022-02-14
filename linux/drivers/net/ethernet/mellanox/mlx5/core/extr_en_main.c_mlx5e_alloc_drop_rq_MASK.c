
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf_numa_node; int db_numa_node; } ;
struct mlx5e_rq_param {TYPE_2__ wq; void* rqc; } ;
struct TYPE_3__ {int wq; } ;
struct mlx5e_rq {struct mlx5_core_dev* mdev; int xdp_rxq; int wq_ctrl; TYPE_1__ wqe; } ;
struct mlx5_core_dev {int dummy; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,TYPE_2__*,void*,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_1,
          struct mlx5e_rq *VAR_2,
          struct mlx5e_rq_param *VAR_3)
{
 void *VAR_4 = VAR_3->rqc;
 void *VAR_5 = FUNC_0(VAR_4, VAR_4, VAR_0);
 int VAR_6;

 VAR_3->wq.db_numa_node = VAR_3->wq.buf_numa_node;

 VAR_6 = FUNC_1(VAR_1, &VAR_3->wq, VAR_5, &VAR_2->wqe.wq,
     &VAR_2->wq_ctrl);
 if (VAR_6)
  return VAR_6;


 FUNC_2(&VAR_2->xdp_rxq);

 VAR_2->mdev = VAR_1;

 return 0;
}
