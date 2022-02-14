
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wowlan_firmware; int * pfirmware; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->rtlhal.pfirmware) {
  FUNC_1(VAR_1->rtlhal.pfirmware);
  VAR_1->rtlhal.pfirmware = ((void*)0);
 }






}
