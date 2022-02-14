
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sw_led1; int sw_led0; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int *,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, &VAR_3->ledctl.sw_led0, VAR_0);
 FUNC_0(VAR_2, &VAR_3->ledctl.sw_led1, VAR_1);
}
