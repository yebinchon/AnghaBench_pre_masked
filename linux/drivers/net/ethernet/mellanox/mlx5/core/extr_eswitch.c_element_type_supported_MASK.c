
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eswitch {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_core_dev const*,int ) ;




 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct mlx5_eswitch *VAR_5, int VAR_6)
{
 const struct mlx5_core_dev *VAR_7 = VAR_5->dev;

 switch (VAR_6) {
 case 130:
  return FUNC_0(VAR_7, VAR_4) &
         VAR_1;
 case 129:
  return FUNC_0(VAR_7, VAR_4) &
         VAR_2;
 case 128:
  return FUNC_0(VAR_7, VAR_4) &
         VAR_3;
 case 131:
  return FUNC_0(VAR_7, VAR_4) &
         VAR_0;
 }
 return 0;
}
