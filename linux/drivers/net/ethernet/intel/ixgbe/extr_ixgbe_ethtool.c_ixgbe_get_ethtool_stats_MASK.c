
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int num_tx_queues; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct ixgbe_ring {TYPE_1__ stats; int syncp; } ;
struct TYPE_5__ {scalar_t__* pxoffrxc; scalar_t__* pxonrxc; scalar_t__* pxofftxc; scalar_t__* pxontxc; } ;
struct ixgbe_adapter {TYPE_2__ stats; struct ixgbe_ring** rx_ring; struct ixgbe_ring** tx_ring; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_6__ {int type; int sizeof_stat; int stat_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct rtnl_link_stats64* FUNC_0 (struct net_device*,struct rtnl_link_stats64*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4,
        struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_2(VAR_4);
 struct rtnl_link_stats64 VAR_8;
 const struct rtnl_link_stats64 *VAR_9;
 unsigned int VAR_10;
 struct ixgbe_ring *VAR_11;
 int VAR_12, VAR_13;
 char *VAR_14 = ((void*)0);

 FUNC_1(VAR_7);
 VAR_9 = FUNC_0(VAR_4, &VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  switch (VAR_3[VAR_12].type) {
  case 128:
   VAR_14 = (char *) VAR_9 +
     VAR_3[VAR_12].stat_offset;
   break;
  case 129:
   VAR_14 = (char *) VAR_7 +
     VAR_3[VAR_12].stat_offset;
   break;
  default:
   VAR_6[VAR_12] = 0;
   continue;
  }

  VAR_6[VAR_12] = (VAR_3[VAR_12].sizeof_stat ==
      sizeof(u64)) ? *(u64 *)VAR_14 : *(u32 *)VAR_14;
 }
 for (VAR_13 = 0; VAR_13 < VAR_4->num_tx_queues; VAR_13++) {
  VAR_11 = VAR_7->tx_ring[VAR_13];
  if (!VAR_11) {
   VAR_6[VAR_12] = 0;
   VAR_6[VAR_12+1] = 0;
   VAR_12 += 2;
   continue;
  }

  do {
   VAR_10 = FUNC_3(&VAR_11->syncp);
   VAR_6[VAR_12] = VAR_11->stats.packets;
   VAR_6[VAR_12+1] = VAR_11->stats.bytes;
  } while (FUNC_4(&VAR_11->syncp, VAR_10));
  VAR_12 += 2;
 }
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_11 = VAR_7->rx_ring[VAR_13];
  if (!VAR_11) {
   VAR_6[VAR_12] = 0;
   VAR_6[VAR_12+1] = 0;
   VAR_12 += 2;
   continue;
  }

  do {
   VAR_10 = FUNC_3(&VAR_11->syncp);
   VAR_6[VAR_12] = VAR_11->stats.packets;
   VAR_6[VAR_12+1] = VAR_11->stats.bytes;
  } while (FUNC_4(&VAR_11->syncp, VAR_10));
  VAR_12 += 2;
 }

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_6[VAR_12++] = VAR_7->stats.pxontxc[VAR_13];
  VAR_6[VAR_12++] = VAR_7->stats.pxofftxc[VAR_13];
 }
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_6[VAR_12++] = VAR_7->stats.pxonrxc[VAR_13];
  VAR_6[VAR_12++] = VAR_7->stats.pxoffrxc[VAR_13];
 }
}
