
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


union lpfc_sli4_cfg_shdr {int response; } ;
typedef scalar_t__ uint32_t ;
struct lpfc_ras_fwlog {int ras_hwsupport; int ras_active; } ;
struct lpfc_hba {int mbox_mem_pool; struct lpfc_ras_fwlog ras_fwlog; } ;
struct TYPE_10__ {int cfg_shdr; } ;
struct TYPE_11__ {TYPE_1__ header; } ;
struct TYPE_12__ {TYPE_2__ ras_fwlog; } ;
struct TYPE_13__ {TYPE_3__ un; } ;
struct TYPE_15__ {scalar_t__ mbxStatus; } ;
struct TYPE_14__ {TYPE_4__ mqe; TYPE_6__ mb; } ;
struct TYPE_16__ {TYPE_5__ u; } ;
typedef TYPE_6__ MAILBOX_t ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (TYPE_7__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_5, LPFC_MBOXQ_t *VAR_6)
{
 MAILBOX_t *VAR_7;
 union lpfc_sli4_cfg_shdr *VAR_8;
 uint32_t VAR_9, VAR_10;
 struct lpfc_ras_fwlog *VAR_11 = &VAR_5->ras_fwlog;

 VAR_7 = &VAR_6->u.mb;

 VAR_8 = (union lpfc_sli4_cfg_shdr *)
  &VAR_6->u.mqe.un.ras_fwlog.header.cfg_shdr;
 VAR_9 = FUNC_0(VAR_4, &VAR_8->response);
 VAR_10 = FUNC_0(VAR_3, &VAR_8->response);

 if (VAR_7->mbxStatus != VAR_2 || VAR_9) {
  FUNC_1(VAR_5, VAR_0, VAR_1,
    "6188 FW LOG mailbox "
    "completed with status x%x add_status x%x,"
    " mbx status x%x\n",
    VAR_9, VAR_10, VAR_7->mbxStatus);

  VAR_11->ras_hwsupport = 0;
  goto disable_ras;
 }

 VAR_11->ras_active = 1;
 FUNC_3(VAR_6, VAR_5->mbox_mem_pool);

 return;

disable_ras:

 FUNC_2(VAR_5);
 FUNC_3(VAR_6, VAR_5->mbox_mem_pool);
}
