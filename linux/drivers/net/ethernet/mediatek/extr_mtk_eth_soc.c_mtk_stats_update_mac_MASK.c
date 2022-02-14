
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mtk_mac {int hw; struct mtk_hw_stats* hw_stats; } ;
struct mtk_hw_stats {int rx_bytes; int rx_packets; int rx_overflow; int rx_fcs_errors; int rx_short_errors; int rx_long_errors; int rx_checksum_errors; int rx_flow_control_packets; int tx_skip; int tx_collisions; int tx_bytes; int tx_packets; int syncp; scalar_t__ reg_offset; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mtk_mac *VAR_1)
{
 struct mtk_hw_stats *VAR_2 = VAR_1->hw_stats;
 unsigned int VAR_3 = VAR_0;
 u64 VAR_4;

 VAR_3 += VAR_2->reg_offset;

 FUNC_1(&VAR_2->syncp);

 VAR_2->rx_bytes += FUNC_0(VAR_1->hw, VAR_3);
 VAR_4 = FUNC_0(VAR_1->hw, VAR_3 + 0x04);
 if (VAR_4)
  VAR_2->rx_bytes += (VAR_4 << 32);
 VAR_2->rx_packets += FUNC_0(VAR_1->hw, VAR_3 + 0x08);
 VAR_2->rx_overflow += FUNC_0(VAR_1->hw, VAR_3 + 0x10);
 VAR_2->rx_fcs_errors += FUNC_0(VAR_1->hw, VAR_3 + 0x14);
 VAR_2->rx_short_errors += FUNC_0(VAR_1->hw, VAR_3 + 0x18);
 VAR_2->rx_long_errors += FUNC_0(VAR_1->hw, VAR_3 + 0x1c);
 VAR_2->rx_checksum_errors += FUNC_0(VAR_1->hw, VAR_3 + 0x20);
 VAR_2->rx_flow_control_packets +=
     FUNC_0(VAR_1->hw, VAR_3 + 0x24);
 VAR_2->tx_skip += FUNC_0(VAR_1->hw, VAR_3 + 0x28);
 VAR_2->tx_collisions += FUNC_0(VAR_1->hw, VAR_3 + 0x2c);
 VAR_2->tx_bytes += FUNC_0(VAR_1->hw, VAR_3 + 0x30);
 VAR_4 = FUNC_0(VAR_1->hw, VAR_3 + 0x34);
 if (VAR_4)
  VAR_2->tx_bytes += (VAR_4 << 32);
 VAR_2->tx_packets += FUNC_0(VAR_1->hw, VAR_3 + 0x38);
 FUNC_2(&VAR_2->syncp);
}
