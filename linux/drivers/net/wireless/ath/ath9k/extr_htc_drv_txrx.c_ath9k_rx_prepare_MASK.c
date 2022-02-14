
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; int antenna; int freq; int band; int mactime; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int dummy; } ;
struct ath_rx_status {int rs_status; int rs_antenna; int is_mybeacon; } ;
struct ath_hw {TYPE_2__* curchan; } ;
struct ath_htc_rx_status {int rs_tstamp; int rs_datalen; } ;
struct ath_common {struct ath_hw* ah; } ;
struct ath9k_htc_rxbuf {struct sk_buff* skb; } ;
struct ath9k_htc_priv {int rxfilter; int spec_priv; int ah; struct ieee80211_hw* hw; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct TYPE_3__ {int center_freq; int band; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_common*,struct ieee80211_hw*,struct ath_rx_status*,struct ieee80211_rx_status*) ;
 int FUNC_1 (struct ath_common*,struct ieee80211_hw*,struct ath_rx_status*,struct ieee80211_rx_status*) ;
 int FUNC_2 (struct ath_common*,struct ieee80211_hdr*,struct ieee80211_rx_status*,struct ath_rx_status*,int*,int ) ;
 int FUNC_3 (struct ath_common*,struct sk_buff*,struct ath_rx_status*,struct ieee80211_rx_status*,int) ;
 int FUNC_4 (struct ath9k_htc_priv*,struct ath_rx_status*) ;
 struct ath_common* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,struct ieee80211_hdr*,struct ath_rx_status*,int ) ;
 int FUNC_7 (struct ath_common*,char*,scalar_t__,...) ;
 int FUNC_8 (struct ath_common*,struct ieee80211_hdr*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_12 (struct ath_rx_status*,struct ath_htc_rx_status*) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static bool FUNC_14(struct ath9k_htc_priv *VAR_3,
        struct ath9k_htc_rxbuf *VAR_4,
        struct ieee80211_rx_status *VAR_5)

{
 struct ieee80211_hdr *VAR_6;
 struct ieee80211_hw *VAR_7 = VAR_3->hw;
 struct sk_buff *VAR_8 = VAR_4->skb;
 struct ath_common *VAR_9 = FUNC_5(VAR_3->ah);
 struct ath_hw *VAR_10 = VAR_9->ah;
 struct ath_htc_rx_status *VAR_11;
 struct ath_rx_status VAR_12;
 bool VAR_13 = 0;

 if (VAR_8->len < VAR_1) {
  FUNC_7(VAR_9, "Corrupted RX frame, dropping (len: %d)\n",
   VAR_8->len);
  goto rx_next;
 }

 VAR_11 = (struct ath_htc_rx_status *)VAR_8->data;

 if (FUNC_9(VAR_11->rs_datalen) -
     (VAR_8->len - VAR_1) != 0) {
  FUNC_7(VAR_9,
   "Corrupted RX data len, dropping (dlen: %d, skblen: %d)\n",
   VAR_11->rs_datalen, VAR_8->len);
  goto rx_next;
 }



 FUNC_11(VAR_5, 0, sizeof(struct ieee80211_rx_status));



 FUNC_12(&VAR_12, VAR_11);
 FUNC_4(VAR_3, &VAR_12);
 VAR_5->mactime = FUNC_10(VAR_11->rs_tstamp);
 FUNC_13(VAR_8, VAR_1);





 VAR_6 = (struct ieee80211_hdr *)VAR_8->data;





 if (VAR_12.rs_status & VAR_0) {

  if (FUNC_6(&VAR_3->spec_priv, VAR_6,
        &VAR_12, VAR_5->mactime)) {

  }
  goto rx_next;
 }

 if (!FUNC_2(VAR_9, VAR_6, VAR_5, &VAR_12,
   &VAR_13, VAR_3->rxfilter))
  goto rx_next;

 FUNC_3(VAR_9, VAR_8, &VAR_12,
         VAR_5, VAR_13);

 if (FUNC_0(VAR_9, VAR_7, &VAR_12, VAR_5))
  goto rx_next;

 VAR_12.is_mybeacon = FUNC_8(VAR_9, VAR_6);
 FUNC_1(VAR_9, VAR_7, &VAR_12, VAR_5);

 VAR_5->band = VAR_10->curchan->chan->band;
 VAR_5->freq = VAR_10->curchan->chan->center_freq;
 VAR_5->antenna = VAR_12.rs_antenna;
 VAR_5->flag |= VAR_2;

 return 1;
rx_next:
 return 0;
}
