
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int rx_length_errors; int rx_crc_errors; int rx_dropped; int rx_errors; int tx_dropped; int tx_errors; int multicast; int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct i40e_vsi {int num_queue_pairs; int * tx_rings; int state; } ;
struct TYPE_2__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct i40e_ring {TYPE_1__ stats; int syncp; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 struct i40e_ring* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_ring*,struct rtnl_link_stats64*) ;
 struct rtnl_link_stats64* FUNC_3 (struct i40e_vsi*) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_1,
      struct rtnl_link_stats64 *VAR_2)
{
 struct i40e_netdev_priv *VAR_3 = FUNC_4(VAR_1);
 struct i40e_vsi *VAR_4 = VAR_3->vsi;
 struct rtnl_link_stats64 *VAR_5 = FUNC_3(VAR_4);
 struct i40e_ring *VAR_6;
 int VAR_7;

 if (FUNC_7(VAR_0, VAR_4->state))
  return;

 if (!VAR_4->tx_rings)
  return;

 FUNC_5();
 for (VAR_7 = 0; VAR_7 < VAR_4->num_queue_pairs; VAR_7++) {
  u64 VAR_8, VAR_9;
  unsigned int VAR_10;

  VAR_6 = FUNC_0(VAR_4->tx_rings[VAR_7]);
  if (!VAR_6)
   continue;
  FUNC_2(VAR_6, VAR_2);

  if (FUNC_1(VAR_4)) {
   VAR_6++;
   FUNC_2(VAR_6, VAR_2);
  }

  VAR_6++;
  do {
   VAR_10 = FUNC_8(&VAR_6->syncp);
   VAR_9 = VAR_6->stats.packets;
   VAR_8 = VAR_6->stats.bytes;
  } while (FUNC_9(&VAR_6->syncp, VAR_10));

  VAR_2->rx_packets += VAR_9;
  VAR_2->rx_bytes += VAR_8;

 }
 FUNC_6();


 VAR_2->multicast = VAR_5->multicast;
 VAR_2->tx_errors = VAR_5->tx_errors;
 VAR_2->tx_dropped = VAR_5->tx_dropped;
 VAR_2->rx_errors = VAR_5->rx_errors;
 VAR_2->rx_dropped = VAR_5->rx_dropped;
 VAR_2->rx_crc_errors = VAR_5->rx_crc_errors;
 VAR_2->rx_length_errors = VAR_5->rx_length_errors;
}
