
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int encap; } ;
struct mlx5_eswitch {TYPE_2__ offloads; } ;
struct TYPE_3__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct devlink {int dummy; } ;
typedef enum devlink_eswitch_encap_mode { ____Placeholder_devlink_eswitch_encap_mode } devlink_eswitch_encap_mode ;


 struct mlx5_core_dev* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct devlink*) ;

int FUNC_2(struct devlink *VAR_0,
     enum devlink_eswitch_encap_mode *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = FUNC_0(VAR_0);
 struct mlx5_eswitch *VAR_3 = VAR_2->priv.eswitch;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  return VAR_4;

 *VAR_1 = VAR_3->offloads.encap;
 return 0;
}
