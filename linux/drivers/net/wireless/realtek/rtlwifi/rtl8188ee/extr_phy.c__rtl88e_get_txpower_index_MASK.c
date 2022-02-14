
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_efuse {int** txpwrlevel_cck; int** txpwrlevel_ht40_1s; int** txpwr_ht20diff; int** txpwr_legacyhtdiff; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_efuse*,int,int*,int*,int*,int*) ;
 struct rtl_efuse* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2, u8 VAR_3,
          u8 *VAR_4, u8 *VAR_5,
          u8 *VAR_6, u8 *VAR_7)
{
 struct rtl_efuse *VAR_8 = FUNC_1(FUNC_2(VAR_2));
 u8 VAR_9 = (VAR_3 - 1);
 u8 VAR_10 = 0;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  if (VAR_10 == VAR_0) {
   FUNC_0(VAR_8, VAR_9, VAR_4,
          VAR_5, VAR_6,
          VAR_7);
  } else if (VAR_10 == VAR_1) {
   VAR_4[VAR_1] =
     VAR_8->txpwrlevel_cck[VAR_1][VAR_9];
   VAR_6[VAR_1] =
     VAR_8->txpwrlevel_ht40_1s[VAR_1][VAR_9] +
     VAR_8->txpwr_ht20diff[VAR_1][VAR_9];
   VAR_5[VAR_1] =
     VAR_8->txpwrlevel_ht40_1s[VAR_1][VAR_9] +
     VAR_8->txpwr_legacyhtdiff[VAR_1][VAR_9];
   VAR_7[VAR_1] =
     VAR_8->txpwrlevel_ht40_1s[VAR_1][VAR_9];
  }
 }

}
