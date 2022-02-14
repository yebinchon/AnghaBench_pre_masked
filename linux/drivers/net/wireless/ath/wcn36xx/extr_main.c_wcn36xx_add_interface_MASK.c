
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int list; int sta_list; int bss_index; } ;
struct wcn36xx {int conf_mutex; int vif_list; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,struct ieee80211_vif*,scalar_t__) ;
 int FUNC_5 (struct wcn36xx*,struct ieee80211_vif*) ;
 struct wcn36xx_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_7,
     struct ieee80211_vif *VAR_8)
{
 struct wcn36xx *VAR_9 = VAR_7->priv;
 struct wcn36xx_vif *VAR_10 = FUNC_6(VAR_8);

 FUNC_4(VAR_5, "mac add interface vif %p type %d\n",
      VAR_8, VAR_8->type);

 if (!(VAR_4 == VAR_8->type ||
       VAR_2 == VAR_8->type ||
       VAR_1 == VAR_8->type ||
       VAR_3 == VAR_8->type)) {
  FUNC_7("Unsupported interface type requested: %d\n",
        VAR_8->type);
  return -VAR_0;
 }

 FUNC_2(&VAR_9->conf_mutex);

 VAR_10->bss_index = VAR_6;
 FUNC_0(&VAR_10->sta_list);
 FUNC_1(&VAR_10->list, &VAR_9->vif_list);
 FUNC_5(VAR_9, VAR_8);

 FUNC_3(&VAR_9->conf_mutex);

 return 0;
}
