
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;





 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_1(struct mlx5_core_dev *VAR_2, u8 VAR_3)
{
 switch (VAR_3) {
 case 130:
  return FUNC_0(VAR_2, VAR_0);
 case 129:
 case 128:
  return FUNC_0(VAR_2, VAR_1);
 default:
  return 0;
 }
}
