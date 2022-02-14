
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_phy {int** mcs_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ act_scanning; } ;
struct rtl_efuse {scalar_t__ eeprom_regulatory; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_10,
           u8 *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_3(VAR_10);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 struct rtl_mac *VAR_14 = FUNC_2(FUNC_3(VAR_10));
 struct rtl_efuse *VAR_15 = FUNC_1(FUNC_3(VAR_10));
 u32 VAR_16[2] = {0, 0}, VAR_17;
 bool VAR_18 = 0;
 u8 VAR_19, VAR_20;
 u8 *VAR_21;

 if (VAR_15->eeprom_regulatory != 0)
  VAR_18 = 1;
 if (VAR_14->act_scanning) {
  VAR_16[VAR_5] = 0x3f3f3f3f;
  VAR_16[VAR_6] = 0x3f3f3f3f;
  if (VAR_18) {
   for (VAR_19 = VAR_5; VAR_19 <= VAR_6; VAR_19++) {
    VAR_16[VAR_19] = VAR_11[VAR_19] |
        (VAR_11[VAR_19] << 8) |
        (VAR_11[VAR_19] << 16) |
        (VAR_11[VAR_19] << 24);
   }
  }
 } else {
  for (VAR_19 = VAR_5; VAR_19 <= VAR_6; VAR_19++) {
   VAR_16[VAR_19] = VAR_11[VAR_19] |
       (VAR_11[VAR_19] << 8) |
       (VAR_11[VAR_19] << 16) |
       (VAR_11[VAR_19] << 24);
  }
  if (VAR_15->eeprom_regulatory == 0) {
   VAR_17 = (VAR_13->mcs_offset[0][6]) +
       (VAR_13->mcs_offset[0][7] << 8);
   VAR_16[VAR_5] += VAR_17;
   VAR_17 = (VAR_13->mcs_offset[0][14]) +
       (VAR_13->mcs_offset[0][15] << 24);
   VAR_16[VAR_6] += VAR_17;
  }
 }

 for (VAR_19 = VAR_5; VAR_19 <= VAR_6; VAR_19++) {
  VAR_21 = (u8 *) (&(VAR_16[VAR_19]));
  for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
   if (*VAR_21 > VAR_4)
    *VAR_21 = VAR_4;
   VAR_21++;
  }
 }

 VAR_17 = VAR_16[VAR_5] & 0xff;
 FUNC_4(VAR_10, VAR_7, VAR_2, VAR_17);
 FUNC_0(VAR_12, VAR_0, VAR_3,
  "CCK PWR 1M (rf-A) = 0x%x (reg 0x%x)\n",
  VAR_17, VAR_7);
 VAR_17 = VAR_16[VAR_5] >> 8;
 FUNC_4(VAR_10, VAR_8, 0xffffff00, VAR_17);
 FUNC_0(VAR_12, VAR_0, VAR_3,
  "CCK PWR 2~11M (rf-A) = 0x%x (reg 0x%x)\n",
  VAR_17, VAR_8);
 VAR_17 = VAR_16[VAR_6] >> 24;
 FUNC_4(VAR_10, VAR_8, VAR_1, VAR_17);
 FUNC_0(VAR_12, VAR_0, VAR_3,
  "CCK PWR 11M (rf-B) = 0x%x (reg 0x%x)\n",
  VAR_17, VAR_8);
 VAR_17 = VAR_16[VAR_6] & 0x00ffffff;
 FUNC_4(VAR_10, VAR_9, 0xffffff00, VAR_17);
 FUNC_0(VAR_12, VAR_0, VAR_3,
  "CCK PWR 1~5.5M (rf-B) = 0x%x (reg 0x%x)\n",
  VAR_17, VAR_9);
}
