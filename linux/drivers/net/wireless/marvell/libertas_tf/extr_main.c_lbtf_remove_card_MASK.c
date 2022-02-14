
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {int surpriseremoved; struct ieee80211_hw* hw; int command_timer; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lbtf_private*) ;

int FUNC_6(struct lbtf_private *VAR_1)
{
 struct ieee80211_hw *VAR_2 = VAR_1->hw;

 FUNC_3(VAR_0);

 VAR_1->surpriseremoved = 1;
 FUNC_0(&VAR_1->command_timer);
 FUNC_5(VAR_1);
 VAR_1->hw = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_4(VAR_0);
 return 0;
}
