
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_led {int ledpin; int ledon; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_3, struct rtl_led *VAR_4)
{
 u8 VAR_5;
 struct rtl_priv *VAR_6 = FUNC_2(VAR_3);

 FUNC_0(VAR_6, VAR_0, VAR_1, "LedAddr:%X ledpin=%d\n",
   VAR_2, VAR_4->ledpin);

 VAR_5 = FUNC_3(VAR_6, VAR_2);

 switch (VAR_4->ledpin) {
 case 130:
  break;
 case 129:
  FUNC_4(VAR_6, VAR_2, VAR_5 & 0xf0);
  break;
 case 128:
  FUNC_4(VAR_6, VAR_2, VAR_5 & 0x0f);
  break;
 default:
  FUNC_1("switch case %#x not processed\n",
         VAR_4->ledpin);
  break;
 }
 VAR_4->ledon = 1;
}
