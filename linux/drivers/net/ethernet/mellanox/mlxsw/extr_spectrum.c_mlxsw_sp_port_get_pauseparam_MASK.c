
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_pause; int rx_pause; } ;
struct mlxsw_sp_port {TYPE_1__ link; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; } ;


 struct mlxsw_sp_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
      struct ethtool_pauseparam *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_pause = VAR_2->link.rx_pause;
 VAR_1->tx_pause = VAR_2->link.tx_pause;
}
