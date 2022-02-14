
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_rx_pkt_stat {scalar_t__ rate; scalar_t__ bw; int * rx_power; int signal_power; int tsf_low; scalar_t__ decrypted; scalar_t__ crc_err; } ;
struct TYPE_8__ {size_t rf_path_num; } ;
struct rtw_dev {TYPE_4__ hal; struct ieee80211_hw* hw; } ;
struct ieee80211_rx_status {int nss; int * chain_signal; int chains; int signal; int bw; int mactime; int flag; scalar_t__ rate_idx; int band; int encoding; int freq; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_7__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_5__ {int band; int center_freq; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_rx_pkt_stat*,struct ieee80211_hdr*) ;

void FUNC_3(struct rtw_dev *VAR_25,
      struct rtw_rx_pkt_stat *VAR_26,
      struct ieee80211_hdr *VAR_27,
      struct ieee80211_rx_status *VAR_28,
      u8 *VAR_29)
{
 struct ieee80211_hw *VAR_30 = VAR_25->hw;
 u8 VAR_31;

 FUNC_1(VAR_28, 0, sizeof(*VAR_28));
 VAR_28->freq = VAR_30->conf.chandef.chan->center_freq;
 VAR_28->band = VAR_30->conf.chandef.chan->band;
 if (VAR_26->crc_err)
  VAR_28->flag |= VAR_23;
 if (VAR_26->decrypted)
  VAR_28->flag |= VAR_22;

 if (VAR_26->rate >= VAR_5)
  VAR_28->encoding = VAR_21;
 else if (VAR_26->rate >= VAR_3)
  VAR_28->encoding = VAR_20;

 if (VAR_26->rate >= VAR_5 &&
     VAR_26->rate <= VAR_6) {
  VAR_28->nss = 1;
  VAR_28->rate_idx = VAR_26->rate - VAR_5;
 } else if (VAR_26->rate >= VAR_7 &&
     VAR_26->rate <= VAR_8) {
  VAR_28->nss = 2;
  VAR_28->rate_idx = VAR_26->rate - VAR_7;
 } else if (VAR_26->rate >= VAR_9 &&
     VAR_26->rate <= VAR_10) {
  VAR_28->nss = 3;
  VAR_28->rate_idx = VAR_26->rate - VAR_9;
 } else if (VAR_26->rate >= VAR_11 &&
     VAR_26->rate <= VAR_12) {
  VAR_28->nss = 4;
  VAR_28->rate_idx = VAR_26->rate - VAR_11;
 } else if (VAR_26->rate >= VAR_3 &&
     VAR_26->rate <= VAR_4) {
  VAR_28->rate_idx = VAR_26->rate - VAR_3;
 } else if (VAR_28->band == VAR_14 &&
     VAR_26->rate >= VAR_2 &&
     VAR_26->rate <= VAR_1) {
  VAR_28->rate_idx = VAR_26->rate - VAR_2;
 } else if (VAR_28->band == VAR_13 &&
     VAR_26->rate >= VAR_0 &&
     VAR_26->rate <= VAR_1) {
  VAR_28->rate_idx = VAR_26->rate - VAR_0;
 } else {
  VAR_28->rate_idx = 0;
 }

 VAR_28->flag |= VAR_24;
 VAR_28->mactime = VAR_26->tsf_low;

 if (VAR_26->bw == VAR_19)
  VAR_28->bw = VAR_17;
 else if (VAR_26->bw == VAR_18)
  VAR_28->bw = VAR_16;
 else
  VAR_28->bw = VAR_15;

 VAR_28->signal = VAR_26->signal_power;
 for (VAR_31 = 0; VAR_31 < VAR_25->hal.rf_path_num; VAR_31++) {
  VAR_28->chains |= FUNC_0(VAR_31);
  VAR_28->chain_signal[VAR_31] = VAR_26->rx_power[VAR_31];
 }

 FUNC_2(VAR_25, VAR_26, VAR_27);
}
