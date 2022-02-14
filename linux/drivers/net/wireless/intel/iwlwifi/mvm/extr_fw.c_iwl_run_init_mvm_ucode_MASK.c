
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct iwl_nvm_data {int dummy; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm {int rfkill_safe_init_done; TYPE_6__* nvm_data; int notif_wait; TYPE_3__* trans; scalar_t__ nvm_file_name; int phy_db; int mutex; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_14__ {scalar_t__ init_dbg; } ;
struct TYPE_13__ {scalar_t__ nvm_version; TYPE_5__* bands; scalar_t__ channels; } ;
struct TYPE_12__ {int n_channels; int n_bitrates; TYPE_4__* bitrates; scalar_t__ channels; } ;
struct TYPE_11__ {int hw_value; } ;
struct TYPE_10__ {TYPE_2__* cfg; TYPE_1__* trans_cfg; } ;
struct TYPE_9__ {scalar_t__ nvm_ver; } ;
struct TYPE_8__ {scalar_t__ device_family; } ;


 int FUNC_0 (int const*) ;

 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,struct iwl_notification_wait*,int const*,int ,int ,int ) ;
 int FUNC_5 (struct iwl_mvm*) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*,int ) ;
 int FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*) ;
 int FUNC_12 (int *,struct iwl_notification_wait*) ;
 int FUNC_13 (struct iwl_mvm*,int) ;
 int FUNC_14 (struct iwl_mvm*) ;
 int FUNC_15 (struct iwl_mvm*,int ) ;
 int FUNC_16 (int *,struct iwl_notification_wait*,int ) ;
 int VAR_5 ;
 TYPE_7__ VAR_6 ;
 TYPE_6__* FUNC_17 (int,int ) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct iwl_mvm *VAR_7, bool VAR_8)
{
 struct iwl_notification_wait VAR_9;
 static const u16 VAR_10[] = {
  128,
  129
 };
 int VAR_11;

 if (FUNC_6(VAR_7))
  return FUNC_13(VAR_7, 1);

 FUNC_18(&VAR_7->mutex);

 VAR_7->rfkill_safe_init_done = 0;

 FUNC_4(&VAR_7->notif_wait,
       &VAR_9,
       VAR_10,
       FUNC_0(VAR_10),
       VAR_5,
       VAR_7->phy_db);


 VAR_11 = FUNC_9(VAR_7, VAR_3);
 if (VAR_11) {
  FUNC_2(VAR_7, "Failed to start INIT ucode: %d\n", VAR_11);
  goto remove_notif;
 }

 if (VAR_7->trans->trans_cfg->device_family < VAR_2) {
  VAR_11 = FUNC_10(VAR_7);
  if (VAR_11)
   goto remove_notif;
 }


 if (VAR_8) {
  VAR_11 = FUNC_11(VAR_7);
  if (VAR_11) {
   FUNC_2(VAR_7, "Failed to read NVM: %d\n", VAR_11);
   goto remove_notif;
  }
 }


 if (VAR_7->nvm_file_name)
  FUNC_8(VAR_7);

 FUNC_3(VAR_7->nvm_data->nvm_version < VAR_7->trans->cfg->nvm_ver,
    "Too old NVM version (0x%0x, required = 0x%0x)",
    VAR_7->nvm_data->nvm_version, VAR_7->trans->cfg->nvm_ver);





 if (FUNC_7(VAR_7)) {
  FUNC_1(VAR_7,
      "jump over all phy activities due to RF kill\n");
  goto remove_notif;
 }

 VAR_7->rfkill_safe_init_done = 1;


 VAR_11 = FUNC_15(VAR_7, FUNC_5(VAR_7));
 if (VAR_11)
  goto remove_notif;

 VAR_11 = FUNC_14(VAR_7);
 if (VAR_11) {
  FUNC_2(VAR_7, "Failed to run INIT calibrations: %d\n",
   VAR_11);
  goto remove_notif;
 }





 VAR_11 = FUNC_16(&VAR_7->notif_wait, &VAR_9,
        VAR_4);
 if (!VAR_11)
  goto out;

 if (FUNC_7(VAR_7)) {
  FUNC_1(VAR_7, "RFKILL while calibrating.\n");
  VAR_11 = 0;
 } else {
  FUNC_2(VAR_7, "Failed to run INIT calibrations: %d\n",
   VAR_11);
 }

 goto out;

remove_notif:
 FUNC_12(&VAR_7->notif_wait, &VAR_9);
out:
 VAR_7->rfkill_safe_init_done = 0;
 if (VAR_6.init_dbg && !VAR_7->nvm_data) {

  VAR_7->nvm_data = FUNC_17(sizeof(struct iwl_nvm_data) +
     sizeof(struct ieee80211_channel) +
     sizeof(struct ieee80211_rate),
     VAR_1);
  if (!VAR_7->nvm_data)
   return -VAR_0;
  VAR_7->nvm_data->bands[0].channels = VAR_7->nvm_data->channels;
  VAR_7->nvm_data->bands[0].n_channels = 1;
  VAR_7->nvm_data->bands[0].n_bitrates = 1;
  VAR_7->nvm_data->bands[0].bitrates =
   (void *)VAR_7->nvm_data->channels + 1;
  VAR_7->nvm_data->bands[0].bitrates->hw_value = 10;
 }

 return VAR_11;
}
