
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int mutex; int * tmp_chan; int roc_done; int roc_start; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
          struct ieee80211_vif *VAR_1)
{
 struct mac80211_hwsim_data *VAR_2 = VAR_0->priv;

 FUNC_0(&VAR_2->roc_start);
 FUNC_0(&VAR_2->roc_done);

 FUNC_1(&VAR_2->mutex);
 VAR_2->tmp_chan = ((void*)0);
 FUNC_2(&VAR_2->mutex);

 FUNC_3(VAR_0->wiphy, "hwsim ROC canceled\n");

 return 0;
}
