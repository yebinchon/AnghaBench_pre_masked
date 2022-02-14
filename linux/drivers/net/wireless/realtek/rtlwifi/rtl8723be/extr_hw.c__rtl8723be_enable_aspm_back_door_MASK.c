
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl_priv*,int) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_5(VAR_1);
 u8 VAR_3 = 0;
 u16 VAR_4 = 0;





 VAR_4 = FUNC_3(VAR_2, 0x01);
 if (VAR_4 != 0x0663)
  FUNC_4(VAR_2, 0x01, 0x0663);

 VAR_4 = FUNC_3(VAR_2, 0x04);
 if (VAR_4 != 0x7544)
  FUNC_4(VAR_2, 0x04, 0x7544);

 VAR_4 = FUNC_3(VAR_2, 0x06);
 if (VAR_4 != 0xB880)
  FUNC_4(VAR_2, 0x06, 0xB880);

 VAR_4 = FUNC_3(VAR_2, 0x07);
 if (VAR_4 != 0x4000)
  FUNC_4(VAR_2, 0x07, 0x4000);

 VAR_4 = FUNC_3(VAR_2, 0x08);
 if (VAR_4 != 0x9003)
  FUNC_4(VAR_2, 0x08, 0x9003);

 VAR_4 = FUNC_3(VAR_2, 0x09);
 if (VAR_4 != 0x0D03)
  FUNC_4(VAR_2, 0x09, 0x0D03);

 VAR_4 = FUNC_3(VAR_2, 0x0A);
 if (VAR_4 != 0x4037)
  FUNC_4(VAR_2, 0x0A, 0x4037);

 VAR_4 = FUNC_3(VAR_2, 0x0B);
 if (VAR_4 != 0x0070)
  FUNC_4(VAR_2, 0x0B, 0x0070);


 VAR_3 = FUNC_1(VAR_2, 0x70f);
 FUNC_2(VAR_2, 0x70f, VAR_3 | FUNC_0(7) |
        VAR_0 << 3);




 VAR_3 = FUNC_1(VAR_2, 0x719);
 FUNC_2(VAR_2, 0x719, VAR_3 | FUNC_0(3) | FUNC_0(4));
}
