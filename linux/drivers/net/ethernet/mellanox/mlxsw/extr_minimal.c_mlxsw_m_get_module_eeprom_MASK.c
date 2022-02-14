
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlxsw_m_port {int module; TYPE_1__* mlxsw_m; } ;
struct mlxsw_core {int dummy; } ;
struct ethtool_eeprom {int dummy; } ;
struct TYPE_2__ {struct mlxsw_core* core; } ;


 int FUNC_0 (struct net_device*,struct mlxsw_core*,int ,struct ethtool_eeprom*,int *) ;
 struct mlxsw_m_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, struct ethtool_eeprom *VAR_1,
     u8 *VAR_2)
{
 struct mlxsw_m_port *VAR_3 = FUNC_1(VAR_0);
 struct mlxsw_core *VAR_4 = VAR_3->mlxsw_m->core;

 return FUNC_0(VAR_0, VAR_4, VAR_3->module,
        VAR_1, VAR_2);
}
