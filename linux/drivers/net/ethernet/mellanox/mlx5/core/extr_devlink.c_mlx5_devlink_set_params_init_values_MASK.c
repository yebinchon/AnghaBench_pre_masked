
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union devlink_param_value {int vstr; } ;
struct TYPE_4__ {TYPE_1__* steering; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct devlink {int dummy; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct devlink*,int ,union devlink_param_value) ;
 struct mlx5_core_dev* FUNC_1 (struct devlink*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct devlink *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = FUNC_1(VAR_2);
 union devlink_param_value VAR_4;

 if (VAR_3->priv.steering->mode == VAR_1)
  FUNC_2(VAR_4.vstr, "dmfs");
 else
  FUNC_2(VAR_4.vstr, "smfs");
 FUNC_0(VAR_2,
        VAR_0,
        VAR_4);
}
