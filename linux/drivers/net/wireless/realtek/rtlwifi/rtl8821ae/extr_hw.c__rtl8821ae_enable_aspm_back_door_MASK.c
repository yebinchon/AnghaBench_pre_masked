
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_6(VAR_3);
 struct rtl_hal *VAR_5 = FUNC_5(FUNC_6(VAR_3));
 u8 VAR_6;

 if (VAR_5->hw_type == VAR_2) {
  if (FUNC_3(VAR_4, 0x04) != 0x8544)
   FUNC_4(VAR_4, 0x04, 0x8544);

  if (FUNC_3(VAR_4, 0x0b) != 0x0070)
   FUNC_4(VAR_4, 0x0b, 0x0070);
 }

 VAR_6 = FUNC_1(VAR_4, 0x70f);
 FUNC_2(VAR_4, 0x70f, VAR_6 | FUNC_0(7) |
        VAR_0 << 3);

 VAR_6 = FUNC_1(VAR_4, 0x719);
 FUNC_2(VAR_4, 0x719, VAR_6 | FUNC_0(3) | FUNC_0(4));

 if (VAR_5->hw_type == VAR_1) {
  VAR_6 = FUNC_1(VAR_4, 0x718);
  FUNC_2(VAR_4, 0x718, VAR_6|FUNC_0(4));
 }
}
