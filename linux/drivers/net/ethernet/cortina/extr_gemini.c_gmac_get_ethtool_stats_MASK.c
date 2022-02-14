
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {int tx_hw_csummed; int tx_frags_linearized; scalar_t__* tx_frag_stats; int tx_stats_syncp; int rx_napi_exits; int * rx_csum_stats; int * rx_stats; int rx_stats_syncp; int * hw_stats; int ir_stats_syncp; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct gemini_ethernet_port* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4,
       struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct gemini_ethernet_port *VAR_7 = FUNC_1(VAR_4);
 unsigned int VAR_8;
 u64 *VAR_9;
 int VAR_10;

 FUNC_0(VAR_4);


 do {
  VAR_9 = VAR_6;
  VAR_8 = FUNC_2(&VAR_7->ir_stats_syncp);

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
   *VAR_9++ = VAR_7->hw_stats[VAR_10];

 } while (FUNC_3(&VAR_7->ir_stats_syncp, VAR_8));
 VAR_6 = VAR_9;


 do {
  VAR_9 = VAR_6;
  VAR_8 = FUNC_2(&VAR_7->rx_stats_syncp);

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
   *VAR_9++ = VAR_7->rx_stats[VAR_10];
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   *VAR_9++ = VAR_7->rx_csum_stats[VAR_10];
  *VAR_9++ = VAR_7->rx_napi_exits;

 } while (FUNC_3(&VAR_7->rx_stats_syncp, VAR_8));
 VAR_6 = VAR_9;


 do {
  VAR_9 = VAR_6;
  VAR_8 = FUNC_2(&VAR_7->tx_stats_syncp);

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   *VAR_6++ = VAR_7->tx_frag_stats[VAR_10];
   VAR_7->tx_frag_stats[VAR_10] = 0;
  }
  *VAR_6++ = VAR_7->tx_frags_linearized;
  *VAR_6++ = VAR_7->tx_hw_csummed;

 } while (FUNC_3(&VAR_7->tx_stats_syncp, VAR_8));
}
