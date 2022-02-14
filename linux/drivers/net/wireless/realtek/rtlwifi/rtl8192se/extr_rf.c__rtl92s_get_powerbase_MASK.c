
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {int eeprom_version; int legacy_httxpowerdiff; int** txpwr_legacyhtdiff; int** txpwr_ht20diff; int eeprom_regulatory; int ** pwrgroup_ht20; int ** pwrgroup_ht40; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_6, u8 *VAR_7,
      u8 VAR_8, u32 *VAR_9, u32 *VAR_10,
      u8 *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_2(VAR_6);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 struct rtl_efuse *VAR_14 = FUNC_1(FUNC_2(VAR_6));
 u32 VAR_15, VAR_16;
 u8 VAR_17 = 0, VAR_18 = 0;
 u8 VAR_19, VAR_20[4];

 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
  VAR_20[VAR_19] = VAR_7[VAR_19];


 if (VAR_14->eeprom_version < 2) {
  VAR_15 = VAR_20[0] + (VAR_14->legacy_httxpowerdiff & 0xf);
 } else {
  VAR_17 = VAR_14->txpwr_legacyhtdiff
      [VAR_4][VAR_8 - 1];





  VAR_15 = VAR_20[0] + VAR_17;
 }

 VAR_15 = (VAR_15 << 24) | (VAR_15 << 16) | (VAR_15 << 8) |
      VAR_15;
 *VAR_9 = VAR_15;


 if (VAR_14->eeprom_version >= 2) {

  if (VAR_13->current_chan_bw == VAR_2) {
   for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {


    VAR_18 = VAR_14->txpwr_ht20diff
       [VAR_19][VAR_8 - 1];

    if (VAR_18 < 8)
     VAR_20[VAR_19] += VAR_18;
    else
     VAR_20[VAR_19] -= (16 - VAR_18);
   }
  }
 }


 VAR_16 = VAR_20[0];
 VAR_16 = (VAR_16 << 24) | (VAR_16 << 16) | (VAR_16 << 8) |
    VAR_16;
 *VAR_10 = VAR_16;



 VAR_11[0] = VAR_20[0];
 VAR_11[1] = VAR_20[1];

 switch (VAR_14->eeprom_regulatory) {
 case 3:


  if (VAR_13->current_chan_bw == VAR_3) {
   VAR_11[0] += VAR_14->pwrgroup_ht40
      [VAR_4][
      VAR_8 - 1];
   VAR_11[1] += VAR_14->pwrgroup_ht40
      [VAR_5][
      VAR_8 - 1];
  } else {
   VAR_11[0] += VAR_14->pwrgroup_ht20
      [VAR_4][
      VAR_8 - 1];
   VAR_11[1] += VAR_14->pwrgroup_ht20
      [VAR_5][
      VAR_8 - 1];
  }
  break;
 default:
  break;
 }

 if (VAR_13->current_chan_bw == VAR_3) {
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "40MHz finalpwr_idx (A / B) = 0x%x / 0x%x\n",
    VAR_11[0], VAR_11[1]);
 } else {
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "20MHz finalpwr_idx (A / B) = 0x%x / 0x%x\n",
    VAR_11[0], VAR_11[1]);
 }
}
