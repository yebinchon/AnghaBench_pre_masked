
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_pci {int up_first_time; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct rtl_pci *VAR_1 = FUNC_0(FUNC_1(VAR_0));

 VAR_1->up_first_time = 1;
}
