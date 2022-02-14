
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_pdev_stats_base {int chan_tx_pwr; int phy_err_count; int cycle_count; int rx_clear_count; int rx_frame_count; int tx_frame_count; int chan_nf; } ;
struct ath10k_fw_stats_pdev {void* chan_tx_power; void* phy_err_count; void* cycle_count; void* rx_clear_count; void* rx_frame_count; void* tx_frame_count; void* ch_noise_floor; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(const struct wmi_pdev_stats_base *VAR_0,
         struct ath10k_fw_stats_pdev *VAR_1)
{
 VAR_1->ch_noise_floor = FUNC_0(VAR_0->chan_nf);
 VAR_1->tx_frame_count = FUNC_0(VAR_0->tx_frame_count);
 VAR_1->rx_frame_count = FUNC_0(VAR_0->rx_frame_count);
 VAR_1->rx_clear_count = FUNC_0(VAR_0->rx_clear_count);
 VAR_1->cycle_count = FUNC_0(VAR_0->cycle_count);
 VAR_1->phy_err_count = FUNC_0(VAR_0->phy_err_count);
 VAR_1->chan_tx_power = FUNC_0(VAR_0->chan_tx_pwr);
}
