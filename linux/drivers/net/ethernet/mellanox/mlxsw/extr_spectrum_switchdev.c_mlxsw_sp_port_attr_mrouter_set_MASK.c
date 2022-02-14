
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {TYPE_1__* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {int mrouter; TYPE_2__* bridge_device; } ;
struct TYPE_4__ {int multicast_enabled; } ;
struct TYPE_3__ {int bridge; } ;


 int VAR_0 ;
 struct mlxsw_sp_bridge_port* FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,int ,int) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,int) ;
 scalar_t__ FUNC_3 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_1,
       struct switchdev_trans *VAR_2,
       struct net_device *VAR_3,
       bool VAR_4)
{
 struct mlxsw_sp_bridge_port *VAR_5;
 int VAR_6;

 if (FUNC_3(VAR_2))
  return 0;

 VAR_5 = FUNC_0(VAR_1->mlxsw_sp->bridge,
      VAR_3);
 if (!VAR_5)
  return 0;

 if (!VAR_5->bridge_device->multicast_enabled)
  goto out;

 VAR_6 = FUNC_1(VAR_1, VAR_5,
         VAR_0,
         VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_1, VAR_5,
      VAR_4);
out:
 VAR_5->mrouter = VAR_4;
 return 0;
}
