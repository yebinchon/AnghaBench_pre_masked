
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int enc_flags; scalar_t__ bw; scalar_t__ encoding; size_t rate_idx; size_t band; } ;
struct ieee80211_rate {int bitrate; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;
struct ath_softc {int hw; struct ath_hw* sc_ah; } ;
struct ath_rx_status {int rs_rate; int rs_datalen; } ;
struct ath_hw {int dummy; } ;
struct ath_common {TYPE_1__* sbands; } ;
struct TYPE_2__ {struct ieee80211_rate* bitrates; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*,int,int,int ,size_t,int) ;
 scalar_t__ FUNC_4 (struct ath_softc*,size_t,int ,int,int,int) ;
 struct ieee80211_sta* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_sta*,int,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct ath_softc *VAR_7,
     struct ath_rx_status *VAR_8,
     struct sk_buff *VAR_9)
{
 struct ieee80211_hdr *VAR_10 = (struct ieee80211_hdr *) VAR_9->data;
 struct ath_hw *VAR_11 = VAR_7->sc_ah;
 struct ath_common *VAR_12 = FUNC_2(VAR_11);
 struct ieee80211_sta *VAR_13;
 struct ieee80211_rx_status *VAR_14;
 const struct ieee80211_rate *VAR_15;
 bool VAR_16, VAR_17, VAR_18;
 int VAR_19;
 u16 VAR_20 = VAR_8->rs_datalen;
 u32 VAR_21 = 0;
 u8 VAR_22;

 if (!FUNC_6(VAR_10->frame_control))
  return;

 FUNC_8();

 VAR_13 = FUNC_5(VAR_7->hw, VAR_10->addr2, ((void*)0));
 if (!VAR_13)
  goto exit;
 VAR_22 = VAR_9->priority & VAR_0;

 VAR_14 = FUNC_0(VAR_9);

 VAR_16 = !!(VAR_14->enc_flags & VAR_3);
 VAR_17 = !!(VAR_14->bw == VAR_1);
 VAR_18 = !!(VAR_14->enc_flags & VAR_2);

 if (!!(VAR_14->encoding == VAR_4)) {


  VAR_21 += FUNC_4(VAR_7, VAR_14->rate_idx, VAR_20,
     VAR_17, VAR_16, VAR_18);
 } else {

  VAR_19 = FUNC_1(VAR_8->rs_rate) ? VAR_5 : VAR_6;
  VAR_15 = &VAR_12->sbands[VAR_14->band].bitrates[VAR_14->rate_idx];
  VAR_21 += FUNC_3(VAR_11, VAR_19, VAR_15->bitrate * 100,
      VAR_20, VAR_14->rate_idx, VAR_18);
 }

 FUNC_7(VAR_13, VAR_22, 0, VAR_21);
exit:
 FUNC_9();
}
