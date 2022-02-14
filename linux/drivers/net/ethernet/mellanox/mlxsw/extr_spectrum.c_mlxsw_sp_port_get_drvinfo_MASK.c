
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_2__* bus_info; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_3__ {int major; int minor; int subminor; } ;
struct TYPE_4__ {int device_name; TYPE_1__ fw_rev; int device_kind; } ;


 int VAR_0 ;
 struct mlxsw_sp_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_drvinfo *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_0(VAR_1);
 struct mlxsw_sp *VAR_4 = VAR_3->mlxsw_sp;

 FUNC_2(VAR_2->driver, VAR_4->bus_info->device_kind,
  sizeof(VAR_2->driver));
 FUNC_2(VAR_2->version, VAR_0,
  sizeof(VAR_2->version));
 FUNC_1(VAR_2->fw_version, sizeof(VAR_2->fw_version),
   "%d.%d.%d",
   VAR_4->bus_info->fw_rev.major,
   VAR_4->bus_info->fw_rev.minor,
   VAR_4->bus_info->fw_rev.subminor);
 FUNC_2(VAR_2->bus_info, VAR_4->bus_info->device_name,
  sizeof(VAR_2->bus_info));
}
