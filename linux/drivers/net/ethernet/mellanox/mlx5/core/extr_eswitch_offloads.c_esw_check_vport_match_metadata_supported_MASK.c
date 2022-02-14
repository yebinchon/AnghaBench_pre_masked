
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eswitch {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(const struct mlx5_eswitch *VAR_4)
{
 if (!FUNC_0(VAR_4->dev, VAR_1))
  return 0;

 if (!(FUNC_1(VAR_4->dev, VAR_2) &
       VAR_0))
  return 0;

 if (!FUNC_1(VAR_4->dev, VAR_3))
  return 0;

 if (FUNC_2(VAR_4->dev) ||
     FUNC_3(VAR_4->dev))
  return 0;

 return 1;
}
