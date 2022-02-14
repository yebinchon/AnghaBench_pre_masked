
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gemini_ethernet_port {int txq_order; int irq_every_tx_packets; void* rxq_order; } ;
struct ethtool_ringparam {scalar_t__ tx_pending; scalar_t__ rx_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct gemini_ethernet_port*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int,scalar_t__) ;
 struct gemini_ethernet_port* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
         struct ethtool_ringparam *VAR_2)
{
 struct gemini_ethernet_port *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 if (FUNC_4(VAR_1))
  return -VAR_0;

 if (VAR_2->rx_pending) {
  VAR_3->rxq_order = FUNC_2(15, FUNC_1(VAR_2->rx_pending - 1) + 1);
  VAR_4 = FUNC_0(VAR_3);
 }
 if (VAR_2->tx_pending) {
  VAR_3->txq_order = FUNC_2(15, FUNC_1(VAR_2->tx_pending - 1) + 1);
  VAR_3->irq_every_tx_packets = 1 << (VAR_3->txq_order - 2);
 }

 return VAR_4;
}
