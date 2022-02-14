
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mlx5dr_qp* wqe_head; } ;
struct mlx5dr_qp {int wq_ctrl; TYPE_1__ sq; int mqp; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5dr_qp*) ;
 int FUNC_1 (struct mlx5_core_dev*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_0,
     struct mlx5dr_qp *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->mqp);
 FUNC_0(VAR_1->sq.wqe_head);
 FUNC_2(&VAR_1->wq_ctrl);
 FUNC_0(VAR_1);
}
