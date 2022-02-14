
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_key_conf {scalar_t__ hw_key_idx; scalar_t__ cipher; } ;
struct ath_common {int crypt_caps; int tkip_keymap; int keymap; int ccmp_keymap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath_common*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct ath_common *VAR_3, struct ieee80211_key_conf *VAR_4)
{
 FUNC_0(VAR_3, VAR_4->hw_key_idx);
 if (VAR_4->hw_key_idx < VAR_1)
  return;

 FUNC_1(VAR_4->hw_key_idx, VAR_3->keymap);
 FUNC_1(VAR_4->hw_key_idx, VAR_3->ccmp_keymap);
 if (VAR_4->cipher != VAR_2)
  return;

 FUNC_1(VAR_4->hw_key_idx + 64, VAR_3->keymap);

 FUNC_1(VAR_4->hw_key_idx, VAR_3->tkip_keymap);
 FUNC_1(VAR_4->hw_key_idx + 64, VAR_3->tkip_keymap);

 if (!(VAR_3->crypt_caps & VAR_0)) {
  FUNC_0(VAR_3, VAR_4->hw_key_idx + 32);
  FUNC_1(VAR_4->hw_key_idx + 32, VAR_3->keymap);
  FUNC_1(VAR_4->hw_key_idx + 64 + 32, VAR_3->keymap);

  FUNC_1(VAR_4->hw_key_idx + 32, VAR_3->tkip_keymap);
  FUNC_1(VAR_4->hw_key_idx + 64 + 32, VAR_3->tkip_keymap);
 }
}
