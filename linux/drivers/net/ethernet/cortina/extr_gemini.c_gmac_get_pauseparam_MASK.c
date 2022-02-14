
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_fc_en; int rx_fc_en; } ;
union gmac_config0 {TYPE_1__ bits; int bits32; } ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {scalar_t__ gmac_base; } ;
struct ethtool_pauseparam {int autoneg; int tx_pause; int rx_pause; } ;


 scalar_t__ VAR_0 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
    struct ethtool_pauseparam *VAR_2)
{
 struct gemini_ethernet_port *VAR_3 = FUNC_0(VAR_1);
 union gmac_config0 VAR_4;

 VAR_4 = FUNC_1(VAR_3->gmac_base + VAR_0);

 VAR_2->rx_pause = VAR_4;
 VAR_2->tx_pause = VAR_4;
 VAR_2->autoneg = 1;
}
