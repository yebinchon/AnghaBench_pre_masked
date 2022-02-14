
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtnl_link_stats64 {scalar_t__ tx_aborted_errors; scalar_t__ collisions; scalar_t__ tx_errors; int multicast; int rx_missed_errors; int rx_fifo_errors; int rx_crc_errors; int rx_errors; int rx_length_errors; int tx_dropped; int rx_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_8__ {int tx_aborted; int tx_multi_collision; int tx_errors; } ;
struct TYPE_6__ {int bytes; int packets; int syncp; } ;
struct TYPE_5__ {int bytes; int packets; int syncp; } ;
struct rtl8169_private {TYPE_4__ tc_offset; TYPE_2__ tx_stats; TYPE_1__ rx_stats; struct rtl8169_counters* counters; struct pci_dev* pci_dev; } ;
struct rtl8169_counters {int tx_aborted; int tx_multi_collision; int tx_errors; } ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {int multicast; int rx_missed_errors; int rx_fifo_errors; int rx_crc_errors; int rx_errors; int rx_length_errors; int tx_dropped; int rx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct rtl8169_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct rtl8169_private*) ;
 unsigned int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_12(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct rtl8169_private *VAR_2 = FUNC_3(VAR_0);
 struct pci_dev *VAR_3 = VAR_2->pci_dev;
 struct rtl8169_counters *VAR_4 = VAR_2->counters;
 unsigned int VAR_5;

 FUNC_6(&VAR_3->dev);

 if (FUNC_4(VAR_0) && FUNC_5(&VAR_3->dev))
  FUNC_8(VAR_0);

 do {
  VAR_5 = FUNC_10(&VAR_2->rx_stats.syncp);
  VAR_1->rx_packets = VAR_2->rx_stats.packets;
  VAR_1->rx_bytes = VAR_2->rx_stats.bytes;
 } while (FUNC_11(&VAR_2->rx_stats.syncp, VAR_5));

 do {
  VAR_5 = FUNC_10(&VAR_2->tx_stats.syncp);
  VAR_1->tx_packets = VAR_2->tx_stats.packets;
  VAR_1->tx_bytes = VAR_2->tx_stats.bytes;
 } while (FUNC_11(&VAR_2->tx_stats.syncp, VAR_5));

 VAR_1->rx_dropped = VAR_0->stats.rx_dropped;
 VAR_1->tx_dropped = VAR_0->stats.tx_dropped;
 VAR_1->rx_length_errors = VAR_0->stats.rx_length_errors;
 VAR_1->rx_errors = VAR_0->stats.rx_errors;
 VAR_1->rx_crc_errors = VAR_0->stats.rx_crc_errors;
 VAR_1->rx_fifo_errors = VAR_0->stats.rx_fifo_errors;
 VAR_1->rx_missed_errors = VAR_0->stats.rx_missed_errors;
 VAR_1->multicast = VAR_0->stats.multicast;





 if (FUNC_5(&VAR_3->dev))
  FUNC_9(VAR_2);





 VAR_1->tx_errors = FUNC_2(VAR_4->tx_errors) -
  FUNC_2(VAR_2->tc_offset.tx_errors);
 VAR_1->collisions = FUNC_1(VAR_4->tx_multi_collision) -
  FUNC_1(VAR_2->tc_offset.tx_multi_collision);
 VAR_1->tx_aborted_errors = FUNC_0(VAR_4->tx_aborted) -
  FUNC_0(VAR_2->tc_offset.tx_aborted);

 FUNC_7(&VAR_3->dev);
}
