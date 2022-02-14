
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; int antenna; int freq; int band; int mactime; } ;
struct TYPE_9__ {scalar_t__ radar_enabled; } ;
struct ieee80211_hw {TYPE_2__ conf; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_13__ {int discard_next; int num_pkts; } ;
struct TYPE_14__ {scalar_t__ spectral_mode; } ;
struct ath_softc {TYPE_6__ rx; int chan_lock; TYPE_3__* cur_chan; TYPE_7__ spec_priv; struct ath_hw* sc_ah; struct ieee80211_hw* hw; } ;
struct ath_rx_status {int rs_status; int rs_datalen; int rs_more; int is_mybeacon; int rs_antenna; int rs_rate; } ;
struct TYPE_8__ {scalar_t__ rx_status_len; } ;
struct ath_hw {TYPE_5__* curchan; TYPE_1__ caps; } ;
struct ath_common {scalar_t__ rx_bufsize; } ;
struct TYPE_12__ {TYPE_4__* chan; } ;
struct TYPE_11__ {int center_freq; int band; } ;
struct TYPE_10__ {int rxfilter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_softc*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ath_common*,struct ieee80211_hw*,struct ath_rx_status*,struct ieee80211_rx_status*) ;
 int FUNC_3 (struct ath_common*,struct ieee80211_hw*,struct ath_rx_status*,struct ieee80211_rx_status*) ;
 int FUNC_4 (struct ath_common*,struct ieee80211_hdr*,struct ieee80211_rx_status*,struct ath_rx_status*,int*,int ) ;
 int FUNC_5 (struct ath_softc*,struct ieee80211_hdr*,struct ath_rx_status*,int ) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct ath_rx_status*,struct ieee80211_rx_status*,int ) ;
 int FUNC_9 (struct ath_softc*,int ) ;
 scalar_t__ FUNC_10 (TYPE_7__*,struct ieee80211_hdr*,struct ath_rx_status*,int ) ;
 int FUNC_11 (struct ath_common*,int ,char*,int ) ;
 int FUNC_12 (struct ath_softc*,struct ath_rx_status*) ;
 scalar_t__ FUNC_13 (struct ath_common*,struct ieee80211_hdr*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct ath_softc *VAR_11,
       struct sk_buff *VAR_12,
       struct ath_rx_status *VAR_13,
       struct ieee80211_rx_status *VAR_14,
       bool *VAR_15, u64 VAR_16)
{
 struct ieee80211_hw *VAR_17 = VAR_11->hw;
 struct ath_hw *VAR_18 = VAR_11->sc_ah;
 struct ath_common *VAR_19 = FUNC_6(VAR_18);
 struct ieee80211_hdr *VAR_20;
 bool VAR_21 = VAR_11->rx.discard_next;
 bool VAR_22;





 if (VAR_21)
  goto corrupt;

 VAR_11->rx.discard_next = 0;





 VAR_22 = VAR_13->rs_status & VAR_2;
 if (!VAR_13->rs_datalen ||
     (VAR_13->rs_datalen < 10 && !VAR_22)) {
  FUNC_0(VAR_11, VAR_8);
  goto corrupt;
 }






 if (VAR_13->rs_datalen > (VAR_19->rx_bufsize - VAR_18->caps.rx_status_len)) {
  FUNC_0(VAR_11, VAR_8);
  goto corrupt;
 }


 if (VAR_13->rs_more)
  return 0;
 if (VAR_13->rs_status & VAR_1)
  goto corrupt;

 VAR_20 = (struct ieee80211_hdr *) (VAR_12->data + VAR_18->caps.rx_status_len);

 FUNC_8(VAR_13, VAR_14, VAR_16);
 FUNC_12(VAR_11, VAR_13);





 if (VAR_13->rs_status & VAR_2) {







  if (VAR_17->conf.radar_enabled) {
   FUNC_5(VAR_11, VAR_20, VAR_13,
       VAR_14->mactime);
  } else if (VAR_11->spec_priv.spectral_mode != VAR_6 &&
      FUNC_10(&VAR_11->spec_priv, VAR_20, VAR_13,
            VAR_14->mactime)) {
   FUNC_0(VAR_11, VAR_10);
  }
  return -VAR_4;
 }





 FUNC_16(&VAR_11->chan_lock);
 if (!FUNC_4(VAR_19, VAR_20, VAR_14, VAR_13, VAR_15,
     VAR_11->cur_chan->rxfilter)) {
  FUNC_17(&VAR_11->chan_lock);
  return -VAR_4;
 }
 FUNC_17(&VAR_11->chan_lock);

 if (FUNC_13(VAR_19, VAR_20)) {
  FUNC_0(VAR_11, VAR_7);
  VAR_13->is_mybeacon = 1;
 }




 if (FUNC_1(!VAR_18->curchan))
  return -VAR_4;

 if (FUNC_2(VAR_19, VAR_17, VAR_13, VAR_14)) {




  FUNC_11(VAR_19, VAR_0, "unsupported hw bitrate detected 0x%02x using 1 Mbit\n",
   VAR_13->rs_rate);
  FUNC_0(VAR_11, VAR_9);
  return -VAR_4;
 }

 if (FUNC_7()) {
  if (VAR_13->is_mybeacon)
   FUNC_9(VAR_11,
        VAR_3);
 }

 FUNC_3(VAR_19, VAR_17, VAR_13, VAR_14);

 VAR_14->band = VAR_18->curchan->chan->band;
 VAR_14->freq = VAR_18->curchan->chan->center_freq;
 VAR_14->antenna = VAR_13->rs_antenna;
 VAR_14->flag |= VAR_5;







 return 0;

corrupt:
 VAR_11->rx.discard_next = VAR_13->rs_more;
 return -VAR_4;
}
