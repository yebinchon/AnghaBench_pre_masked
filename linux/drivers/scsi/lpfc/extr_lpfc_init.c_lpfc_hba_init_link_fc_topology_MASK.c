
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int lmt; scalar_t__ sli_rev; int mbox_mem_pool; int cfg_suppress_link_up; void* link_state; int HAregaddr; int HCregaddr; int cfg_link_speed; struct lpfc_vport* pport; } ;
struct TYPE_9__ {int mbxStatus; int mbxCommand; } ;
struct TYPE_8__ {TYPE_2__ mb; } ;
struct TYPE_10__ {int mbox_cmpl; struct lpfc_vport* vport; TYPE_1__ u; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


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
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,...) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int VAR_31 ;
 int FUNC_3 (struct lpfc_hba*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

int
FUNC_8(struct lpfc_hba *VAR_32, uint32_t VAR_33,
          uint32_t VAR_34)
{
 struct lpfc_vport *VAR_35 = VAR_32->pport;
 LPFC_MBOXQ_t *VAR_36;
 MAILBOX_t *VAR_37;
 int VAR_38;

 VAR_36 = FUNC_4(VAR_32->mbox_mem_pool, VAR_2);
 if (!VAR_36) {
  VAR_32->link_state = VAR_14;
  return -VAR_1;
 }
 VAR_37 = &VAR_36->u.mb;
 VAR_36->vport = VAR_35;

 if ((VAR_32->cfg_link_speed > VAR_27) ||
     ((VAR_32->cfg_link_speed == VAR_20) &&
      !(VAR_32->lmt & VAR_6)) ||
     ((VAR_32->cfg_link_speed == VAR_21) &&
      !(VAR_32->lmt & VAR_7)) ||
     ((VAR_32->cfg_link_speed == VAR_23) &&
      !(VAR_32->lmt & VAR_9)) ||
     ((VAR_32->cfg_link_speed == VAR_25) &&
      !(VAR_32->lmt & VAR_11)) ||
     ((VAR_32->cfg_link_speed == VAR_18) &&
      !(VAR_32->lmt & VAR_4)) ||
     ((VAR_32->cfg_link_speed == VAR_19) &&
      !(VAR_32->lmt & VAR_5)) ||
     ((VAR_32->cfg_link_speed == VAR_22) &&
      !(VAR_32->lmt & VAR_8)) ||
     ((VAR_32->cfg_link_speed == VAR_24) &&
      !(VAR_32->lmt & VAR_10))) {

  FUNC_1(VAR_32, VAR_3, VAR_13,
   "1302 Invalid speed for this board:%d "
   "Reset link speed to auto.\n",
   VAR_32->cfg_link_speed);
   VAR_32->cfg_link_speed = VAR_26;
 }
 FUNC_0(VAR_32, VAR_36, VAR_33, VAR_32->cfg_link_speed);
 VAR_36->mbox_cmpl = VAR_31;
 if (VAR_32->sli_rev < VAR_17)
  FUNC_2(VAR_32);
 VAR_38 = FUNC_3(VAR_32, VAR_36, VAR_34);
 if ((VAR_38 != VAR_28) && (VAR_38 != VAR_30)) {
  FUNC_1(VAR_32, VAR_3, VAR_12,
   "0498 Adapter failed to init, mbxCmd x%x "
   "INIT_LINK, mbxStatus x%x\n",
   VAR_37->mbxCommand, VAR_37->mbxStatus);
  if (VAR_32->sli_rev <= VAR_16) {

   FUNC_7(0, VAR_32->HCregaddr);
   FUNC_6(VAR_32->HCregaddr);

   FUNC_7(0xffffffff, VAR_32->HAregaddr);
   FUNC_6(VAR_32->HAregaddr);
  }
  VAR_32->link_state = VAR_14;
  if (VAR_38 != VAR_28 || VAR_34 == VAR_29)
   FUNC_5(VAR_36, VAR_32->mbox_mem_pool);
  return -VAR_0;
 }
 VAR_32->cfg_suppress_link_up = VAR_15;
 if (VAR_34 == VAR_29)
  FUNC_5(VAR_36, VAR_32->mbox_mem_pool);

 return 0;
}
