
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int dummy; } ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int ) ;
 int FUNC_7 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_10,
       bool VAR_11, bool VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_5(VAR_10);
 struct rtl_hal *VAR_14 = FUNC_4(FUNC_5(VAR_10));
 struct rtl_efuse *VAR_15 = FUNC_3(FUNC_5(VAR_10));
 FUNC_1(VAR_13, VAR_1, VAR_2, "\n");

 if (FUNC_2(VAR_14)) {
  u8 VAR_16;
  VAR_16 = FUNC_6(VAR_13, VAR_5);
  FUNC_8(VAR_13, VAR_5, VAR_16 | FUNC_0(7));
  FUNC_7(VAR_10, VAR_7, FUNC_0(13), 0x01);
 }
 if (VAR_12) {
  if (VAR_11)
   FUNC_7(VAR_10, VAR_9,
          FUNC_0(5) | FUNC_0(6), 0x1);
  else
   FUNC_7(VAR_10, VAR_9,
          FUNC_0(5) | FUNC_0(6), 0x2);
 } else {
  FUNC_7(VAR_10, VAR_6, FUNC_0(8) | FUNC_0(9), 0);
  FUNC_7(VAR_10, 0x914, VAR_3, 0x0201);





  if (VAR_11) {
   FUNC_7(VAR_10, VAR_8,
          FUNC_0(14) | FUNC_0(13) | FUNC_0(12), 0);
   FUNC_7(VAR_10, VAR_9,
          FUNC_0(5) | FUNC_0(4) | FUNC_0(3), 0);
   if (VAR_15->antenna_div_type == VAR_0)
    FUNC_7(VAR_10, VAR_4, FUNC_0(31), 0);
  } else {
   FUNC_7(VAR_10, VAR_8,
          FUNC_0(14) | FUNC_0(13) | FUNC_0(12), 1);
   FUNC_7(VAR_10, VAR_9,
          FUNC_0(5) | FUNC_0(4) | FUNC_0(3), 1);
   if (VAR_15->antenna_div_type == VAR_0)
    FUNC_7(VAR_10, VAR_4, FUNC_0(31), 1);
  }
 }
}
