
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_hal {int interface; } ;
struct rtl_efuse {int board_type; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_efuse* FUNC_0 (int ) ;
 struct rtl_hal* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_0,
        const u32 VAR_1)
{
 struct rtl_hal *VAR_2 = FUNC_1(FUNC_2(VAR_0));
 struct rtl_efuse *VAR_3 = FUNC_0(FUNC_2(VAR_0));
 u32 VAR_4 = VAR_3->board_type;
 u32 VAR_5 = VAR_2->interface;
 u32 VAR_6 = 0x08;
 u32 VAR_7 = VAR_1;

 if (VAR_1 == 0xCDCDCDCD)
  return 1;

 VAR_7 = VAR_1 & 0xFF;
 if ((VAR_4 != VAR_7) && (VAR_7 != 0xFF))
  return 0;

 VAR_7 = VAR_1 & 0xFF00;
 VAR_7 = VAR_7 >> 8;
 if ((VAR_5 & VAR_7) == 0 && VAR_7 != 0x07)
  return 0;

 VAR_7 = VAR_1 & 0xFF0000;
 VAR_7 = VAR_7 >> 16;
 if ((VAR_6 & VAR_7) == 0 && VAR_7 != 0x0F)
  return 0;

 return 1;
}
