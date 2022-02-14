
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct base_eep_header {int rxMask; int txMask; } ;
struct ath9k_htc_priv {int dummy; } ;


 struct base_eep_header* FUNC_0 (struct ath9k_htc_priv*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0, u32 *VAR_1,
     u32 *VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = VAR_0->priv;
 struct base_eep_header *VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) {
  *VAR_1 = VAR_4->txMask;
  *VAR_2 = VAR_4->rxMask;
 } else {
  *VAR_1 = 0;
  *VAR_2 = 0;
 }
 return 0;
}
