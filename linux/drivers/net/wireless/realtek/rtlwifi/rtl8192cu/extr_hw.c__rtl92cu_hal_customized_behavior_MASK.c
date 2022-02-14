
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int led_opendrain; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct rtl_hal {int oem_id; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_1(FUNC_2(VAR_2));

 switch (VAR_4->oem_id) {
 case 133:
  VAR_3->ledctl.led_opendrain = 1;
  break;
 case 132:
 case 130:
 case 129:
 case 131:
 case 134:
 case 128:
 default:
  break;
 }
 FUNC_0(VAR_3, VAR_0, VAR_1, "RT Customized ID: 0x%02X\n",
   VAR_4->oem_id);
}
