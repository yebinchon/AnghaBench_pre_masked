
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_key_conf {scalar_t__ cipher; int flags; int keyidx; } ;
struct ath10k_vif {scalar_t__ vdev_type; int vdev_id; TYPE_3__* ar; } ;
struct ath10k {int dummy; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_5__ {TYPE_1__* vdev_param; } ;
struct TYPE_6__ {TYPE_2__ wmi; } ;
struct TYPE_4__ {int def_keyid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ath10k*,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_6,
     struct ath10k_vif *VAR_7,
     enum set_key_cmd VAR_8,
     struct ieee80211_key_conf *VAR_9)
{
 u32 VAR_10 = VAR_7->ar->wmi.vdev_param->def_keyid;
 int VAR_11;
 if (VAR_7->vdev_type != VAR_4 &&
     VAR_7->vdev_type != VAR_5)
  return;

 if (VAR_9->cipher == VAR_3)
  return;

 if (VAR_9->cipher == VAR_2)
  return;

 if (VAR_9->flags & VAR_0)
  return;

 if (VAR_8 != VAR_1)
  return;

 VAR_11 = FUNC_1(VAR_6, VAR_7->vdev_id, VAR_10,
     VAR_9->keyidx);
 if (VAR_11)
  FUNC_0(VAR_6, "failed to set vdev %i group key as default key: %d\n",
       VAR_7->vdev_id, VAR_11);
}
