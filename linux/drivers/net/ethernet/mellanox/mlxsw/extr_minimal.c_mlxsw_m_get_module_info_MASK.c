
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_m_port {int module; TYPE_1__* mlxsw_m; } ;
struct mlxsw_core {int dummy; } ;
struct ethtool_modinfo {int dummy; } ;
struct TYPE_2__ {struct mlxsw_core* core; } ;


 int FUNC_0 (struct mlxsw_core*,int ,struct ethtool_modinfo*) ;
 struct mlxsw_m_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
       struct ethtool_modinfo *VAR_1)
{
 struct mlxsw_m_port *VAR_2 = FUNC_1(VAR_0);
 struct mlxsw_core *VAR_3 = VAR_2->mlxsw_m->core;

 return FUNC_0(VAR_3, VAR_2->module, VAR_1);
}
