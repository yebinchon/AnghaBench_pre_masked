
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_lag {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_lag*) ;
 int VAR_0 ;
 struct mlx5_lag* FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_lag *VAR_2;
 bool VAR_3;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = VAR_2 && FUNC_0(VAR_2);
 FUNC_3(&VAR_0);

 return VAR_3;
}
