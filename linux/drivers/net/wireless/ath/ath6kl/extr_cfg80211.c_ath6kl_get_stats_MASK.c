
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct target_stats {scalar_t__ arp_replied; scalar_t__ arp_matched; scalar_t__ arp_received; scalar_t__ cs_ave_beacon_rssi; scalar_t__ cs_discon_cnt; scalar_t__ cs_connect_cnt; scalar_t__ cs_bmiss_cnt; scalar_t__ ccmp_replays; scalar_t__ ccmp_fmt_err; scalar_t__ tkip_fmt_err; scalar_t__ tkip_local_mic_fail; scalar_t__ rx_dupl_frame; scalar_t__ rx_decrypt_err; scalar_t__ rx_key_cache_miss; scalar_t__ rx_crc_err; scalar_t__ rx_err; scalar_t__ rx_frgment_pkt; scalar_t__ rx_bcast_byte; scalar_t__ rx_ucast_byte; scalar_t__ rx_bcast_pkt; scalar_t__ rx_ucast_rate; scalar_t__ rx_ucast_pkt; scalar_t__ tkip_cnter_measures_invoked; scalar_t__ tx_rts_fail_cnt; scalar_t__ tx_mult_retry_cnt; scalar_t__ tx_retry_cnt; scalar_t__ tx_fail_cnt; scalar_t__ tx_err; scalar_t__ tx_rts_success_cnt; scalar_t__ tx_bcast_byte; scalar_t__ tx_ucast_byte; scalar_t__ tx_bcast_pkt; scalar_t__ tx_ucast_pkt; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct ath6kl_vif {struct target_stats target_stats; struct ath6kl* ar; } ;
struct ath6kl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct ath6kl*,struct ath6kl_vif*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 struct ath6kl_vif* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
       struct ethtool_stats *VAR_2,
       u64 *VAR_3)
{
 struct ath6kl_vif *VAR_4 = FUNC_4(VAR_1);
 struct ath6kl *VAR_5 = VAR_4->ar;
 int VAR_6 = 0;
 struct target_stats *VAR_7;

 FUNC_3(VAR_3, 0, sizeof(u64) * VAR_0);

 FUNC_2(VAR_5, VAR_4);

 VAR_7 = &VAR_4->target_stats;

 VAR_3[VAR_6++] = VAR_7->tx_ucast_pkt + VAR_7->tx_bcast_pkt;
 VAR_3[VAR_6++] = VAR_7->tx_ucast_byte + VAR_7->tx_bcast_byte;
 VAR_3[VAR_6++] = VAR_7->rx_ucast_pkt + VAR_7->rx_bcast_pkt;
 VAR_3[VAR_6++] = VAR_7->rx_ucast_byte + VAR_7->rx_bcast_byte;

 VAR_3[VAR_6++] = VAR_7->tx_ucast_pkt;
 VAR_3[VAR_6++] = VAR_7->tx_bcast_pkt;
 VAR_3[VAR_6++] = VAR_7->tx_ucast_byte;
 VAR_3[VAR_6++] = VAR_7->tx_bcast_byte;
 VAR_3[VAR_6++] = VAR_7->tx_rts_success_cnt;
 VAR_3[VAR_6++] = VAR_7->tx_err;
 VAR_3[VAR_6++] = VAR_7->tx_fail_cnt;
 VAR_3[VAR_6++] = VAR_7->tx_retry_cnt;
 VAR_3[VAR_6++] = VAR_7->tx_mult_retry_cnt;
 VAR_3[VAR_6++] = VAR_7->tx_rts_fail_cnt;
 VAR_3[VAR_6++] = VAR_7->tkip_cnter_measures_invoked;

 VAR_3[VAR_6++] = VAR_7->rx_ucast_pkt;
 VAR_3[VAR_6++] = VAR_7->rx_ucast_rate;
 VAR_3[VAR_6++] = VAR_7->rx_bcast_pkt;
 VAR_3[VAR_6++] = VAR_7->rx_ucast_byte;
 VAR_3[VAR_6++] = VAR_7->rx_bcast_byte;
 VAR_3[VAR_6++] = VAR_7->rx_frgment_pkt;
 VAR_3[VAR_6++] = VAR_7->rx_err;
 VAR_3[VAR_6++] = VAR_7->rx_crc_err;
 VAR_3[VAR_6++] = VAR_7->rx_key_cache_miss;
 VAR_3[VAR_6++] = VAR_7->rx_decrypt_err;
 VAR_3[VAR_6++] = VAR_7->rx_dupl_frame;
 VAR_3[VAR_6++] = VAR_7->tkip_local_mic_fail;
 VAR_3[VAR_6++] = VAR_7->tkip_fmt_err;
 VAR_3[VAR_6++] = VAR_7->ccmp_fmt_err;
 VAR_3[VAR_6++] = VAR_7->ccmp_replays;

 VAR_3[VAR_6++] = VAR_7->cs_bmiss_cnt;
 VAR_3[VAR_6++] = VAR_7->cs_connect_cnt;
 VAR_3[VAR_6++] = VAR_7->cs_discon_cnt;
 VAR_3[VAR_6++] = VAR_7->cs_ave_beacon_rssi;
 VAR_3[VAR_6++] = VAR_7->arp_received;
 VAR_3[VAR_6++] = VAR_7->arp_matched;
 VAR_3[VAR_6++] = VAR_7->arp_replied;

 if (VAR_6 != VAR_0) {
  FUNC_0(1);
  FUNC_1("ethtool stats error, i: %d  STATS_LEN: %d\n",
      VAR_6, (int)VAR_0);
 }
}
