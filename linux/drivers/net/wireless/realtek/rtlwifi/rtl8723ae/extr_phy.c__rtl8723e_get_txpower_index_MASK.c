
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {size_t** txpwrlevel_cck; size_t** txpwrlevel_ht40_1s; size_t** txpwrlevel_ht40_2s; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct rtl_phy*) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5, u8 VAR_6,
     u8 *VAR_7, u8 *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_5);
 struct rtl_phy *VAR_10 = &VAR_9->phy;
 struct rtl_efuse *VAR_11 = FUNC_1(FUNC_2(VAR_5));
 u8 VAR_12 = (VAR_6 - 1);

 VAR_7[VAR_0] =
     VAR_11->txpwrlevel_cck[VAR_0][VAR_12];
 VAR_7[VAR_1] =
     VAR_11->txpwrlevel_cck[VAR_1][VAR_12];
 if (FUNC_0(VAR_10) == VAR_3 || FUNC_0(VAR_10) == VAR_2) {
  VAR_8[VAR_0] =
      VAR_11->txpwrlevel_ht40_1s[VAR_0][VAR_12];
  VAR_8[VAR_1] =
      VAR_11->txpwrlevel_ht40_1s[VAR_1][VAR_12];
 } else if (FUNC_0(VAR_10) == VAR_4) {
  VAR_8[VAR_0] =
      VAR_11->txpwrlevel_ht40_2s[VAR_0][VAR_12];
  VAR_8[VAR_1] =
      VAR_11->txpwrlevel_ht40_2s[VAR_1][VAR_12];
 }
}
