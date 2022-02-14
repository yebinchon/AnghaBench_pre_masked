
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm_alive_data {int scd_base_addr; int valid; } ;
struct TYPE_11__ {int cur_fw_img; } ;
struct iwl_mvm {TYPE_4__ fwrt; int status; TYPE_2__* queue_info; struct iwl_trans* trans; int notif_wait; TYPE_3__* fw; } ;
struct fw_img {int dummy; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_10__ {int ucode_capa; } ;
struct TYPE_9__ {int tid_bitmap; } ;
struct TYPE_8__ {scalar_t__ device_family; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*) ;
 struct fw_img* FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int *,struct iwl_notification_wait*,int const*,int ,int ,struct iwl_mvm_alive_data*) ;
 scalar_t__ FUNC_12 (struct iwl_mvm*) ;
 int FUNC_13 (struct iwl_trans*,int ) ;
 int FUNC_14 (struct iwl_trans*,int ) ;
 int FUNC_15 (int *,struct iwl_notification_wait*) ;
 int FUNC_16 (struct iwl_trans*,int ) ;
 int FUNC_17 (struct iwl_trans*,struct fw_img const*,int) ;
 int FUNC_18 (int *,struct iwl_notification_wait*,int ) ;
 int FUNC_19 (TYPE_2__**,int ,int) ;
 int FUNC_20 (int ,int *) ;

__attribute__((used)) static int FUNC_21(struct iwl_mvm *VAR_20,
      enum iwl_ucode_type VAR_21)
{
 struct iwl_notification_wait VAR_22;
 struct iwl_mvm_alive_data VAR_23 = {};
 const struct fw_img *VAR_24;
 int VAR_25;
 enum iwl_ucode_type VAR_26 = VAR_20->fwrt.cur_fw_img;
 static const u16 VAR_27[] = { 128 };
 bool VAR_28 =
  VAR_21 == VAR_10 || FUNC_12(VAR_20);

 if (VAR_21 == VAR_11 &&
     FUNC_6(VAR_20->fw, VAR_3) &&
     !(FUNC_5(&VAR_20->fw->ucode_capa,
     VAR_13)))
  VAR_24 = FUNC_10(VAR_20->fw, VAR_12);
 else
  VAR_24 = FUNC_10(VAR_20->fw, VAR_21);
 if (FUNC_3(!VAR_24))
  return -VAR_0;
 FUNC_8(&VAR_20->fwrt, VAR_21);
 FUNC_4(VAR_9, &VAR_20->status);

 FUNC_11(&VAR_20->notif_wait, &VAR_22,
       VAR_27, FUNC_0(VAR_27),
       VAR_19, &VAR_23);






 VAR_25 = FUNC_17(VAR_20->trans, VAR_24, VAR_28);
 if (VAR_25) {
  FUNC_8(&VAR_20->fwrt, VAR_26);
  FUNC_15(&VAR_20->notif_wait, &VAR_22);
  return VAR_25;
 }





 VAR_25 = FUNC_18(&VAR_20->notif_wait, &VAR_22,
        VAR_14);
 if (VAR_25) {
  struct iwl_trans *VAR_29 = VAR_20->trans;

  if (VAR_25 == -VAR_2)
   FUNC_7(&VAR_20->fwrt,
       VAR_4);

  if (VAR_29->trans_cfg->device_family >= VAR_5)
   FUNC_2(VAR_20,
    "SecBoot CPU1 Status: 0x%x, CPU2 Status: 0x%x\n",
    FUNC_14(VAR_29, VAR_17),
    FUNC_14(VAR_29,
         VAR_18));
  else if (VAR_29->trans_cfg->device_family >=
    VAR_6)
   FUNC_2(VAR_20,
    "SecBoot CPU1 Status: 0x%x, CPU2 Status: 0x%x\n",
    FUNC_13(VAR_29, VAR_15),
    FUNC_13(VAR_29, VAR_16));
  FUNC_8(&VAR_20->fwrt, VAR_26);
  return VAR_25;
 }

 if (!VAR_23.valid) {
  FUNC_2(VAR_20, "Loaded ucode is not valid!\n");
  FUNC_8(&VAR_20->fwrt, VAR_26);
  return -VAR_1;
 }

 FUNC_16(VAR_20->trans, VAR_23.scd_base_addr);
 FUNC_19(&VAR_20->queue_info, 0, sizeof(VAR_20->queue_info));






 VAR_20->queue_info[VAR_8].tid_bitmap =
  FUNC_1(VAR_7 + 2);

 FUNC_20(VAR_9, &VAR_20->status);




 return 0;
}
