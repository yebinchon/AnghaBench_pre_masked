
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5e_cq_param {int eq_ix; int cqc; int wq; } ;
struct TYPE_3__ {scalar_t__* db; } ;
struct TYPE_4__ {TYPE_1__ db; } ;
struct mlx5_core_cq {int cqe_sz; unsigned int irqn; int event; int comp; int vector; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct mlx5e_cq {struct mlx5_core_dev* mdev; int wq; TYPE_2__ wq_ctrl; struct mlx5_core_cq mcq; } ;
struct mlx5_cqe64 {int op_own; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int *,int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct mlx5_cqe64* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int*,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_2,
     struct mlx5e_cq_param *VAR_3,
     struct mlx5e_cq *VAR_4)
{
 struct mlx5_core_cq *VAR_5 = &VAR_4->mcq;
 int VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_2, VAR_3->eq_ix, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_2, &VAR_3->wq, VAR_3->cqc, &VAR_4->wq,
          &VAR_4->wq_ctrl);
 if (VAR_8)
  return VAR_8;

 VAR_5->cqe_sz = 64;
 VAR_5->set_ci_db = VAR_4->wq_ctrl.db.db;
 VAR_5->arm_db = VAR_4->wq_ctrl.db.db + 1;
 *VAR_5->set_ci_db = 0;
 *VAR_5->arm_db = 0;
 VAR_5->vector = VAR_3->eq_ix;
 VAR_5->comp = VAR_0;
 VAR_5->event = VAR_1;
 VAR_5->irqn = VAR_7;

 for (VAR_9 = 0; VAR_9 < FUNC_1(&VAR_4->wq); VAR_9++) {
  struct mlx5_cqe64 *VAR_10 = FUNC_2(&VAR_4->wq, VAR_9);

  VAR_10->op_own = 0xf1;
 }

 VAR_4->mdev = VAR_2;

 return 0;
}
