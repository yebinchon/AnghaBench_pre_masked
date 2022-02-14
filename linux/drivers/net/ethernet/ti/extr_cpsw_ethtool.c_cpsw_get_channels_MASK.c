
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {int max_rx; int max_tx; scalar_t__ combined_count; int tx_count; int rx_count; scalar_t__ other_count; scalar_t__ max_other; scalar_t__ max_combined; } ;
struct cpsw_common {int tx_ch_num; int rx_ch_num; scalar_t__ quirk_irq; } ;


 int VAR_0 ;
 struct cpsw_common* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_1, struct ethtool_channels *VAR_2)
{
 struct cpsw_common *VAR_3 = FUNC_0(VAR_1);

 VAR_2->max_rx = VAR_3->quirk_irq ? 1 : VAR_0;
 VAR_2->max_tx = VAR_3->quirk_irq ? 1 : VAR_0;
 VAR_2->max_combined = 0;
 VAR_2->max_other = 0;
 VAR_2->other_count = 0;
 VAR_2->rx_count = VAR_3->rx_ch_num;
 VAR_2->tx_count = VAR_3->tx_ch_num;
 VAR_2->combined_count = 0;
}
