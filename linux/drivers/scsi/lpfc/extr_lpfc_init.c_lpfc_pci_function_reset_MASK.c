
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct lpfc_register {int word0; } ;
union lpfc_sli4_cfg_shdr {struct lpfc_register response; } ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_18__ {int CTRLregaddr; int ERR2regaddr; int ERR1regaddr; int STATUSregaddr; } ;
struct TYPE_19__ {TYPE_6__ if_type2; } ;
struct TYPE_20__ {TYPE_7__ u; struct lpfc_register sli_intf; } ;
struct lpfc_hba {int pcidev; TYPE_8__ sli4_hba; void** work_status; int mbox_mem_pool; } ;
struct TYPE_13__ {int cfg_shdr; } ;
struct TYPE_14__ {TYPE_1__ header; } ;
struct TYPE_15__ {TYPE_2__ sli4_config; } ;
struct TYPE_16__ {TYPE_3__ un; } ;
struct TYPE_17__ {TYPE_4__ mqe; } ;
struct TYPE_21__ {TYPE_5__ u; } ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,struct lpfc_register*) ;
 int FUNC_1 (int ,struct lpfc_register*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_9__*,int ,int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_5 (struct lpfc_hba*,TYPE_9__*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_9__*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int *) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

int
FUNC_12(struct lpfc_hba *VAR_21)
{
 LPFC_MBOXQ_t *VAR_22;
 uint32_t VAR_23 = 0, VAR_24;
 uint32_t VAR_25, VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28 = 0;
 union lpfc_sli4_cfg_shdr *VAR_29;
 struct lpfc_register VAR_30;
 uint16_t VAR_31;

 VAR_24 = FUNC_0(VAR_16, &VAR_21->sli4_hba.sli_intf);
 switch (VAR_24) {
 case 131:
  VAR_22 = (LPFC_MBOXQ_t *) FUNC_6(VAR_21->mbox_mem_pool,
             VAR_3);
  if (!VAR_22) {
   FUNC_2(VAR_21, VAR_4, VAR_5,
     "0494 Unable to allocate memory for "
     "issuing SLI_FUNCTION_RESET mailbox "
     "command\n");
   return -VAR_1;
  }


  FUNC_4(VAR_21, VAR_22, VAR_7,
     VAR_6, 0,
     VAR_8);
  VAR_23 = FUNC_5(VAR_21, VAR_22, VAR_11);
  VAR_29 = (union lpfc_sli4_cfg_shdr *)
   &VAR_22->u.mqe.un.sli4_config.header.cfg_shdr;
  VAR_25 = FUNC_0(VAR_15, &VAR_29->response);
  VAR_26 = FUNC_0(VAR_14,
      &VAR_29->response);
  if (VAR_23 != VAR_12)
   FUNC_7(VAR_22, VAR_21->mbox_mem_pool);
  if (VAR_25 || VAR_26 || VAR_23) {
   FUNC_2(VAR_21, VAR_4, VAR_5,
     "0495 SLI_FUNCTION_RESET mailbox "
     "failed with status x%x add_status x%x,"
     " mbx status x%x\n",
     VAR_25, VAR_26, VAR_23);
   VAR_23 = -VAR_2;
  }
  break;
 case 129:
 case 128:
wait:





  for (VAR_27 = 0; VAR_27 < 1500; VAR_27++) {
   if (FUNC_3(VAR_21->sli4_hba.u.if_type2.
    STATUSregaddr, &VAR_30.word0)) {
    VAR_23 = -VAR_0;
    goto out;
   }
   if (FUNC_0(VAR_19, &VAR_30))
    break;
   FUNC_8(20);
  }

  if (!FUNC_0(VAR_19, &VAR_30)) {
   VAR_21->work_status[0] = FUNC_10(
    VAR_21->sli4_hba.u.if_type2.ERR1regaddr);
   VAR_21->work_status[1] = FUNC_10(
    VAR_21->sli4_hba.u.if_type2.ERR2regaddr);
   FUNC_2(VAR_21, VAR_4, VAR_5,
     "2890 Port not ready, port status reg "
     "0x%x error 1=0x%x, error 2=0x%x\n",
     VAR_30.word0,
     VAR_21->work_status[0],
     VAR_21->work_status[1]);
   VAR_23 = -VAR_0;
   goto out;
  }

  if (!VAR_28) {



   VAR_30.word0 = 0;
   FUNC_1(VAR_17, &VAR_30,
          VAR_10);
   FUNC_1(VAR_18, &VAR_30,
          VAR_9);
   FUNC_11(VAR_30.word0, VAR_21->sli4_hba.u.if_type2.
          CTRLregaddr);

   FUNC_9(VAR_21->pcidev,
          VAR_13, &VAR_31);

   VAR_28 = 1;
   FUNC_8(20);
   goto wait;
  } else if (FUNC_0(VAR_20, &VAR_30)) {
   VAR_23 = -VAR_0;
   goto out;
  }
  break;

 case 130:
 default:
  break;
 }

out:

 if (VAR_23) {
  FUNC_2(VAR_21, VAR_4, VAR_5,
    "3317 HBA not functional: IP Reset Failed "
    "try: echo fw_reset > board_mode\n");
  VAR_23 = -VAR_0;
 }

 return VAR_23;
}
