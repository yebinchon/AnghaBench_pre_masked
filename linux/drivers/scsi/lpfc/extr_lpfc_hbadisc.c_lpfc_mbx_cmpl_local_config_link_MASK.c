
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int bbRcvSizeMsb; } ;
struct TYPE_11__ {TYPE_2__ cmn; } ;
struct lpfc_vport {int fc_flag; scalar_t__ port_state; TYPE_3__ fc_sparam; } ;
struct TYPE_9__ {int bbscn_params; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hba_flag; int link_flag; scalar_t__ fc_topology; int mbox_mem_pool; TYPE_1__ sli4_hba; scalar_t__ cfg_enable_bbcr; scalar_t__ bbcredit_support; } ;
struct TYPE_12__ {scalar_t__ mbxStatus; } ;
struct TYPE_13__ {TYPE_4__ mb; } ;
struct TYPE_14__ {TYPE_5__ u; struct lpfc_vport* vport; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int VAR_11 ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (TYPE_6__*,int ) ;

void
FUNC_8(struct lpfc_hba *VAR_12, LPFC_MBOXQ_t *VAR_13)
{
 struct lpfc_vport *VAR_14 = VAR_13->vport;
 uint8_t VAR_15 = 0;

 if (VAR_13->u.mb.mbxStatus)
  goto out;

 FUNC_7(VAR_13, VAR_12->mbox_mem_pool);


 if ((VAR_12->sli_rev == VAR_8) &&
     !(VAR_12->hba_flag & VAR_3) &&
     (VAR_12->link_flag & VAR_10))
  return;

 if (VAR_12->fc_topology == VAR_9 &&
     VAR_14->fc_flag & VAR_2 &&
     !(VAR_14->fc_flag & VAR_0)) {




   FUNC_6(VAR_14);
   return;
 }




 if (VAR_14->port_state != VAR_7) {
  if (VAR_12->bbcredit_support && VAR_12->cfg_enable_bbcr) {
   VAR_15 = FUNC_0(VAR_11,
           &VAR_12->sli4_hba.bbscn_params);
   VAR_14->fc_sparam.cmn.bbRcvSizeMsb &= 0xf;
   VAR_14->fc_sparam.cmn.bbRcvSizeMsb |= (VAR_15 << 4);
  }
  FUNC_2(VAR_14);
 } else if (VAR_14->fc_flag & VAR_1) {
  FUNC_1(VAR_14);
 }
 return;

out:
 FUNC_5(VAR_14, VAR_4, VAR_6,
    "0306 CONFIG_LINK mbxStatus error x%x "
    "HBA state x%x\n",
    VAR_13->u.mb.mbxStatus, VAR_14->port_state);
 FUNC_7(VAR_13, VAR_12->mbox_mem_pool);

 FUNC_4(VAR_12);

 FUNC_5(VAR_14, VAR_4, VAR_5,
    "0200 CONFIG_LINK bad hba state x%x\n",
    VAR_14->port_state);

 FUNC_3(VAR_12, VAR_14);
 return;
}
