
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int** txpwrlevel_cck; int** txpwrlevel_ht40_1s; int** txpwr_legacyhtdiff; int** txpwr_ht20diff; int** txpwr_ht40diff; int eeprom_regulatory; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_5(struct ieee80211_hw *VAR_13, u8 VAR_14,
           u8 VAR_15, u8 VAR_16, u8 VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_4(VAR_13);
 struct rtl_efuse *VAR_19 = FUNC_3(FUNC_4(VAR_13));
 u8 VAR_20 = (VAR_17 - 1);
 u8 VAR_21 = 0;
 u8 VAR_22 = 0;

 if (VAR_17 > 14 || VAR_17 < 1) {
  VAR_20 = 0;
  FUNC_0(VAR_18, VAR_1, VAR_2,
    "Illegal channel!\n");
 }
 if (FUNC_1(VAR_15))
  VAR_21 = VAR_19->txpwrlevel_cck[VAR_14][VAR_20];
 else if (VAR_4 <= VAR_15)
  VAR_21 = VAR_19->txpwrlevel_ht40_1s[VAR_14][VAR_20];
 else
  FUNC_0(VAR_18, VAR_1, VAR_2,
    "invalid rate\n");

 if (VAR_4 <= VAR_15 && VAR_15 <= VAR_3 &&
     !FUNC_1(VAR_15))
  VAR_21 += VAR_19->txpwr_legacyhtdiff[0][VAR_11];

 if (VAR_16 == VAR_8) {
  if (VAR_5 <= VAR_15 && VAR_15 <= VAR_6)
   VAR_21 += VAR_19->txpwr_ht20diff[0][VAR_11];
  if (VAR_7 <= VAR_15 && VAR_15 <= VAR_6)
   VAR_21 += VAR_19->txpwr_ht20diff[0][VAR_12];
 } else if (VAR_16 == VAR_9) {
  if (VAR_5 <= VAR_15 && VAR_15 <= VAR_6)
   VAR_21 += VAR_19->txpwr_ht40diff[0][VAR_11];
  if (VAR_7 <= VAR_15 && VAR_15 <= VAR_6)
   VAR_21 += VAR_19->txpwr_ht40diff[0][VAR_12];
 }

 if (VAR_19->eeprom_regulatory != 2)
  VAR_22 = FUNC_2(VAR_13,
           VAR_0,
           VAR_14, VAR_15);

 VAR_21 += VAR_22;

 if (VAR_21 > VAR_10)
  VAR_21 = VAR_10;

 return VAR_21;
}
