
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
struct lpfc_vport {int load_flag; int fc_flag; int vpi; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; size_t nlp_rpi; int nlp_DID; int kref; int nlp_defer_did; } ;
struct TYPE_7__ {size_t* rpi_ids; int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_1__ sli4_hba; } ;
struct TYPE_8__ {void* mbox_cmpl; struct lpfc_nodelist* ctx_ndlp; struct lpfc_vport* vport; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_nodelist*) ;
 void* VAR_17 ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,size_t,int,int,...) ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct lpfc_hba*,TYPE_2__*,int ) ;
 int FUNC_6 (struct lpfc_hba*,int ,size_t,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;

int
FUNC_9(struct lpfc_vport *VAR_21, struct lpfc_nodelist *VAR_22)
{
 struct lpfc_hba *VAR_23 = VAR_21->phba;
 LPFC_MBOXQ_t *VAR_24;
 int VAR_25, VAR_26 = 1;
 uint16_t VAR_27;

 if (VAR_22->nlp_flag & VAR_15 ||
     VAR_22->nlp_flag & VAR_14) {
  if (VAR_22->nlp_flag & VAR_14)
   FUNC_4(VAR_21, VAR_4, VAR_6,
      "3366 RPI x%x needs to be "
      "unregistered nlp_flag x%x "
      "did x%x\n",
      VAR_22->nlp_rpi, VAR_22->nlp_flag,
      VAR_22->nlp_DID);




  if (VAR_22->nlp_flag & VAR_16) {
   FUNC_4(VAR_21, VAR_4, VAR_5,
      "1436 unreg_rpi SKIP UNREG x%x on "
      "NPort x%x deferred x%x  flg x%x "
      "Data: x%px\n",
      VAR_22->nlp_rpi, VAR_22->nlp_DID,
      VAR_22->nlp_defer_did,
      VAR_22->nlp_flag, VAR_22);
   goto out;
  }

  VAR_24 = FUNC_7(VAR_23->mbox_mem_pool, VAR_3);
  if (VAR_24) {

   VAR_27 = VAR_22->nlp_rpi;
   if (VAR_23->sli_rev == VAR_8)
    VAR_27 = VAR_23->sli4_hba.rpi_ids[VAR_22->nlp_rpi];

   FUNC_6(VAR_23, VAR_21->vpi, VAR_27, VAR_24);
   VAR_24->vport = VAR_21;
   if (VAR_22->nlp_flag & VAR_11) {
    VAR_24->ctx_ndlp = VAR_22;
    VAR_24->mbox_cmpl = VAR_17;
   } else {
    if (VAR_23->sli_rev == VAR_8 &&
        (!(VAR_21->load_flag & VAR_1)) &&
        (FUNC_0(VAR_20,
         &VAR_23->sli4_hba.sli_intf) >=
          VAR_7) &&
        (FUNC_1(&VAR_22->kref) > 0)) {
     VAR_24->ctx_ndlp = FUNC_2(VAR_22);
     VAR_24->mbox_cmpl =
      VAR_18;



     VAR_26 = 0;
    } else if (VAR_21->load_flag & VAR_1) {
     VAR_24->ctx_ndlp = ((void*)0);
     VAR_24->mbox_cmpl =
      VAR_19;
    } else {
     VAR_24->ctx_ndlp = VAR_22;
     VAR_24->mbox_cmpl =
      VAR_19;
    }
   }
   if (((VAR_22->nlp_DID & VAR_2) !=
       VAR_2) &&
       (!(VAR_21->fc_flag & VAR_0)))
    VAR_22->nlp_flag |= VAR_16;

   FUNC_4(VAR_21, VAR_4, VAR_5,
      "1433 unreg_rpi UNREG x%x on "
      "NPort x%x deferred flg x%x "
      "Data:x%px\n",
      VAR_22->nlp_rpi, VAR_22->nlp_DID,
      VAR_22->nlp_flag, VAR_22);

   VAR_25 = FUNC_5(VAR_23, VAR_24, VAR_10);
   if (VAR_25 == VAR_9) {
    FUNC_8(VAR_24, VAR_23->mbox_mem_pool);
    VAR_26 = 1;
   }
  }
  FUNC_3(VAR_23, VAR_22);
out:
  if (VAR_23->sli_rev != VAR_8)
   VAR_22->nlp_rpi = 0;
  VAR_22->nlp_flag &= ~VAR_15;
  VAR_22->nlp_flag &= ~VAR_13;
  if (VAR_26)
   VAR_22->nlp_flag &= ~VAR_12;
  return 1;
 }
 VAR_22->nlp_flag &= ~VAR_12;
 return 0;
}
