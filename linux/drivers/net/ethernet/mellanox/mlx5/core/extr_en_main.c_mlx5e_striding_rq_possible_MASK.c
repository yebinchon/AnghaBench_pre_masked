
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {scalar_t__ xdp_prog; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*,int *) ;

bool FUNC_3(struct mlx5_core_dev *VAR_0,
    struct mlx5e_params *VAR_1)
{
 if (!FUNC_1(VAR_0))
  return 0;

 if (FUNC_0(VAR_0))
  return 0;

 if (VAR_1->xdp_prog) {




  if (!FUNC_2(VAR_0, VAR_1, ((void*)0)))
   return 0;
 }

 return 1;
}
