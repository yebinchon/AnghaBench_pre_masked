
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_2__ {int roc_notify; int timeout; } ;
struct ath10k {TYPE_1__ scan; int conf_mutex; int data_lock; } ;


 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->priv;

 FUNC_2(&VAR_2->conf_mutex);

 FUNC_4(&VAR_2->data_lock);
 VAR_2->scan.roc_notify = 0;
 FUNC_5(&VAR_2->data_lock);

 FUNC_0(VAR_2);

 FUNC_3(&VAR_2->conf_mutex);

 FUNC_1(&VAR_2->scan.timeout);

 return 0;
}
