
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tx_ring_info {int tx_errors; int tx_bytes; int tx_packets; int tx_channel; } ;
struct rx_ring_info {int rx_errors; int rx_dropped; int rx_bytes; int rx_packets; int rx_channel; } ;
struct niu_xmac_stats {int dummy; } ;
struct niu_bmac_stats {int dummy; } ;
struct TYPE_2__ {int bmac; int xmac; } ;
struct niu {int flags; int num_rx_rings; int num_tx_rings; struct tx_ring_info* tx_rings; struct rx_ring_info* rx_rings; TYPE_1__ mac_stats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 struct niu* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*,struct rx_ring_info*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
      struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct niu *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 FUNC_2(VAR_4);
 if (VAR_4->flags & VAR_0) {
  FUNC_0(VAR_3, &VAR_4->mac_stats.xmac,
         sizeof(struct niu_xmac_stats));
  VAR_3 += (sizeof(struct niu_xmac_stats) / sizeof(u64));
 } else {
  FUNC_0(VAR_3, &VAR_4->mac_stats.bmac,
         sizeof(struct niu_bmac_stats));
  VAR_3 += (sizeof(struct niu_bmac_stats) / sizeof(u64));
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->num_rx_rings; VAR_5++) {
  struct rx_ring_info *VAR_6 = &VAR_4->rx_rings[VAR_5];

  FUNC_3(VAR_4, VAR_6, 0);

  VAR_3[0] = VAR_6->rx_channel;
  VAR_3[1] = VAR_6->rx_packets;
  VAR_3[2] = VAR_6->rx_bytes;
  VAR_3[3] = VAR_6->rx_dropped;
  VAR_3[4] = VAR_6->rx_errors;
  VAR_3 += 5;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->num_tx_rings; VAR_5++) {
  struct tx_ring_info *VAR_7 = &VAR_4->tx_rings[VAR_5];

  VAR_3[0] = VAR_7->tx_channel;
  VAR_3[1] = VAR_7->tx_packets;
  VAR_3[2] = VAR_7->tx_bytes;
  VAR_3[3] = VAR_7->tx_errors;
  VAR_3 += 4;
 }
}
