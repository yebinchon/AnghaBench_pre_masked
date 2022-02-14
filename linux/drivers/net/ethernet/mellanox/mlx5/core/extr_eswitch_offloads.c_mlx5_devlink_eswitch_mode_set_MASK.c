
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {TYPE_2__* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct devlink {int dummy; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mlx5_core_dev* FUNC_0 (struct devlink*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,struct netlink_ext_ack*) ;
 int FUNC_3 (TYPE_2__*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct devlink*) ;

int FUNC_5(struct devlink *VAR_3, u16 VAR_4,
      struct netlink_ext_ack *VAR_5)
{
 struct mlx5_core_dev *VAR_6 = FUNC_0(VAR_3);
 u16 VAR_7, VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_7 = VAR_6->priv.eswitch->mode;

 if (FUNC_1(VAR_4, &VAR_8))
  return -VAR_2;

 if (VAR_7 == VAR_8)
  return 0;

 if (VAR_4 == VAR_1)
  return FUNC_2(VAR_6->priv.eswitch, VAR_5);
 else if (VAR_4 == VAR_0)
  return FUNC_3(VAR_6->priv.eswitch, VAR_5);
 else
  return -VAR_2;
}
