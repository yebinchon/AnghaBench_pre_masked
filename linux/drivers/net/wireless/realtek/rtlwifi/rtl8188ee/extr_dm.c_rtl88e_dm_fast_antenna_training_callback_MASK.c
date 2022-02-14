
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct rtl_priv {struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int fast_antenna_training_timer; } ;


 struct rtl_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct rtl_priv *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.fast_antenna_training_timer);
 struct ieee80211_hw *VAR_4 = VAR_3->hw;

 FUNC_1(VAR_4);
}
