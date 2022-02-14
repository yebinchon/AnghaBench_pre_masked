
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int eeprom_crystalcap; } ;
struct rtl_priv {TYPE_1__ efuse; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_7 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_8 (struct rtl_priv*,int,int) ;
 int FUNC_9 (struct rtl_priv*,scalar_t__,int) ;

bool FUNC_10(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_3(VAR_12);
 bool VAR_14 = 1;
 u16 VAR_15;
 u32 VAR_16;
 u8 VAR_17;

 FUNC_2(VAR_12);
 VAR_15 = FUNC_5(VAR_13, VAR_8);
 FUNC_9(VAR_13, VAR_8,
         VAR_15 | FUNC_0(13) | FUNC_0(0) | FUNC_0(1));

 FUNC_7(VAR_13, VAR_7, VAR_9 | VAR_10 | VAR_11);
 FUNC_7(VAR_13, VAR_8,
         VAR_4 | VAR_3 | VAR_2 |
         VAR_1 | VAR_0);

 FUNC_7(VAR_13, VAR_5 + 1, 0x80);

 VAR_16 = FUNC_4(VAR_13, 0x4c);
 FUNC_8(VAR_13, 0x4c, VAR_16 | FUNC_0(23));

 VAR_14 = FUNC_1(VAR_12);

 VAR_17 = VAR_13->efuse.eeprom_crystalcap & 0x3F;
 FUNC_6(VAR_12, VAR_6, 0xFFF000,
        (VAR_17 | (VAR_17 << 6)));
 return VAR_14;
}
