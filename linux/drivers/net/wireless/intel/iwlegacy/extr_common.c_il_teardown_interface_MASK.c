
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {struct ieee80211_vif* scan_vif; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*,int) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_0, struct ieee80211_vif *VAR_1)
{
 FUNC_3(&VAR_0->mutex);

 if (VAR_0->scan_vif == VAR_1) {
  FUNC_1(VAR_0, 200);
  FUNC_0(VAR_0);
 }

 FUNC_2(VAR_0);
}
