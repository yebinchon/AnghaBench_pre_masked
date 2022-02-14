
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {int conf_mutex; int dev; TYPE_2__* running_fw; } ;
struct TYPE_3__ {int fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void FUNC_4(struct ieee80211_hw *VAR_1, bool VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->priv;

 FUNC_1(&VAR_3->conf_mutex);
 if (FUNC_3(VAR_0,
       VAR_3->running_fw->fw_file.fw_features)) {
  FUNC_0(VAR_3->dev, VAR_2);
 }
 FUNC_2(&VAR_3->conf_mutex);
}
