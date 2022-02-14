
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int initializing; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct mlx5_core_dev *VAR_1)
{
 return (FUNC_0(&VAR_1->iseg->initializing) >> VAR_0) & 1;
}
