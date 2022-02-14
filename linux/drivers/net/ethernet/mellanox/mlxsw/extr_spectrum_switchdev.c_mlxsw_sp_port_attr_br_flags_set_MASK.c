
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {int flags; TYPE_1__* bridge_device; } ;
typedef int brport_flags ;
struct TYPE_4__ {int bridge; } ;
struct TYPE_3__ {scalar_t__ multicast_enabled; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long*,int) ;
 struct mlxsw_sp_bridge_port* FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,int ,unsigned long) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,unsigned long) ;
 scalar_t__ FUNC_4 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_port *VAR_5,
        struct switchdev_trans *VAR_6,
        struct net_device *VAR_7,
        unsigned long VAR_8)
{
 struct mlxsw_sp_bridge_port *VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_6))
  return 0;

 VAR_9 = FUNC_1(VAR_5->mlxsw_sp->bridge,
      VAR_7);
 if (!VAR_9)
  return 0;

 VAR_10 = FUNC_2(VAR_5, VAR_9,
         VAR_4,
         VAR_8 & VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_9,
      VAR_8 & VAR_1);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->bridge_device->multicast_enabled)
  goto out;

 VAR_10 = FUNC_2(VAR_5, VAR_9,
         VAR_3,
         VAR_8 &
         VAR_2);
 if (VAR_10)
  return VAR_10;

out:
 FUNC_0(&VAR_9->flags, &VAR_8, sizeof(VAR_8));
 return 0;
}
