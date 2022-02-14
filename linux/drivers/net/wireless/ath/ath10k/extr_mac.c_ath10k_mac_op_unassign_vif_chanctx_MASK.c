
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_chanctx_conf {int dummy; } ;
struct ath10k_vif {int is_started; int is_up; int vdev_id; } ;
struct ath10k {int conf_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,struct ieee80211_chanctx_conf*,int ) ;
 int FUNC_2 (struct ath10k_vif*) ;
 int FUNC_3 (struct ath10k*,char*,int ,int) ;
 int FUNC_4 (struct ath10k*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3,
       struct ieee80211_chanctx_conf *VAR_4)
{
 struct ath10k *VAR_5 = VAR_2->priv;
 struct ath10k_vif *VAR_6 = (void *)VAR_3->drv_priv;
 int VAR_7;

 FUNC_5(&VAR_5->conf_mutex);

 FUNC_1(VAR_5, VAR_0,
     "mac chanctx unassign ptr %pK vdev_id %i\n",
     VAR_4, VAR_6->vdev_id);

 FUNC_0(!VAR_6->is_started);

 if (VAR_3->type == VAR_1) {
  FUNC_0(!VAR_6->is_up);

  VAR_7 = FUNC_4(VAR_5, VAR_6->vdev_id);
  if (VAR_7)
   FUNC_3(VAR_5, "failed to down monitor vdev %i: %d\n",
        VAR_6->vdev_id, VAR_7);

  VAR_6->is_up = 0;
 }

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  FUNC_3(VAR_5, "failed to stop vdev %i: %d\n",
       VAR_6->vdev_id, VAR_7);

 VAR_6->is_started = 0;

 FUNC_6(&VAR_5->conf_mutex);
}
