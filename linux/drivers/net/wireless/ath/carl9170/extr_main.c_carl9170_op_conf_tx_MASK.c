
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct ar9170 {int mutex; int * edcf; } ;


 size_t* VAR_0 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int *,struct ieee80211_tx_queue_params const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1,
          struct ieee80211_vif *VAR_2, u16 VAR_3,
          const struct ieee80211_tx_queue_params *VAR_4)
{
 struct ar9170 *VAR_5 = VAR_1->priv;
 int VAR_6;

 FUNC_2(&VAR_5->mutex);
 FUNC_1(&VAR_5->edcf[VAR_0[VAR_3]], VAR_4, sizeof(*VAR_4));
 VAR_6 = FUNC_0(VAR_5);
 FUNC_3(&VAR_5->mutex);
 return VAR_6;
}
