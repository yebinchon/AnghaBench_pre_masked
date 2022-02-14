
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_led {int ledon; int ledpin; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_4, struct rtl_led *VAR_5)
{
 u16 VAR_6 = VAR_2;
 u8 VAR_7 = 0;
 struct rtl_priv *VAR_8 = FUNC_2(VAR_4);

 switch (VAR_5->ledpin) {
 case 129:
  VAR_6 = VAR_2;
  break;

 case 128:
  VAR_6 = VAR_3;
  break;

 case 130:
 default:
  break;
 }

 FUNC_1(VAR_8, VAR_0, VAR_1,
   "In SwLedOn, LedAddr:%X LEDPIN=%d\n",
   VAR_6, VAR_5->ledpin);

 VAR_7 = FUNC_3(VAR_8, VAR_6);
 VAR_7 |= FUNC_0(5);
 VAR_7 &= ~(FUNC_0(7) | FUNC_0(6) | FUNC_0(3) | FUNC_0(2) | FUNC_0(1) | FUNC_0(0));

 FUNC_4(VAR_8, VAR_6, VAR_7);
 VAR_5->ledon = 1;
}
