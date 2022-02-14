
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int led_opendrain; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct rtl_led {int ledpin; int ledon; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int) ;
 int FUNC_2 (char*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;

void FUNC_6(struct ieee80211_hw *VAR_3, struct rtl_led *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6;

 FUNC_1(VAR_5, VAR_0, VAR_1, "LedAddr:%X ledpin=%d\n",
   VAR_2, VAR_4->ledpin);
 VAR_6 = FUNC_4(VAR_5, VAR_2);
 switch (VAR_4->ledpin) {
 case 130:
  break;
 case 129:
  VAR_6 &= 0xf0;
  if (VAR_5->ledctl.led_opendrain)
   FUNC_5(VAR_5, VAR_2,
           (VAR_6 | FUNC_0(1) | FUNC_0(5) | FUNC_0(6)));
  else
   FUNC_5(VAR_5, VAR_2,
           (VAR_6 | FUNC_0(3) | FUNC_0(5) | FUNC_0(6)));
  break;
 case 128:
  VAR_6 &= 0x0f;
  FUNC_5(VAR_5, VAR_2, (VAR_6 | FUNC_0(3)));
  break;
 default:
  FUNC_2("switch case %#x not processed\n",
         VAR_4->ledpin);
  break;
 }
 VAR_4->ledon = 0;
}
