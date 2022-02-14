
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_lag {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct mlx5_lag*) ;
 struct mlx5_lag* FUNC_3 (struct mlx5_core_dev*) ;

void FUNC_4(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_lag *VAR_1;

 FUNC_0();
 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1)
  goto unlock;

 FUNC_2(VAR_1);

unlock:
 FUNC_1();
}
