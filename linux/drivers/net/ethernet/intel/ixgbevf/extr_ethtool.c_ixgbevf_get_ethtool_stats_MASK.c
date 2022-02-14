
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct ixgbevf_ring {TYPE_1__ stats; int syncp; } ;
struct ixgbevf_adapter {int num_tx_queues; int num_xdp_queues; int num_rx_queues; struct ixgbevf_ring** rx_ring; struct ixgbevf_ring** xdp_ring; struct ixgbevf_ring** tx_ring; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {int type; int sizeof_stat; int stat_offset; } ;


 int VAR_0 ;


 struct rtnl_link_stats64* FUNC_0 (struct net_device*,struct rtnl_link_stats64*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
          struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct ixgbevf_adapter *VAR_5 = FUNC_2(VAR_2);
 struct rtnl_link_stats64 VAR_6;
 const struct rtnl_link_stats64 *VAR_7;
 unsigned int VAR_8;
 struct ixgbevf_ring *VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12;

 FUNC_1(VAR_5);
 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  switch (VAR_1[VAR_10].type) {
  case 128:
   VAR_12 = (char *)VAR_7 +
     VAR_1[VAR_10].stat_offset;
   break;
  case 129:
   VAR_12 = (char *)VAR_5 +
     VAR_1[VAR_10].stat_offset;
   break;
  default:
   VAR_4[VAR_10] = 0;
   continue;
  }

  VAR_4[VAR_10] = (VAR_1[VAR_10].sizeof_stat ==
      sizeof(u64)) ? *(u64 *)VAR_12 : *(u32 *)VAR_12;
 }


 for (VAR_11 = 0; VAR_11 < VAR_5->num_tx_queues; VAR_11++) {
  VAR_9 = VAR_5->tx_ring[VAR_11];
  if (!VAR_9) {
   VAR_4[VAR_10++] = 0;
   VAR_4[VAR_10++] = 0;
   continue;
  }

  do {
   VAR_8 = FUNC_3(&VAR_9->syncp);
   VAR_4[VAR_10] = VAR_9->stats.packets;
   VAR_4[VAR_10 + 1] = VAR_9->stats.bytes;
  } while (FUNC_4(&VAR_9->syncp, VAR_8));
  VAR_10 += 2;
 }


 for (VAR_11 = 0; VAR_11 < VAR_5->num_xdp_queues; VAR_11++) {
  VAR_9 = VAR_5->xdp_ring[VAR_11];
  if (!VAR_9) {
   VAR_4[VAR_10++] = 0;
   VAR_4[VAR_10++] = 0;
   continue;
  }

  do {
   VAR_8 = FUNC_3(&VAR_9->syncp);
   VAR_4[VAR_10] = VAR_9->stats.packets;
   VAR_4[VAR_10 + 1] = VAR_9->stats.bytes;
  } while (FUNC_4(&VAR_9->syncp, VAR_8));
  VAR_10 += 2;
 }


 for (VAR_11 = 0; VAR_11 < VAR_5->num_rx_queues; VAR_11++) {
  VAR_9 = VAR_5->rx_ring[VAR_11];
  if (!VAR_9) {
   VAR_4[VAR_10++] = 0;
   VAR_4[VAR_10++] = 0;
   continue;
  }

  do {
   VAR_8 = FUNC_3(&VAR_9->syncp);
   VAR_4[VAR_10] = VAR_9->stats.packets;
   VAR_4[VAR_10 + 1] = VAR_9->stats.bytes;
  } while (FUNC_4(&VAR_9->syncp, VAR_8));
  VAR_10 += 2;
 }
}
