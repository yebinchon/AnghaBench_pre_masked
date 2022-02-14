
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {int state; int conf_mutex; TYPE_2__* running_fw; } ;
struct TYPE_3__ {int fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct ieee80211_hw *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->priv;
 int VAR_4;

 FUNC_5(&VAR_3->conf_mutex);

 if (FUNC_0(!FUNC_7(VAR_0,
         VAR_3->running_fw->fw_file.fw_features))) {
  VAR_4 = 1;
  goto exit;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3, "failed to resume hif: %d\n", VAR_4);
  goto exit;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3, "failed to wakeup from wow: %d\n", VAR_4);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3, "failed to cleanup nlo: %d\n", VAR_4);

exit:
 if (VAR_4) {
  switch (VAR_3->state) {
  case 132:
   VAR_3->state = 130;
   VAR_4 = 1;
   break;
  case 133:
  case 130:
  case 131:
  case 129:
  case 128:
   FUNC_2(VAR_3, "encountered unexpected device state %d on resume, cannot recover\n",
        VAR_3->state);
   VAR_4 = -VAR_1;
   break;
  }
 }

 FUNC_6(&VAR_3->conf_mutex);
 return VAR_4;
}
