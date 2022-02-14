
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sx_port {struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {TYPE_2__* bus_info; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_3__ {int major; int minor; int subminor; } ;
struct TYPE_4__ {int device_name; TYPE_1__ fw_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sx_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
          struct ethtool_drvinfo *VAR_3)
{
 struct mlxsw_sx_port *VAR_4 = FUNC_0(VAR_2);
 struct mlxsw_sx *VAR_5 = VAR_4->mlxsw_sx;

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));
 FUNC_1(VAR_3->fw_version, sizeof(VAR_3->fw_version),
   "%d.%d.%d",
   VAR_5->bus_info->fw_rev.major,
   VAR_5->bus_info->fw_rev.minor,
   VAR_5->bus_info->fw_rev.subminor);
 FUNC_2(VAR_3->bus_info, VAR_5->bus_info->device_name,
  sizeof(VAR_3->bus_info));
}
