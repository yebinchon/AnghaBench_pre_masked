
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int module; } ;
struct mlxsw_sp_port {TYPE_1__ mapping; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct ethtool_eeprom {int dummy; } ;


 int FUNC_0 (struct net_device*,int ,int ,struct ethtool_eeprom*,int *) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
          struct ethtool_eeprom *VAR_1,
          u8 *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_1(VAR_0);
 struct mlxsw_sp *VAR_4 = VAR_3->mlxsw_sp;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_4->core,
       VAR_3->mapping.module, VAR_1,
       VAR_2);

 return VAR_5;
}
