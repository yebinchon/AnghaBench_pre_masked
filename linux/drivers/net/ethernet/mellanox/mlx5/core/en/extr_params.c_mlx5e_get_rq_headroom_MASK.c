
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {scalar_t__ rq_wq_type; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_1 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*) ;

u16 FUNC_3(struct mlx5_core_dev *VAR_1,
     struct mlx5e_params *VAR_2,
     struct mlx5e_xsk_param *VAR_3)
{
 bool VAR_4 = (VAR_2->rq_wq_type == VAR_0) ?
  FUNC_1(VAR_2, VAR_3) :
  FUNC_2(VAR_1, VAR_2, VAR_3);

 return VAR_4 ? FUNC_0(VAR_2, VAR_3) : 0;
}
