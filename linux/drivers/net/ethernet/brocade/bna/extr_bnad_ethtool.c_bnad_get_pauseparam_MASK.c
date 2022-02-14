
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;
struct TYPE_4__ {int tx_pause; int rx_pause; } ;
struct TYPE_5__ {TYPE_1__ pause_config; } ;
struct TYPE_6__ {TYPE_2__ enet; } ;
struct bnad {TYPE_3__ bna; } ;


 struct bnad* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0,
      struct ethtool_pauseparam *VAR_1)
{
 struct bnad *VAR_2 = FUNC_0(VAR_0);

 VAR_1->autoneg = 0;
 VAR_1->rx_pause = VAR_2->bna.enet.pause_config.rx_pause;
 VAR_1->tx_pause = VAR_2->bna.enet.pause_config.tx_pause;
}
