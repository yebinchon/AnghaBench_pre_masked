
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_status {size_t band; int antenna; size_t rate_idx; int enc_flags; int bw; int flag; scalar_t__ signal; int freq; int mactime; } ;
struct ieee80211_hdr {int dummy; } ;
struct ath_common {int dummy; } ;
struct ath5k_rx_status {int rs_status; int rs_antenna; scalar_t__ rs_rate; scalar_t__ rs_rssi; int rs_tstamp; } ;
struct TYPE_5__ {int * antenna_rx; } ;
struct ath5k_hw {int ah_bwmode; scalar_t__ opmode; int hw; int ah_beacon_rssi_avg; TYPE_4__* curchan; TYPE_3__* sbands; TYPE_1__ stats; scalar_t__ ah_noise_floor; } ;
struct TYPE_8__ {size_t band; int center_freq; } ;
struct TYPE_7__ {TYPE_2__* bitrates; } ;
struct TYPE_6__ {scalar_t__ hw_value_short; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ath5k_hw*,struct sk_buff*,struct ieee80211_rx_status*) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 struct ath_common* FUNC_3 (struct ath5k_hw*) ;
 size_t FUNC_4 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ath5k_hw*,struct sk_buff*,struct ath5k_rx_status*) ;
 scalar_t__ FUNC_7 (struct ath_common*,struct ieee80211_hdr*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int ,struct sk_buff*) ;
 int FUNC_10 (struct ath5k_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct ath5k_hw *VAR_9, struct sk_buff *VAR_10,
      struct ath5k_rx_status *VAR_11)
{
 struct ieee80211_rx_status *VAR_12;
 struct ath_common *VAR_13 = FUNC_3(VAR_9);

 FUNC_5(VAR_10);

 VAR_12 = FUNC_0(VAR_10);

 VAR_12->flag = 0;
 if (FUNC_11(VAR_11->rs_status & VAR_1))
  VAR_12->flag |= VAR_8;
 if (FUNC_11(VAR_11->rs_status & VAR_0))
  VAR_12->flag |= VAR_6;
 VAR_12->mactime = FUNC_2(VAR_9, VAR_11->rs_tstamp);
 VAR_12->flag |= VAR_7;

 VAR_12->freq = VAR_9->curchan->center_freq;
 VAR_12->band = VAR_9->curchan->band;

 VAR_12->signal = VAR_9->ah_noise_floor + VAR_11->rs_rssi;

 VAR_12->antenna = VAR_11->rs_antenna;

 if (VAR_11->rs_antenna > 0 && VAR_11->rs_antenna < 5)
  VAR_9->stats.antenna_rx[VAR_11->rs_antenna]++;
 else
  VAR_9->stats.antenna_rx[0]++;

 VAR_12->rate_idx = FUNC_4(VAR_9, VAR_11->rs_rate);
 VAR_12->flag |= FUNC_6(VAR_9, VAR_10, VAR_11);
 switch (VAR_9->ah_bwmode) {
 case 128:
  VAR_12->bw = VAR_4;
  break;
 case 129:
  VAR_12->bw = VAR_3;
  break;
 default:
  break;
 }

 if (VAR_11->rs_rate ==
     VAR_9->sbands[VAR_9->curchan->band].bitrates[VAR_12->rate_idx].hw_value_short)
  VAR_12->enc_flags |= VAR_5;

 FUNC_10(VAR_9, VAR_10);

 if (FUNC_7(VAR_13, (struct ieee80211_hdr *)VAR_10->data)) {
  FUNC_8(&VAR_9->ah_beacon_rssi_avg, VAR_11->rs_rssi);


  if (VAR_9->opmode == VAR_2)
   FUNC_1(VAR_9, VAR_10, VAR_12);
 }

 FUNC_9(VAR_9->hw, VAR_10);
}
