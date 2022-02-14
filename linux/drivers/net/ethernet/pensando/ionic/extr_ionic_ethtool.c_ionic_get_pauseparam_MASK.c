
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ionic_lif {TYPE_4__* ionic; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; scalar_t__ autoneg; } ;
struct TYPE_7__ {TYPE_2__* port_info; } ;
struct TYPE_8__ {TYPE_3__ idev; } ;
struct TYPE_5__ {int pause_type; } ;
struct TYPE_6__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ionic_lif* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
     struct ethtool_pauseparam *VAR_3)
{
 struct ionic_lif *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;

 VAR_3->autoneg = 0;

 VAR_5 = VAR_4->ionic->idev.port_info->config.pause_type;
 if (VAR_5) {
  VAR_3->rx_pause = VAR_5 & VAR_0 ? 1 : 0;
  VAR_3->tx_pause = VAR_5 & VAR_1 ? 1 : 0;
 }
}
