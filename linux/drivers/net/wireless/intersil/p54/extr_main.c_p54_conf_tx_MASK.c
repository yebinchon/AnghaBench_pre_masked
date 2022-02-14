
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct p54_common {int conf_mutex; int * qos_params; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct p54_common*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1, u16 VAR_2,
         const struct ieee80211_tx_queue_params *VAR_3)
{
 struct p54_common *VAR_4 = VAR_0->priv;
 int VAR_5;

 FUNC_1(&VAR_4->conf_mutex);
 FUNC_0(VAR_4->qos_params[VAR_2], VAR_3->aifs,
        VAR_3->cw_min, VAR_3->cw_max, VAR_3->txop);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(&VAR_4->conf_mutex);
 return VAR_5;
}
