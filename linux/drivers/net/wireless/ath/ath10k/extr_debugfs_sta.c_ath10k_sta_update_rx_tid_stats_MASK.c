
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;
struct ath10k_sta_tid_stats {unsigned long rx_pkt_from_fw; unsigned long rx_pkt_unchained; unsigned long rx_pkt_drop_chained; unsigned long rx_pkt_drop_filter; unsigned long* rx_pkt_err; unsigned long rx_pkt_queued_for_mac; } ;
struct ath10k_sta {struct ath10k_sta_tid_stats* tid_stats; } ;
struct ath10k {int sta_tid_stats_mask; int data_lock; int hw; } ;
typedef enum ath10k_pkt_rx_err { ____Placeholder_ath10k_pkt_rx_err } ath10k_pkt_rx_err ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct ath10k*,struct ath10k_sta_tid_stats*,unsigned long) ;
 struct ieee80211_sta* FUNC_2 (int ,int ,int *) ;
 size_t* FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct ath10k *VAR_3, u8 *VAR_4,
        unsigned long VAR_5,
        enum ath10k_pkt_rx_err VAR_6,
        unsigned long VAR_7,
        unsigned long VAR_8,
        unsigned long VAR_9,
        unsigned long VAR_10)
{
 struct ieee80211_sta *VAR_11;
 struct ath10k_sta *VAR_12;
 struct ieee80211_hdr *VAR_13;
 struct ath10k_sta_tid_stats *VAR_14;
 u8 VAR_15 = VAR_1;
 bool VAR_16 = 0;

 VAR_13 = (struct ieee80211_hdr *)VAR_4;
 if (!FUNC_4(VAR_13->frame_control))
  VAR_16 = 1;

 if (FUNC_5(VAR_13->frame_control))
  VAR_15 = *FUNC_3(VAR_13) & VAR_2;

 if (!(VAR_3->sta_tid_stats_mask & FUNC_0(VAR_15)) || VAR_16)
  return;

 FUNC_6();

 VAR_11 = FUNC_2(VAR_3->hw, VAR_13->addr2, ((void*)0));
 if (!VAR_11)
  goto exit;

 VAR_12 = (struct ath10k_sta *)VAR_11->drv_priv;

 FUNC_8(&VAR_3->data_lock);
 VAR_14 = &VAR_12->tid_stats[VAR_15];
 VAR_14->rx_pkt_from_fw += VAR_5;
 VAR_14->rx_pkt_unchained += VAR_7;
 VAR_14->rx_pkt_drop_chained += VAR_8;
 VAR_14->rx_pkt_drop_filter += VAR_9;
 if (VAR_6 != VAR_0)
  VAR_14->rx_pkt_err[VAR_6] += VAR_10;
 VAR_14->rx_pkt_queued_for_mac += VAR_10;
 FUNC_1(VAR_3, &VAR_12->tid_stats[VAR_15],
         VAR_5);
 FUNC_9(&VAR_3->data_lock);

exit:
 FUNC_7();
}
