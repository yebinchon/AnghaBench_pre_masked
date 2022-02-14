
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_lag {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_lag*) ;
 struct mlx5_lag* FUNC_1 (struct mlx5_core_dev*) ;

bool FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_lag *VAR_1;
 bool VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = VAR_1 && FUNC_0(VAR_1);

 return VAR_2;
}
