
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {int rq_wq_type; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5e_params*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,struct mlx5e_params*) ;

void FUNC_2(struct mlx5_core_dev *VAR_3, struct mlx5e_params *VAR_4)
{
 VAR_4->rq_wq_type = FUNC_1(VAR_3, VAR_4) &&
  FUNC_0(VAR_4, VAR_0) ?
  VAR_2 :
  VAR_1;
}
