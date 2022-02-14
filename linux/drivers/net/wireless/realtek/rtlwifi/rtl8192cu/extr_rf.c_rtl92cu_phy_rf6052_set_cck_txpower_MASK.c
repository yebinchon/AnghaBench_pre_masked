
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ dynamic_txhighpower_lvl; } ;
struct rtl_phy {int** mcs_offset; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ mode; scalar_t__ act_scanning; } ;
struct rtl_efuse {scalar_t__ eeprom_regulatory; scalar_t__ external_pa; } ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_13,
     u8 *VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_3(VAR_13);
 struct rtl_phy *VAR_16 = &(VAR_15->phy);
 struct rtl_mac *VAR_17 = FUNC_2(FUNC_3(VAR_13));
 struct rtl_efuse *VAR_18 = FUNC_1(FUNC_3(VAR_13));
 u32 VAR_19[2] = { 0, 0 }, VAR_20 = 0;
 u8 VAR_21, VAR_22;
 u8 *VAR_23;

 if (VAR_17->act_scanning) {
  VAR_19[VAR_5] = 0x3f3f3f3f;
  VAR_19[VAR_6] = 0x3f3f3f3f;
  for (VAR_21 = VAR_5; VAR_21 <= VAR_6; VAR_21++) {
   VAR_19[VAR_21] = VAR_14[VAR_21] |
       (VAR_14[VAR_21] << 8) |
       (VAR_14[VAR_21] << 16) |
       (VAR_14[VAR_21] << 24);
   if (VAR_19[VAR_21] > 0x20 && VAR_18->external_pa)
    VAR_19[VAR_21] = 0x20;
  }
 } else {
  if (VAR_15->dm.dynamic_txhighpower_lvl ==
      VAR_10) {
   VAR_19[VAR_5] = 0x10101010;
   VAR_19[VAR_6] = 0x10101010;
  } else if (VAR_15->dm.dynamic_txhighpower_lvl ==
      VAR_11) {
   VAR_19[VAR_5] = 0x00000000;
   VAR_19[VAR_6] = 0x00000000;
  } else {
   for (VAR_21 = VAR_5; VAR_21 <= VAR_6; VAR_21++) {
    VAR_19[VAR_21] = VAR_14[VAR_21] |
        (VAR_14[VAR_21] << 8) |
        (VAR_14[VAR_21] << 16) |
        (VAR_14[VAR_21] << 24);
   }
   if (VAR_18->eeprom_regulatory == 0) {
    VAR_20 = (VAR_16->mcs_offset[0][6]) +
     (VAR_16->mcs_offset[0][7] << 8);
    VAR_19[VAR_5] += VAR_20;
    VAR_20 = (VAR_16->mcs_offset[0][14]) +
     (VAR_16->mcs_offset[0][15] << 24);
    VAR_19[VAR_6] += VAR_20;
   }
  }
 }
 for (VAR_21 = VAR_5; VAR_21 <= VAR_6; VAR_21++) {
  VAR_23 = (u8 *) (&(VAR_19[VAR_21]));
  for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
   if (*VAR_23 > VAR_4)
    *VAR_23 = VAR_4;
   VAR_23++;
  }
 }
 VAR_20 = VAR_19[VAR_5] & 0xff;
 FUNC_4(VAR_13, VAR_7, VAR_2, VAR_20);

 FUNC_0(VAR_15, VAR_0, VAR_3,
  "CCK PWR 1M (rf-A) = 0x%x (reg 0x%x)\n",
  VAR_20, VAR_7);

 VAR_20 = VAR_19[VAR_5] >> 8;
 if (VAR_17->mode == VAR_12)
  VAR_20 = VAR_20 & 0xff00ffff;
 FUNC_4(VAR_13, VAR_8, 0xffffff00, VAR_20);
 FUNC_0(VAR_15, VAR_0, VAR_3,
  "CCK PWR 2~11M (rf-A) = 0x%x (reg 0x%x)\n",
  VAR_20, VAR_8);
 VAR_20 = VAR_19[VAR_6] >> 24;
 FUNC_4(VAR_13, VAR_8, VAR_1, VAR_20);
 FUNC_0(VAR_15, VAR_0, VAR_3,
  "CCK PWR 11M (rf-B) = 0x%x (reg 0x%x)\n",
  VAR_20, VAR_8);
 VAR_20 = VAR_19[VAR_6] & 0x00ffffff;
 FUNC_4(VAR_13, VAR_9, 0xffffff00, VAR_20);
 FUNC_0(VAR_15, VAR_0, VAR_3,
  "CCK PWR 1~5.5M (rf-B) = 0x%x (reg 0x%x)\n",
  VAR_20, VAR_9);
}
