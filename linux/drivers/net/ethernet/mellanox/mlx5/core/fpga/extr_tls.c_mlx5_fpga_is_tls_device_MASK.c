
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int fpga; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_2(struct mlx5_core_dev *VAR_6)
{
 if (!VAR_6->fpga || !FUNC_1(VAR_6, VAR_2))
  return 0;

 if (FUNC_0(VAR_6, VAR_3) !=
     VAR_1)
  return 0;

 if (FUNC_0(VAR_6, VAR_4) !=
     VAR_0)
  return 0;

 if (FUNC_0(VAR_6, VAR_5) != 0)
  return 0;

 return 1;
}
