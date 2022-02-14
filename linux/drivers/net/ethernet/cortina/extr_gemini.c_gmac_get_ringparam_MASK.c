
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union gmac_config0 {int bits32; } ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {int rxq_order; int txq_order; scalar_t__ gmac_base; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; int rx_pending; int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; } ;


 scalar_t__ VAR_0 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
          struct ethtool_ringparam *VAR_2)
{
 struct gemini_ethernet_port *VAR_3 = FUNC_0(VAR_1);
 union gmac_config0 VAR_4;

 VAR_4 = FUNC_1(VAR_3->gmac_base + VAR_0);

 VAR_2->rx_max_pending = 1 << 15;
 VAR_2->rx_mini_max_pending = 0;
 VAR_2->rx_jumbo_max_pending = 0;
 VAR_2->tx_max_pending = 1 << 15;

 VAR_2->rx_pending = 1 << VAR_3->rxq_order;
 VAR_2->rx_mini_pending = 0;
 VAR_2->rx_jumbo_pending = 0;
 VAR_2->tx_pending = 1 << VAR_3->txq_order;
}
