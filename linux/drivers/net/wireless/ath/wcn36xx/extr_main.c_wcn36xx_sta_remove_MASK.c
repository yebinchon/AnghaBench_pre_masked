
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_sta {int * vif; int sta_index; int list; } ;
struct wcn36xx {int conf_mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,struct ieee80211_vif*,int ,int ) ;
 int FUNC_4 (struct wcn36xx*,int ) ;
 struct wcn36xx_sta* FUNC_5 (struct ieee80211_sta*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2,
         struct ieee80211_sta *VAR_3)
{
 struct wcn36xx *VAR_4 = VAR_1->priv;
 struct wcn36xx_sta *VAR_5 = FUNC_5(VAR_3);

 FUNC_3(VAR_0, "mac sta remove vif %p sta %pM index %d\n",
      VAR_2, VAR_3->addr, VAR_5->sta_index);

 FUNC_1(&VAR_4->conf_mutex);

 FUNC_0(&VAR_5->list);
 FUNC_4(VAR_4, VAR_5->sta_index);
 VAR_5->vif = ((void*)0);

 FUNC_2(&VAR_4->conf_mutex);

 return 0;
}
