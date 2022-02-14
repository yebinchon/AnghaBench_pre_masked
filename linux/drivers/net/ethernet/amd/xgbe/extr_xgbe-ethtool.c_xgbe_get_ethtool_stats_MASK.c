
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {int * rxq_bytes; int * rxq_packets; int * txq_bytes; int * txq_packets; } ;
struct TYPE_4__ {int (* read_mmc_stats ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int tx_ring_count; int rx_ring_count; TYPE_2__ ext_stats; TYPE_1__ hw_if; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_6__ {int stat_offset; } ;


 int VAR_0 ;
 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
       struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = FUNC_0(VAR_2);
 u8 *VAR_6;
 int VAR_7;

 VAR_5->hw_if.read_mmc_stats(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = (u8 *)VAR_5 + VAR_1[VAR_7].stat_offset;
  *VAR_4++ = *(u64 *)VAR_6;
 }
 for (VAR_7 = 0; VAR_7 < VAR_5->tx_ring_count; VAR_7++) {
  *VAR_4++ = VAR_5->ext_stats.txq_packets[VAR_7];
  *VAR_4++ = VAR_5->ext_stats.txq_bytes[VAR_7];
 }
 for (VAR_7 = 0; VAR_7 < VAR_5->rx_ring_count; VAR_7++) {
  *VAR_4++ = VAR_5->ext_stats.rxq_packets[VAR_7];
  *VAR_4++ = VAR_5->ext_stats.rxq_bytes[VAR_7];
 }
}
