
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int macphymode; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_4->rtlhal.macphymode) {
 case 130:
  FUNC_1(VAR_4, VAR_0, 0x0);
  FUNC_1(VAR_4, VAR_1, 0x08);
  FUNC_2(VAR_4, VAR_2 + 2, 0x13ff);
  break;
 case 129:
  FUNC_1(VAR_4, VAR_0, 0xf8);
  FUNC_1(VAR_4, VAR_1, 0x08);
  FUNC_2(VAR_4, VAR_2 + 2, 0x13ff);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_0, 0x0);
  FUNC_1(VAR_4, VAR_1, 0x10);
  FUNC_2(VAR_4, (VAR_2 + 2), 0x27FF);
  break;
 default:
  break;
 }
}
