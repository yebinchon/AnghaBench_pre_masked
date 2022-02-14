
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {size_t** txpwrlevel_cck; size_t** txpwrlevel_ht40_1s; size_t** txpwrlevel_ht40_2s; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rtl_efuse* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3, u8 VAR_4,
       u8 *VAR_5, u8 *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_8 = &(VAR_7->phy);
 struct rtl_efuse *VAR_9 = FUNC_0(FUNC_1(VAR_3));
 u8 VAR_10 = (VAR_4 - 1);



 VAR_5[0] = VAR_9->txpwrlevel_cck[0][VAR_10];

 VAR_5[1] = VAR_9->txpwrlevel_cck[1][VAR_10];


 if (VAR_8->rf_type == VAR_1 || VAR_8->rf_type == VAR_0) {

  VAR_6[0] = VAR_9->txpwrlevel_ht40_1s[0][VAR_10];
  VAR_6[1] = VAR_9->txpwrlevel_ht40_1s[1][VAR_10];
 } else if (VAR_8->rf_type == VAR_2) {

  VAR_6[0] = VAR_9->txpwrlevel_ht40_2s[0][VAR_10];
  VAR_6[1] = VAR_9->txpwrlevel_ht40_2s[1][VAR_10];
 } else {
  VAR_6[0] = 0;
  VAR_6[1] = 0;
 }
}
