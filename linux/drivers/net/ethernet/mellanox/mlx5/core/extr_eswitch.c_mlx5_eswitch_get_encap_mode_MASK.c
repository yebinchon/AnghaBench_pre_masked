
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
typedef enum devlink_eswitch_encap_mode { ____Placeholder_devlink_eswitch_encap_mode } devlink_eswitch_encap_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_eswitch*) ;

enum devlink_eswitch_encap_mode
FUNC_1(const struct mlx5_core_dev *VAR_1)
{
 struct mlx5_eswitch *VAR_2;

 VAR_2 = VAR_1->priv.eswitch;
 return FUNC_0(VAR_2) ? VAR_2->offloads.encap :
  VAR_0;
}
