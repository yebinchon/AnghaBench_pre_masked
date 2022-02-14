
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_hal rtlhal; struct rtl_phy phy; } ;
struct rtl_efuse {size_t** txpwrlevel_cck; size_t** txpwrlevel_ht40_1s; size_t** txpwrlevel_ht40_2s; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct rtl_efuse* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_6, u8 VAR_7,
 u8 *VAR_8, u8 *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_6);
 struct rtl_phy *VAR_11 = &(VAR_10->phy);
 struct rtl_hal *VAR_12 = &(VAR_10->rtlhal);
 struct rtl_efuse *VAR_13 = FUNC_0(FUNC_1(VAR_6));
 u8 VAR_14 = (VAR_7 - 1);


 if (VAR_12->current_bandtype == VAR_0) {

  VAR_8[VAR_1] =
     VAR_13->txpwrlevel_cck[VAR_1][VAR_14];

  VAR_8[VAR_2] =
     VAR_13->txpwrlevel_cck[VAR_2][VAR_14];
 } else {
  VAR_8[VAR_1] = 0;
  VAR_8[VAR_2] = 0;
 }

 if (VAR_11->rf_type == VAR_4 || VAR_11->rf_type == VAR_3) {

  VAR_9[VAR_1] =
      VAR_13->txpwrlevel_ht40_1s[VAR_1][VAR_14];
  VAR_9[VAR_2] =
      VAR_13->txpwrlevel_ht40_1s[VAR_2][VAR_14];
 } else if (VAR_11->rf_type == VAR_5) {

  VAR_9[VAR_1] =
      VAR_13->txpwrlevel_ht40_2s[VAR_1][VAR_14];
  VAR_9[VAR_2] =
      VAR_13->txpwrlevel_ht40_2s[VAR_2][VAR_14];
 }
}
