
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct nic {unsigned long tx_deferred; unsigned long tx_single_collisions; unsigned long tx_multiple_collisions; unsigned long tx_fc_pause; unsigned long rx_fc_pause; unsigned long rx_fc_unsupported; unsigned long tx_tco_frames; unsigned long rx_tco_frames; unsigned long rx_short_frame_errors; unsigned long rx_over_length_errors; } ;
struct net_device {int stats; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 struct nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
 struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct nic *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = ((unsigned long *)&VAR_1->stats)[VAR_5];

 VAR_3[VAR_5++] = VAR_4->tx_deferred;
 VAR_3[VAR_5++] = VAR_4->tx_single_collisions;
 VAR_3[VAR_5++] = VAR_4->tx_multiple_collisions;
 VAR_3[VAR_5++] = VAR_4->tx_fc_pause;
 VAR_3[VAR_5++] = VAR_4->rx_fc_pause;
 VAR_3[VAR_5++] = VAR_4->rx_fc_unsupported;
 VAR_3[VAR_5++] = VAR_4->tx_tco_frames;
 VAR_3[VAR_5++] = VAR_4->rx_tco_frames;
 VAR_3[VAR_5++] = VAR_4->rx_short_frame_errors;
 VAR_3[VAR_5++] = VAR_4->rx_over_length_errors;
}
