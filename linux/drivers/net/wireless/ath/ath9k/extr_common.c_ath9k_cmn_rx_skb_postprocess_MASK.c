
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; int len; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath_rx_status {int rs_keyix; } ;
struct ath_hw {scalar_t__ sw_mgmt_crypto_rx; } ;
struct ath_common {int keymap; struct ath_hw* ah; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int,int ) ;

void FUNC_7(struct ath_common *VAR_3,
      struct sk_buff *VAR_4,
      struct ath_rx_status *VAR_5,
      struct ieee80211_rx_status *VAR_6,
      bool VAR_7)
{
 struct ath_hw *VAR_8 = VAR_3->ah;
 struct ieee80211_hdr *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u8 VAR_13;
 __le16 VAR_14;


 VAR_9 = (struct ieee80211_hdr *) VAR_4->data;
 VAR_10 = FUNC_0(VAR_4);
 VAR_14 = VAR_9->frame_control;
 VAR_11 = FUNC_2(VAR_14);
 VAR_12 = VAR_11 & 3;
 if (VAR_12 && VAR_4->len>=VAR_11+VAR_12+VAR_1) {
  FUNC_4(*(VAR_4->data + VAR_12), VAR_4->data, VAR_11);
  FUNC_5(VAR_4, VAR_12);
 }

 VAR_13 = VAR_5->rs_keyix;

 if (!(VAR_13 == VAR_0) && !VAR_7 &&
     FUNC_1(VAR_14)) {
  VAR_6->flag |= VAR_2;
 } else if (FUNC_1(VAR_14)
     && !VAR_7 && VAR_4->len >= VAR_10 + 4) {
  VAR_13 = VAR_4->data[VAR_10 + 3] >> 6;

  if (FUNC_6(VAR_13, VAR_3->keymap))
   VAR_6->flag |= VAR_2;
 }
 if (VAR_8->sw_mgmt_crypto_rx &&
     (VAR_6->flag & VAR_2) &&
     FUNC_3(VAR_14))

  VAR_6->flag &= ~VAR_2;
}
