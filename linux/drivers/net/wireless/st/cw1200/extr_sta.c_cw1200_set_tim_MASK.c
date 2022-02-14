
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {int set_tim_work; int workqueue; } ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_sta *VAR_1,
     bool VAR_2)
{
 struct cw1200_common *VAR_3 = VAR_0->priv;
 FUNC_0(VAR_3->workqueue, &VAR_3->set_tim_work);
 return 0;
}
