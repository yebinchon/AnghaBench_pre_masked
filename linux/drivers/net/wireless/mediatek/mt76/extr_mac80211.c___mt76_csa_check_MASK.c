
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76_dev {int csa_complete; } ;
struct ieee80211_vif {int csa_active; } ;


 int FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, u8 *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct mt76_dev *VAR_3 = VAR_0;

 if (!VAR_2->csa_active)
  return;

 VAR_3->csa_complete |= FUNC_0(VAR_2);
}
