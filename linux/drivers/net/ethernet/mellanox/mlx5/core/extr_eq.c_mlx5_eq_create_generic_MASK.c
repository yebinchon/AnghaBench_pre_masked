
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eq_param {int dummy; } ;
struct mlx5_eq {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5_eq* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_eq*,struct mlx5_eq_param*) ;
 int FUNC_2 (struct mlx5_eq*) ;
 struct mlx5_eq* FUNC_3 (int,int ) ;

struct mlx5_eq *
FUNC_4(struct mlx5_core_dev *VAR_2,
         struct mlx5_eq_param *VAR_3)
{
 struct mlx5_eq *VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 int VAR_5;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4);
  VAR_4 = FUNC_0(VAR_5);
 }

 return VAR_4;
}
