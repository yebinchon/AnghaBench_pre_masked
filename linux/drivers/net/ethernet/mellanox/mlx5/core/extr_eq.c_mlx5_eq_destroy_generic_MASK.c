
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eq {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_eq*) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_eq*) ;
 int FUNC_2 (struct mlx5_eq*) ;

int FUNC_3(struct mlx5_core_dev *VAR_1, struct mlx5_eq *VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  goto out;

 FUNC_2(VAR_2);
out:
 return VAR_3;
}
