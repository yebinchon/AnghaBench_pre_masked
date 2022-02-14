
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_pdev {int phy_err_count; int cycle_count; int rx_clear_count; int rx_frame_count; int tx_frame_count; int chan_tx_power; int ch_noise_floor; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct ath10k_fw_stats_pdev *VAR_1,
       char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_0;

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "\n");
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s\n",
   "ath10k PDEV stats");
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s\n\n",
   "=================");

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10d\n",
   "Channel noise floor", VAR_1->ch_noise_floor);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "Channel TX power", VAR_1->chan_tx_power);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "TX frame count", VAR_1->tx_frame_count);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "RX frame count", VAR_1->rx_frame_count);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "RX clear count", VAR_1->rx_clear_count);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "Cycle count", VAR_1->cycle_count);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "PHY error count", VAR_1->phy_err_count);

 *VAR_3 = VAR_4;
}
