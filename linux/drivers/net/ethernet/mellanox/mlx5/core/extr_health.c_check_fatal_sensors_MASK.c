
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*) ;

__attribute__((used)) static u32 FUNC_4(struct mlx5_core_dev *VAR_8)
{
 if (FUNC_3(VAR_8))
  return VAR_6;
 if (FUNC_1(VAR_8->pdev))
  return VAR_7;
 if (FUNC_0(VAR_8) == VAR_0)
  return VAR_3;
 if (FUNC_0(VAR_8) == VAR_1)
  return VAR_4;
 if (FUNC_2(VAR_8))
  return VAR_2;

 return VAR_5;
}
