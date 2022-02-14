
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwl8k_rxd_sta {int rx_ctrl; int channel; int pkt_len; int qos_control; int noise_level; int rssi; int rate_info; } ;
struct ieee80211_rx_status {scalar_t__ encoding; int flag; int band; int freq; scalar_t__ rate_idx; int enc_flags; int bw; int antenna; int signal; } ;
typedef int s8 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void *VAR_15, struct ieee80211_rx_status *VAR_16,
         __le16 *VAR_17, s8 *VAR_18)
{
 struct mwl8k_rxd_sta *VAR_19 = VAR_15;
 u16 VAR_20;

 if (!(VAR_19->rx_ctrl & VAR_7))
  return -1;
 FUNC_5();

 VAR_20 = FUNC_3(VAR_19->rate_info);

 FUNC_4(VAR_16, 0, sizeof(*VAR_16));

 VAR_16->signal = -VAR_19->rssi;
 *VAR_18 = -VAR_19->noise_level;
 VAR_16->antenna = FUNC_0(VAR_20);
 VAR_16->rate_idx = FUNC_1(VAR_20);

 if (VAR_20 & VAR_4)
  VAR_16->enc_flags |= VAR_11;
 if (VAR_20 & VAR_1)
  VAR_16->bw = VAR_10;
 if (VAR_20 & VAR_3)
  VAR_16->enc_flags |= VAR_12;
 if (VAR_20 & VAR_2)
  VAR_16->encoding = VAR_13;

 if (VAR_19->channel > 14) {
  VAR_16->band = VAR_9;
  if (!(VAR_16->encoding == VAR_13) &&
      VAR_16->rate_idx >= VAR_0)
   VAR_16->rate_idx -= VAR_0;
 } else {
  VAR_16->band = VAR_8;
 }
 VAR_16->freq = FUNC_2(VAR_19->channel,
            VAR_16->band);

 *VAR_17 = VAR_19->qos_control;
 if ((VAR_19->rx_ctrl & VAR_5) &&
     (VAR_19->rx_ctrl & VAR_6))
  VAR_16->flag |= VAR_14;

 return FUNC_3(VAR_19->pkt_len);
}
