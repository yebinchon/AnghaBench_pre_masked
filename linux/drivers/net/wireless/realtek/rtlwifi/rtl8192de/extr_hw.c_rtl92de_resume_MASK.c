
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int macphyctl_reg; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ) ;

void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0,
         VAR_2->rtlhal.macphyctl_reg);
}
