
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct mlx5_core_dev *VAR_2, struct mlx5_core_dev *VAR_3)
{
 if ((VAR_2->priv.eswitch->mode == VAR_0 &&
      VAR_3->priv.eswitch->mode == VAR_0) ||
     (VAR_2->priv.eswitch->mode == VAR_1 &&
      VAR_3->priv.eswitch->mode == VAR_1))
  return 1;

 return 0;
}
