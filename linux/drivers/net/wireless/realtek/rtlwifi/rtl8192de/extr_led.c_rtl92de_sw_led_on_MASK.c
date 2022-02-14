
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int eeprom_did; } ;
struct rtl_priv {TYPE_1__ efuse; } ;
struct rtl_led {int ledpin; int ledon; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int) ;
 int FUNC_2 (char*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;

void FUNC_6(struct ieee80211_hw *VAR_4, struct rtl_led *VAR_5)
{
 u8 VAR_6;
 struct rtl_priv *VAR_7 = FUNC_3(VAR_4);

 FUNC_1(VAR_7, VAR_0, VAR_1, "LedAddr:%X ledpin=%d\n",
   VAR_3, VAR_5->ledpin);

 switch (VAR_5->ledpin) {
 case 130:
  break;
 case 129:
  VAR_6 = FUNC_4(VAR_7, VAR_3);

  if ((VAR_7->efuse.eeprom_did == 0x8176) ||
   (VAR_7->efuse.eeprom_did == 0x8193))


   FUNC_5(VAR_7, VAR_3, (VAR_6 & 0xf0) |
           FUNC_0(7) | FUNC_0(5) | FUNC_0(6));
  else
   FUNC_5(VAR_7, VAR_3, (VAR_6 & 0xf0) |
           FUNC_0(7) | FUNC_0(5));
  break;
 case 128:
  VAR_6 = FUNC_4(VAR_7, VAR_2);

  FUNC_5(VAR_7, VAR_3, (VAR_6 & 0x0f) | FUNC_0(5));
  break;
 default:
  FUNC_2("switch case %#x not processed\n",
         VAR_5->ledpin);
  break;
 }
 VAR_5->ledon = 1;
}
