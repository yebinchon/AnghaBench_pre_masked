
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*,int) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*,int ,struct sk_buff*,int,int) ;
 struct ath_common* FUNC_4 (int ) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_1,
    struct ieee80211_tx_control *VAR_2,
    struct sk_buff *VAR_3)
{
 struct ieee80211_hdr *VAR_4;
 struct ath9k_htc_priv *VAR_5 = VAR_1->priv;
 struct ath_common *VAR_6 = FUNC_4(VAR_5->ah);
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_4 = (struct ieee80211_hdr *) VAR_3->data;


 VAR_7 = FUNC_7(VAR_4->frame_control);
 VAR_8 = VAR_7 & 3;
 if (VAR_8 && VAR_3->len > VAR_7) {
  if (FUNC_9(VAR_3) < VAR_8) {
   FUNC_5(VAR_6, VAR_0, "No room for padding\n");
   goto fail_tx;
  }
  FUNC_10(VAR_3, VAR_8);
  FUNC_8(VAR_3->data, VAR_3->data + VAR_8, VAR_7);
 }

 VAR_10 = FUNC_2(VAR_5);
 if (VAR_10 < 0) {
  FUNC_5(VAR_6, VAR_0, "No free TX slot\n");
  goto fail_tx;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_2->sta, VAR_3, VAR_10, 0);
 if (VAR_9 != 0) {
  FUNC_5(VAR_6, VAR_0, "Tx failed\n");
  goto clear_slot;
 }

 FUNC_0(VAR_5);

 return;

clear_slot:
 FUNC_1(VAR_5, VAR_10);
fail_tx:
 FUNC_6(VAR_3);
}
