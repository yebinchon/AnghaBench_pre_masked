
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_sq_bfreg {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_sq_bfreg*,int,int) ;

int FUNC_1(struct mlx5_core_dev *VAR_1, struct mlx5_sq_bfreg *VAR_2,
       bool VAR_3, bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return 0;

 if (VAR_5 == -VAR_0 && VAR_3)
  return FUNC_0(VAR_1, VAR_2, 0, VAR_4);

 return VAR_5;
}
