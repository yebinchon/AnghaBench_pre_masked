
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pause; } ;
struct phylink {TYPE_1__ link_config; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct phylink *VAR_3,
        struct ethtool_pauseparam *VAR_4)
{
 FUNC_0();

 VAR_4->autoneg = !!(VAR_3->link_config.pause & VAR_0);
 VAR_4->rx_pause = !!(VAR_3->link_config.pause & VAR_1);
 VAR_4->tx_pause = !!(VAR_3->link_config.pause & VAR_2);
}
