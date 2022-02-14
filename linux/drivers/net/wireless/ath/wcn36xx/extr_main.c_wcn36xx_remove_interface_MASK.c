
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int list; } ;
struct wcn36xx {int conf_mutex; } ;
struct ieee80211_vif {int addr; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,struct ieee80211_vif*) ;
 int FUNC_4 (struct wcn36xx*,int ) ;
 struct wcn36xx_vif* FUNC_5 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2)
{
 struct wcn36xx *VAR_3 = VAR_1->priv;
 struct wcn36xx_vif *VAR_4 = FUNC_5(VAR_2);
 FUNC_3(VAR_0, "mac remove interface vif %p\n", VAR_2);

 FUNC_1(&VAR_3->conf_mutex);

 FUNC_0(&VAR_4->list);
 FUNC_4(VAR_3, VAR_2->addr);

 FUNC_2(&VAR_3->conf_mutex);
}
