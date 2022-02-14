
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int fw_version; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_7 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_10, bool VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_3(VAR_10);
 struct rtl_hal *VAR_13 = FUNC_2(FUNC_3(VAR_10));

 if (VAR_13->fw_version <= 0x20) {






  u16 VAR_14 = 0;

  FUNC_6(VAR_12, VAR_6, 0);
  VAR_14 = FUNC_5(VAR_12, VAR_8);
  FUNC_7(VAR_12, VAR_8, (VAR_14 &
          (~VAR_0)));
  VAR_14 = FUNC_5(VAR_12, VAR_8)&0x0FFF;
  FUNC_7(VAR_12, VAR_8, (VAR_14 |
         (VAR_2|VAR_1)));
  VAR_14 = FUNC_5(VAR_12, VAR_8);
  FUNC_7(VAR_12, VAR_8, (VAR_14 |
          VAR_0));
 } else {
  u8 VAR_15 = 0;


  if (FUNC_4(VAR_12, VAR_6) & FUNC_0(1)) {

   FUNC_6(VAR_12, VAR_6, 0);

   FUNC_6(VAR_12, VAR_5+3, 0x20);
   while ((VAR_15++ < 100) &&
          (VAR_0 & FUNC_5(VAR_12,
          VAR_8))) {
    FUNC_8(50);
   }
   if (VAR_15 >= 100) {
    FUNC_1("8051 reset failed!.........................\n");

    FUNC_6(VAR_12,
            VAR_8 + 1,
            0x50);
    FUNC_8(100);
   }
  }

  FUNC_6(VAR_12, VAR_8 + 1, 0x54);
  FUNC_6(VAR_12, VAR_6, 0);
 }
 if (VAR_11) {







  FUNC_7(VAR_12, VAR_7, 0x70A3);
  FUNC_6(VAR_12, VAR_3, 0x80);
  FUNC_7(VAR_12, VAR_4, 0x880F);
  FUNC_6(VAR_12, VAR_9, 0xF9);
 }
}
