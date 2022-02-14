
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct ath10k* priv; } ;
struct cfg80211_wowlan {int dummy; } ;
struct ath10k {int conf_mutex; TYPE_2__* running_fw; } ;
struct TYPE_3__ {int fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,struct cfg80211_wowlan*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(struct ieee80211_hw *VAR_1,
     struct cfg80211_wowlan *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->priv;
 int VAR_4;

 FUNC_8(&VAR_3->conf_mutex);

 if (FUNC_0(!FUNC_10(VAR_0,
         VAR_3->running_fw->fw_file.fw_features))) {
  VAR_4 = 1;
  goto exit;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_3, "failed to clear wow wakeup events: %d\n",
       VAR_4);
  goto exit;
 }

 VAR_4 = FUNC_6(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_3, "failed to set wow wakeup events: %d\n",
       VAR_4);
  goto cleanup;
 }

 FUNC_2(VAR_3);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_3, "failed to start wow: %d\n", VAR_4);
  goto cleanup;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_3, "failed to suspend hif: %d\n", VAR_4);
  goto wakeup;
 }

 goto exit;

wakeup:
 FUNC_7(VAR_3);

cleanup:
 FUNC_4(VAR_3);

exit:
 FUNC_9(&VAR_3->conf_mutex);
 return VAR_4 ? 1 : 0;
}
