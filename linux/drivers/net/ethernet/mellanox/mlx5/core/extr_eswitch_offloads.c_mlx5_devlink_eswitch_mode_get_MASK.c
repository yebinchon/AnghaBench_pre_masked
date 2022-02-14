
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct devlink {int dummy; } ;
struct TYPE_3__ {int mode; } ;


 struct mlx5_core_dev* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct devlink*) ;

int FUNC_3(struct devlink *VAR_0, u16 *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2->priv.eswitch->mode, VAR_1);
}
