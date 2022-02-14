
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* ptp_ops; } ;
struct ethtool_ts_info {int dummy; } ;
struct TYPE_2__ {int (* get_ts_info ) (struct mlxsw_sp*,struct ethtool_ts_info*) ;} ;


 struct mlxsw_sp_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp*,struct ethtool_ts_info*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, struct ethtool_ts_info *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_0(VAR_0);
 struct mlxsw_sp *VAR_3 = VAR_2->mlxsw_sp;

 return VAR_3->ptp_ops->get_ts_info(VAR_3, VAR_1);
}
