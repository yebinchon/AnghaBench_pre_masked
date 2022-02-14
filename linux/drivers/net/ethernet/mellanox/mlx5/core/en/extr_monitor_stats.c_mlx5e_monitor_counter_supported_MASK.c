
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(struct mlx5e_priv *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;

 if (!FUNC_0(VAR_7, VAR_2))
  return 0;
 if (FUNC_1(VAR_7, VAR_5) &&
     FUNC_0(VAR_7, VAR_3) <
     VAR_0)
  return 0;
 if (FUNC_0(VAR_7, VAR_4) <
     VAR_1)
  return 0;
 return 1;
}
