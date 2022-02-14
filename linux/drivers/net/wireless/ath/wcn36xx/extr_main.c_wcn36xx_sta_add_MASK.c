
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int sta_list; } ;
struct wcn36xx_sta {int aid; int list; struct wcn36xx_vif* vif; int ampdu_lock; } ;
struct wcn36xx {int conf_mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int aid; int addr; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wcn36xx*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,struct ieee80211_vif*,int ) ;
 int FUNC_6 (struct wcn36xx*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 struct wcn36xx_sta* FUNC_7 (struct ieee80211_sta*) ;
 int FUNC_8 (struct ieee80211_sta*,int ) ;
 struct wcn36xx_vif* FUNC_9 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3,
      struct ieee80211_sta *VAR_4)
{
 struct wcn36xx *VAR_5 = VAR_2->priv;
 struct wcn36xx_vif *VAR_6 = FUNC_9(VAR_3);
 struct wcn36xx_sta *VAR_7 = FUNC_7(VAR_4);
 FUNC_5(VAR_1, "mac sta add vif %p sta %pM\n",
      VAR_3, VAR_4->addr);

 FUNC_2(&VAR_5->conf_mutex);

 FUNC_4(&VAR_7->ampdu_lock);
 VAR_7->vif = VAR_6;
 FUNC_1(&VAR_7->list, &VAR_6->sta_list);





 if (VAR_0 != VAR_3->type) {
  FUNC_8(VAR_4, FUNC_0(VAR_5));
  VAR_7->aid = VAR_4->aid;
  FUNC_6(VAR_5, VAR_3, VAR_4);
 }

 FUNC_3(&VAR_5->conf_mutex);

 return 0;
}
