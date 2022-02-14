
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ led_opendrain; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct rtl_led {int ledon; int ledpin; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_5, struct rtl_led *VAR_6)
{
 u16 VAR_7 = VAR_2;
 struct rtl_priv *VAR_8 = FUNC_2(VAR_5);

 switch (VAR_6->ledpin) {
 case 129:
  VAR_7 = VAR_2;
  break;

 case 128:
  VAR_7 = VAR_3;
  break;

 case 130:
 default:
  break;
 }

 FUNC_1(VAR_8, VAR_0, VAR_1,
   "In SwLedOff,LedAddr:%X LEDPIN=%d\n",
   VAR_7, VAR_6->ledpin);

 if (VAR_8->ledctl.led_opendrain) {
  u8 VAR_9 = FUNC_3(VAR_8, VAR_7);

  VAR_7 &= 0xd0;
  FUNC_4(VAR_8, VAR_7, (VAR_9 | FUNC_0(3)));


  VAR_9 = FUNC_3(VAR_8, VAR_4);
  VAR_9 &= 0xFE;
  FUNC_4(VAR_8, VAR_4, VAR_9);
 } else {
  FUNC_4(VAR_8, VAR_7, 0x28);
 }

 VAR_6->ledon = 0;
}
