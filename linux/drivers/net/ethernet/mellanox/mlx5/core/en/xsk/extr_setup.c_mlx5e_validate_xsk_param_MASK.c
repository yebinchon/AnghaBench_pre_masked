
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xsk_param {scalar_t__ chunk_size; } ;
struct mlx5e_params {int rq_wq_type; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_1 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*) ;

bool FUNC_3(struct mlx5e_params *VAR_2,
         struct mlx5e_xsk_param *VAR_3,
         struct mlx5_core_dev *VAR_4)
{

 if (VAR_3->chunk_size > VAR_1 ||
   VAR_3->chunk_size < VAR_0)
  return 0;


 if (FUNC_0(VAR_2, VAR_3) > VAR_3->chunk_size)
  return 0;




 switch (VAR_2->rq_wq_type) {
 case 128:
  return FUNC_2(VAR_4, VAR_2, VAR_3);
 default:
  return FUNC_1(VAR_2, VAR_3);
 }
}
