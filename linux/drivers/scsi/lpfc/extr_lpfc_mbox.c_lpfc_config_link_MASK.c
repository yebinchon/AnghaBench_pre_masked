
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


struct lpfc_vport {int fc_myDID; } ;
struct TYPE_10__ {int bbscn_params; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ cfg_ack0; TYPE_2__ sli4_hba; scalar_t__ cfg_enable_bbcr; scalar_t__ bbcredit_support; int fc_crtov; int fc_altov; int fc_rttov; int fc_ratov; int fc_arbtov; int fc_edtov; int cfg_cr_count; scalar_t__ cfg_cr_delay; struct lpfc_vport* pport; } ;
struct TYPE_11__ {int cr; int ci; int cscn; int ack0_enable; int bbscn; int crtov; int altov; int rttov; int ratov; int arbtov; int edtov; int myId; int cr_count; scalar_t__ cr_delay; } ;
struct TYPE_12__ {TYPE_3__ varCfgLnk; } ;
struct TYPE_13__ {int mbxOwner; int mbxCommand; TYPE_4__ un; } ;
struct TYPE_9__ {TYPE_5__ mb; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
typedef TYPE_5__ MAILBOX_t ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_6__*,int ,int) ;

void
FUNC_2(struct lpfc_hba * VAR_4, LPFC_MBOXQ_t * VAR_5)
{
 struct lpfc_vport *VAR_6 = VAR_4->pport;
 MAILBOX_t *VAR_7 = &VAR_5->u.mb;
 FUNC_1(VAR_5, 0, sizeof (LPFC_MBOXQ_t));




 if (VAR_4->cfg_cr_delay && (VAR_4->sli_rev < VAR_0)) {
  VAR_7->un.varCfgLnk.cr = 1;
  VAR_7->un.varCfgLnk.ci = 1;
  VAR_7->un.varCfgLnk.cr_delay = VAR_4->cfg_cr_delay;
  VAR_7->un.varCfgLnk.cr_count = VAR_4->cfg_cr_count;
 }

 VAR_7->un.varCfgLnk.myId = VAR_6->fc_myDID;
 VAR_7->un.varCfgLnk.edtov = VAR_4->fc_edtov;
 VAR_7->un.varCfgLnk.arbtov = VAR_4->fc_arbtov;
 VAR_7->un.varCfgLnk.ratov = VAR_4->fc_ratov;
 VAR_7->un.varCfgLnk.rttov = VAR_4->fc_rttov;
 VAR_7->un.varCfgLnk.altov = VAR_4->fc_altov;
 VAR_7->un.varCfgLnk.crtov = VAR_4->fc_crtov;
 VAR_7->un.varCfgLnk.cscn = 0;
 if (VAR_4->bbcredit_support && VAR_4->cfg_enable_bbcr) {
  VAR_7->un.varCfgLnk.cscn = 1;
  VAR_7->un.varCfgLnk.bbscn = FUNC_0(VAR_3,
       &VAR_4->sli4_hba.bbscn_params);
 }

 if (VAR_4->cfg_ack0 && (VAR_4->sli_rev < VAR_0))
  VAR_7->un.varCfgLnk.ack0_enable = 1;

 VAR_7->mbxCommand = VAR_1;
 VAR_7->mbxOwner = VAR_2;
 return;
}
