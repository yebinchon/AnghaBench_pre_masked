
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int proto; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 TYPE_1__* VAR_1 ;

bool FUNC_1(struct mlx5_core_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_2, VAR_1[VAR_3].proto))
   return 1;
 }
 return 0;
}
