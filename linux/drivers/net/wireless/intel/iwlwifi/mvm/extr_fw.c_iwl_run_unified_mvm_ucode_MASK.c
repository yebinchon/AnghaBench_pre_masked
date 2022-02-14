
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct iwl_nvm_access_complete_cmd {int init_flags; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm {int rfkill_safe_init_done; int notif_wait; int * nvm_data; int fw; TYPE_2__* trans; int nvm_sections; scalar_t__ nvm_file_name; int fwrt; int mutex; } ;
struct iwl_init_extended_cfg_cmd {int init_flags; } ;
typedef int nvm_complete ;
typedef int init_cfg ;
struct TYPE_5__ {TYPE_1__* cfg; } ;
struct TYPE_4__ {scalar_t__ tx_with_siso_diversity; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_mvm*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int * FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int *,struct iwl_notification_wait*,int const*,int ,int ,int *) ;
 int FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*,int ) ;
 int FUNC_12 (struct iwl_mvm*,int ,int ,int,struct iwl_nvm_access_complete_cmd*) ;
 int FUNC_13 (struct iwl_mvm*) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_15 (int *,struct iwl_notification_wait*) ;
 int VAR_12 ;
 int FUNC_16 (int *,struct iwl_notification_wait*,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct iwl_mvm *VAR_13, bool VAR_14)
{
 struct iwl_notification_wait VAR_15;
 struct iwl_nvm_access_complete_cmd VAR_16 = {};
 struct iwl_init_extended_cfg_cmd VAR_17 = {
  .init_flags = FUNC_6(FUNC_1(VAR_4)),
 };
 static const u16 VAR_18[] = {
  128,
 };
 int VAR_19;

 if (VAR_13->trans->cfg->tx_with_siso_diversity)
  VAR_17.init_flags |= FUNC_6(FUNC_1(VAR_5));

 FUNC_17(&VAR_13->mutex);

 VAR_13->rfkill_safe_init_done = 0;

 FUNC_9(&VAR_13->notif_wait,
       &VAR_15,
       VAR_18,
       FUNC_0(VAR_18),
       VAR_12,
       ((void*)0));

 FUNC_7(&VAR_13->fwrt, VAR_3, ((void*)0));


 VAR_19 = FUNC_11(VAR_13, VAR_7);
 if (VAR_19) {
  FUNC_3(VAR_13, "Failed to start RT ucode: %d\n", VAR_19);
  goto error;
 }
 FUNC_7(&VAR_13->fwrt, VAR_2,
          ((void*)0));




 VAR_19 = FUNC_12(VAR_13, FUNC_5(VAR_11,
      VAR_1),
       VAR_0,
       sizeof(VAR_17), &VAR_17);
 if (VAR_19) {
  FUNC_3(VAR_13, "Failed to run init config command: %d\n",
   VAR_19);
  goto error;
 }


 if (VAR_13->nvm_file_name) {
  FUNC_14(VAR_13->trans, VAR_13->nvm_file_name,
          VAR_13->nvm_sections);
  FUNC_10(VAR_13);
 }

 if (VAR_6 && VAR_14) {
  VAR_19 = FUNC_13(VAR_13);
  if (VAR_19) {
   FUNC_3(VAR_13, "Failed to read NVM: %d\n", VAR_19);
   goto error;
  }
 }

 VAR_19 = FUNC_12(VAR_13, FUNC_5(VAR_10,
      VAR_9),
       VAR_0,
       sizeof(VAR_16), &VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_13, "Failed to run complete NVM access: %d\n",
   VAR_19);
  goto error;
 }


 VAR_19 = FUNC_16(&VAR_13->notif_wait, &VAR_15,
        VAR_8);
 if (VAR_19)
  return VAR_19;


 if (!VAR_6 && VAR_14) {
  VAR_13->nvm_data = FUNC_8(VAR_13->trans, VAR_13->fw);
  if (FUNC_2(VAR_13->nvm_data)) {
   VAR_19 = FUNC_4(VAR_13->nvm_data);
   VAR_13->nvm_data = ((void*)0);
   FUNC_3(VAR_13, "Failed to read NVM: %d\n", VAR_19);
   return VAR_19;
  }
 }

 VAR_13->rfkill_safe_init_done = 1;

 return 0;

error:
 FUNC_15(&VAR_13->notif_wait, &VAR_15);
 return VAR_19;
}
