
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_2__ {int timeout; } ;
struct ath10k {TYPE_1__ scan; int conf_mutex; } ;


 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
      struct ieee80211_vif *VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->priv;

 FUNC_2(&VAR_2->conf_mutex);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->conf_mutex);

 FUNC_1(&VAR_2->scan.timeout);
}
