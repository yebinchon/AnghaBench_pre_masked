
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ops {int dummy; } ;
struct ath10k {int hw; struct ieee80211_ops* ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_ops*) ;

void FUNC_2(struct ath10k *VAR_0)
{
 struct ieee80211_ops *VAR_1 = VAR_0->ops;

 FUNC_0(VAR_0->hw);
 FUNC_1(VAR_1);
}
