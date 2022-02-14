
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_m_port {struct mlxsw_m* mlxsw_m; } ;
struct mlxsw_m {TYPE_2__* bus_info; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int driver; } ;
struct TYPE_3__ {int major; int minor; int subminor; } ;
struct TYPE_4__ {int device_name; TYPE_1__ fw_rev; int device_kind; } ;


 struct mlxsw_m_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
           struct ethtool_drvinfo *VAR_1)
{
 struct mlxsw_m_port *VAR_2 = FUNC_0(VAR_0);
 struct mlxsw_m *VAR_3 = VAR_2->mlxsw_m;

 FUNC_2(VAR_1->driver, VAR_3->bus_info->device_kind,
  sizeof(VAR_1->driver));
 FUNC_1(VAR_1->fw_version, sizeof(VAR_1->fw_version),
   "%d.%d.%d",
   VAR_3->bus_info->fw_rev.major,
   VAR_3->bus_info->fw_rev.minor,
   VAR_3->bus_info->fw_rev.subminor);
 FUNC_2(VAR_1->bus_info, VAR_3->bus_info->device_name,
  sizeof(VAR_1->bus_info));
}
