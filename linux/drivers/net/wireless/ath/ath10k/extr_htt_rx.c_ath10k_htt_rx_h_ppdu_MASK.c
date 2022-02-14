
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; int ampdu_reference; int bw; int encoding; scalar_t__ nss; scalar_t__ rate_idx; scalar_t__ freq; } ;
struct TYPE_2__ {int flags; } ;
struct htt_rx_desc {TYPE_1__ attention; } ;
struct ath10k {int ampdu_reference; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_rx_status*,struct htt_rx_desc*,int ) ;
 int FUNC_2 (struct ath10k*,struct ieee80211_rx_status*,struct htt_rx_desc*) ;
 int FUNC_3 (struct ath10k*,struct ieee80211_rx_status*,struct htt_rx_desc*) ;
 int FUNC_4 (struct ath10k*,struct ieee80211_rx_status*,struct htt_rx_desc*) ;
 struct sk_buff* FUNC_5 (struct sk_buff_head*) ;
 scalar_t__ FUNC_6 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_9,
     struct sk_buff_head *VAR_10,
     struct ieee80211_rx_status *VAR_11,
     u32 VAR_12)
{
 struct sk_buff *VAR_13;
 struct htt_rx_desc *VAR_14;
 bool VAR_15;
 bool VAR_16;

 if (FUNC_6(VAR_10))
  return;

 VAR_13 = FUNC_5(VAR_10);
 VAR_14 = (void *)VAR_13->data - sizeof(*VAR_14);

 VAR_15 = !!(VAR_14->attention.flags &
      FUNC_0(VAR_1));
 VAR_16 = !!(VAR_14->attention.flags &
     FUNC_0(VAR_2));

 if (VAR_15) {

  VAR_11->freq = 0;
  VAR_11->rate_idx = 0;
  VAR_11->nss = 0;
  VAR_11->encoding = VAR_3;
  VAR_11->bw = VAR_0;

  VAR_11->flag &= ~VAR_7;
  VAR_11->flag |= VAR_8;

  VAR_11->flag &= ~(VAR_5);
  VAR_11->flag |= VAR_4 | VAR_6;
  VAR_11->ampdu_reference = VAR_9->ampdu_reference;

  FUNC_4(VAR_9, VAR_11, VAR_14);
  FUNC_1(VAR_9, VAR_11, VAR_14, VAR_12);
  FUNC_3(VAR_9, VAR_11, VAR_14);
 }

 if (VAR_16) {
  FUNC_2(VAR_9, VAR_11, VAR_14);


  VAR_11->flag |= VAR_5;
  VAR_9->ampdu_reference++;
 }
}
