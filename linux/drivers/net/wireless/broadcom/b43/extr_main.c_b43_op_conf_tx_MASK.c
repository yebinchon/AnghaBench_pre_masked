
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int mutex; TYPE_1__* qos_params; struct b43_wldev* current_dev; } ;
struct TYPE_4__ {int p; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int *,TYPE_1__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_5 (struct b43_wldev*) ;
 struct b43_wl* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int *,struct ieee80211_tx_queue_params const*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_3,
     struct ieee80211_vif *VAR_4, u16 VAR_5,
     const struct ieee80211_tx_queue_params *VAR_6)
{
 struct b43_wl *VAR_7 = FUNC_6(VAR_3);
 struct b43_wldev *VAR_8;
 unsigned int VAR_9 = (unsigned int)VAR_5;
 int VAR_10 = -VAR_1;

 if (VAR_9 >= FUNC_0(VAR_7->qos_params)) {



  return 0;
 }
 FUNC_1(FUNC_0(VAR_2) !=
       FUNC_0(VAR_7->qos_params));

 FUNC_8(&VAR_7->mutex);
 VAR_8 = VAR_7->current_dev;
 if (FUNC_10(!VAR_8 || (FUNC_5(VAR_8) < VAR_0)))
  goto out_unlock;

 FUNC_7(&(VAR_7->qos_params[VAR_9].p), VAR_6, sizeof(*VAR_6));
 FUNC_3(VAR_8);
 FUNC_4(VAR_8, &(VAR_7->qos_params[VAR_9].p),
         VAR_2[VAR_9]);
 FUNC_2(VAR_8);
 VAR_10 = 0;

out_unlock:
 FUNC_9(&VAR_7->mutex);

 return VAR_10;
}
