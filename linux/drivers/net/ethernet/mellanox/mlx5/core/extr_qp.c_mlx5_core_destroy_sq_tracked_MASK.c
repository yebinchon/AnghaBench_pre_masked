
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_qp {int uid; int qpn; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_core_qp*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ) ;

void FUNC_2(struct mlx5_core_dev *VAR_0,
      struct mlx5_core_qp *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1->qpn, VAR_1->uid);
}
