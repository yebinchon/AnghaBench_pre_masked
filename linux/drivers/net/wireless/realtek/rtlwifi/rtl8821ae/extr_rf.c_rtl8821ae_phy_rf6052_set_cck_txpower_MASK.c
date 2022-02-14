
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_phy {int** mcs_txpwrlevel_origoffset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ act_scanning; } ;
struct rtl_efuse {scalar_t__ eeprom_regulatory; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ieee80211_hw*,int,size_t*,int*) ;
 struct rtl_efuse* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int ,int) ;

void FUNC_6(struct ieee80211_hw *VAR_8,
       u8 *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_4(VAR_8);
 struct rtl_phy *VAR_11 = &VAR_10->phy;
 struct rtl_mac *VAR_12 = FUNC_3(FUNC_4(VAR_8));
 struct rtl_efuse *VAR_13 = FUNC_2(FUNC_4(VAR_8));
 u32 VAR_14[2] = {0, 0}, VAR_15;
 bool VAR_16 = 0;
 u8 VAR_17, VAR_18;
 u8 *VAR_19;
 u8 VAR_20;
 u32 VAR_21;

 if (VAR_13->eeprom_regulatory != 0)
  VAR_16 = 1;

 if (VAR_12->act_scanning) {
  VAR_14[VAR_4] = 0x3f3f3f3f;
  VAR_14[VAR_5] = 0x3f3f3f3f;

  if (VAR_16) {
   for (VAR_17 = VAR_4;
    VAR_17 <= VAR_5;
    VAR_17++) {
    VAR_14[VAR_17] = VAR_9[VAR_17] |
        (VAR_9[VAR_17] << 8) |
        (VAR_9[VAR_17] << 16) |
        (VAR_9[VAR_17] << 24);
   }
  }
 } else {
  for (VAR_17 = VAR_4; VAR_17 <= VAR_5; VAR_17++) {
   VAR_14[VAR_17] = VAR_9[VAR_17] |
       (VAR_9[VAR_17] << 8) |
       (VAR_9[VAR_17] << 16) |
       (VAR_9[VAR_17] << 24);
  }

  if (VAR_13->eeprom_regulatory == 0) {
   VAR_15 =
       (VAR_11->mcs_txpwrlevel_origoffset[0][6]) +
       (VAR_11->mcs_txpwrlevel_origoffset[0][7] <<
        8);
   VAR_14[VAR_4] += VAR_15;

   VAR_15 = (VAR_11->mcs_txpwrlevel_origoffset[0][14]) +
       (VAR_11->mcs_txpwrlevel_origoffset[0][15] <<
        24);
   VAR_14[VAR_5] += VAR_15;
  }
 }

 for (VAR_17 = VAR_4; VAR_17 <= VAR_5; VAR_17++) {
  VAR_19 = (u8 *)(&VAR_14[VAR_17]);
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
   if (*VAR_19 > VAR_3)
    *VAR_19 = VAR_3;
   VAR_19++;
  }
 }
 FUNC_1(VAR_8, 1, &VAR_20, &VAR_21);
 if (VAR_20 == 1) {
  VAR_14[0] += VAR_21;
  VAR_14[1] += VAR_21;
 } else if (VAR_20 == 2) {
  VAR_14[0] -= VAR_21;
  VAR_14[1] -= VAR_21;
 }
 VAR_15 = VAR_14[VAR_4];
 FUNC_5(VAR_8, VAR_6, VAR_1, VAR_15);

 FUNC_0(VAR_10, VAR_0, VAR_2,
  "CCK PWR 1~11M (rf-A) = 0x%x (reg 0x%x)\n", VAR_15,
   VAR_6);

 VAR_15 = VAR_14[VAR_5];
 FUNC_5(VAR_8, VAR_7, VAR_1, VAR_15);

 FUNC_0(VAR_10, VAR_0, VAR_2,
  "CCK PWR 11M (rf-B) = 0x%x (reg 0x%x)\n", VAR_15,
   VAR_7);
}
