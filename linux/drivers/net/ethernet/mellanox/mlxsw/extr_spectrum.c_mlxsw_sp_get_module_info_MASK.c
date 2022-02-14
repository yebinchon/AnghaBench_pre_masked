
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int module; } ;
struct mlxsw_sp_port {TYPE_1__ mapping; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct ethtool_modinfo {int dummy; } ;


 int FUNC_0 (int ,int ,struct ethtool_modinfo*) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
        struct ethtool_modinfo *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_1(VAR_0);
 struct mlxsw_sp *VAR_3 = VAR_2->mlxsw_sp;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->core,
     VAR_2->mapping.module,
     VAR_1);

 return VAR_4;
}
