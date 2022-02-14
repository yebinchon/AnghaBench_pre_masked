
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct mt76_dev*,int *,int) ;

void FUNC_2(struct mt76_dev *VAR_0)
{
 struct ieee80211_hw *VAR_1 = VAR_0->hw;

 FUNC_1(VAR_0, ((void*)0), 1);
 FUNC_0(VAR_1);
}
