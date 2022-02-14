
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_led {int ledpin; int ledon; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,...) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_5, struct rtl_led *VAR_6)
{
 u8 VAR_7;
 struct rtl_priv *VAR_8 = FUNC_2(VAR_5);

 FUNC_1(VAR_8, VAR_1, VAR_2,
   "LedAddr:%X ledpin=%d\n", VAR_4, VAR_6->ledpin);

 switch (VAR_6->ledpin) {
 case 130:
  break;
 case 129:
  VAR_7 = FUNC_3(VAR_8, VAR_4);
  FUNC_4(VAR_8,
          VAR_4, (VAR_7 & 0xf0) | FUNC_0(5) | FUNC_0(6));
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_8, VAR_3);
  FUNC_4(VAR_8, VAR_3, VAR_7 & 0x10);
  break;
 default:
  FUNC_1(VAR_8, VAR_0, VAR_2,
    "switch case %#x not processed\n", VAR_6->ledpin);
  break;
 }
 VAR_6->ledon = 1;
}
