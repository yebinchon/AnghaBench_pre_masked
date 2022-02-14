
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {int vpi; } ;
struct lpfc_nodelist {scalar_t__ nlp_defer_did; int nlp_flag; int nlp_DID; int nlp_rpi; int nlp_usg_map; } ;
struct TYPE_9__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_3__ sli4_hba; } ;
struct TYPE_7__ {scalar_t__ mbxCommand; } ;
struct TYPE_8__ {TYPE_1__ mb; } ;
struct TYPE_10__ {TYPE_2__ u; struct lpfc_nodelist* ctx_ndlp; struct lpfc_vport* vport; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int,char*,int ,int ,scalar_t__,struct lpfc_nodelist*,...) ;
 int VAR_10 ;
 int FUNC_5 (TYPE_4__*,int ) ;

void
FUNC_6(struct lpfc_hba *VAR_11, LPFC_MBOXQ_t *VAR_12)
{
 struct lpfc_vport *VAR_13 = VAR_12->vport;
 struct lpfc_nodelist *VAR_14;

 VAR_14 = VAR_12->ctx_ndlp;
 if (VAR_12->u.mb.mbxCommand == VAR_6) {
  if (VAR_11->sli_rev == VAR_5 &&
      (FUNC_1(VAR_10,
       &VAR_11->sli4_hba.sli_intf) >=
       VAR_4)) {
   if (VAR_14) {
    FUNC_4(
     VAR_13, VAR_0, VAR_2 | VAR_3,
      "0010 UNREG_LOGIN vpi:%x "
      "rpi:%x DID:%x defer x%x flg x%x "
      "map:%x %px\n",
      VAR_13->vpi, VAR_14->nlp_rpi,
      VAR_14->nlp_DID, VAR_14->nlp_defer_did,
      VAR_14->nlp_flag,
      VAR_14->nlp_usg_map, VAR_14);
    VAR_14->nlp_flag &= ~VAR_8;
    FUNC_3(VAR_14);




    if ((VAR_14->nlp_flag & VAR_9) &&
        (VAR_14->nlp_defer_did !=
        VAR_7)) {
     FUNC_4(
      VAR_13, VAR_0, VAR_1,
      "4111 UNREG cmpl deferred "
      "clr x%x on "
      "NPort x%x Data: x%x x%px\n",
      VAR_14->nlp_rpi, VAR_14->nlp_DID,
      VAR_14->nlp_defer_did, VAR_14);
     VAR_14->nlp_flag &= ~VAR_9;
     VAR_14->nlp_defer_did =
      VAR_7;
     FUNC_2(
      VAR_13, VAR_14->nlp_DID, 0);
    } else {
     FUNC_0(VAR_13, VAR_14);
    }
   }
  }
 }

 FUNC_5(VAR_12, VAR_11->mbox_mem_pool);
}
