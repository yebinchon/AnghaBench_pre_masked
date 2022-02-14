
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbg_tpg {int workqueue; struct tcm_usbg_nexus* tpg_nexus; } ;
struct TYPE_2__ {void* tag; } ;
struct usbg_cmd {int is_read; int work; int bot_tag; TYPE_1__ se_cmd; void* data_len; int unpacked_lun; int prio_attr; int cmd_buf; } ;
struct tcm_usbg_nexus {int dummy; } ;
struct f_uas {struct usbg_tpg* tpg; } ;
struct bulk_cb_wrap {scalar_t__ Signature; int Length; int Flags; int DataTransferLength; int Lun; int Tag; int CDB; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct usbg_cmd*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;
 struct usbg_cmd* FUNC_7 (struct f_uas*,struct tcm_usbg_nexus*,int ) ;

__attribute__((used)) static int FUNC_8(struct f_uas *VAR_7,
  void *VAR_8, unsigned int VAR_9)
{
 struct bulk_cb_wrap *VAR_10 = VAR_8;
 struct usbg_cmd *VAR_11;
 struct usbg_tpg *VAR_12 = VAR_7->tpg;
 struct tcm_usbg_nexus *VAR_13;
 u32 VAR_14;

 if (VAR_10->Signature != FUNC_2(VAR_4)) {
  FUNC_5("Wrong signature on CBW\n");
  return -VAR_0;
 }
 if (VAR_9 != 31) {
  FUNC_5("Wrong length for CBW\n");
  return -VAR_0;
 }

 VAR_14 = VAR_10->Length;
 if (VAR_14 < 1 || VAR_14 > 16)
  return -VAR_0;

 VAR_13 = VAR_12->tpg_nexus;
 if (!VAR_13) {
  FUNC_5("Missing nexus, ignoring command\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_7(VAR_7, VAR_13, VAR_10->Tag);
 if (FUNC_1(VAR_11)) {
  FUNC_5("usbg_get_cmd failed\n");
  return -VAR_2;
 }
 FUNC_4(VAR_11->cmd_buf, VAR_10->CDB, VAR_14);

 VAR_11->bot_tag = VAR_10->Tag;
 VAR_11->prio_attr = VAR_3;
 VAR_11->unpacked_lun = VAR_10->Lun;
 VAR_11->is_read = VAR_10->Flags & VAR_5 ? 1 : 0;
 VAR_11->data_len = FUNC_3(VAR_10->DataTransferLength);
 VAR_11->se_cmd.tag = FUNC_3(VAR_11->bot_tag);

 FUNC_0(&VAR_11->work, VAR_6);
 FUNC_6(VAR_12->workqueue, &VAR_11->work);

 return 0;
}
