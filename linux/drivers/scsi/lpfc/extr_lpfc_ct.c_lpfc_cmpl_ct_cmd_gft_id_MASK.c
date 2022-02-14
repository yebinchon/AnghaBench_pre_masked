
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_8__ {int* fc4_types; } ;
struct TYPE_6__ {int PortId; } ;
struct TYPE_9__ {TYPE_3__ gft_acc; TYPE_1__ gft; } ;
struct lpfc_sli_ct_request {TYPE_4__ un; } ;
struct lpfc_nodelist {void* nlp_state; void* nlp_prev_state; int nlp_fc4_type; } ;
struct TYPE_7__ {int * ulpWord; } ;
struct TYPE_10__ {int ulpStatus; TYPE_2__ un; } ;
struct lpfc_iocbq {scalar_t__ context2; scalar_t__ context1; TYPE_5__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_5__ IOCB_t ;


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
 void* VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int ,int ,int) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_13, struct lpfc_iocbq *VAR_14,
    struct lpfc_iocbq *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_14->vport;
 IOCB_t *VAR_17 = &VAR_15->iocb;
 struct lpfc_dmabuf *VAR_18 = (struct lpfc_dmabuf *)VAR_14->context1;
 struct lpfc_dmabuf *VAR_19 = (struct lpfc_dmabuf *)VAR_14->context2;
 struct lpfc_sli_ct_request *VAR_20;
 int VAR_21;
 struct lpfc_nodelist *VAR_22;
 uint32_t VAR_23, VAR_24;

 VAR_21 = ((struct lpfc_sli_ct_request *)VAR_18->virt)->un.gft.PortId;
 VAR_21 = FUNC_0(VAR_21);

 FUNC_2(VAR_16, VAR_6,
         "GFT_ID cmpl: status:x%x/x%x did:x%x",
         VAR_17->ulpStatus, VAR_17->un.ulpWord[4], VAR_21);

 if (VAR_17->ulpStatus == VAR_2) {

  VAR_20 = (struct lpfc_sli_ct_request *)VAR_19->virt;
  VAR_23 = FUNC_0(VAR_20->un.gft_acc.fc4_types[0]);
  VAR_24 = FUNC_0(VAR_20->un.gft_acc.fc4_types[1]);

  FUNC_7(VAR_16, VAR_4, VAR_5,
     "6432 Process GFT_ID rsp for %08x "
     "Data %08x %08x %s %s\n",
     VAR_21, VAR_23, VAR_24,
     (VAR_23 & VAR_7) ?
      "FCP" : " ",
     (VAR_24 & VAR_7) ?
      "NVME" : " ");

  VAR_22 = FUNC_3(VAR_16, VAR_21);
  if (VAR_22) {




   if (VAR_23 & VAR_7)
    VAR_22->nlp_fc4_type |= VAR_8;
   if (VAR_24 & VAR_7)
    VAR_22->nlp_fc4_type |= VAR_9;
   FUNC_7(VAR_16, VAR_4, VAR_5,
      "3064 Setting ndlp x%px, DID x%06x "
      "with FC4 x%08x, Data: x%08x x%08x "
      "%d\n",
      VAR_22, VAR_21, VAR_22->nlp_fc4_type,
      VAR_0, VAR_1,
      VAR_22->nlp_state);

   if (VAR_22->nlp_state == VAR_12 &&
       VAR_22->nlp_fc4_type) {
    VAR_22->nlp_prev_state = VAR_12;

    FUNC_6(VAR_16, VAR_22,
         VAR_11);
    FUNC_5(VAR_16, VAR_22, 0);
   } else if (!VAR_22->nlp_fc4_type) {

    FUNC_7(VAR_16, VAR_4,
       VAR_5,
       "6443 Sending LOGO ndlp x%px,"
       "DID x%06x with fc4_type: "
       "x%08x, state: %d\n",
       VAR_22, VAR_21, VAR_22->nlp_fc4_type,
       VAR_22->nlp_state);
    FUNC_4(VAR_16, VAR_22, 0);
    VAR_22->nlp_prev_state = VAR_12;
    FUNC_6(VAR_16, VAR_22,
         VAR_10);
   }
  }
 } else
  FUNC_7(VAR_16, VAR_3, VAR_5,
     "3065 GFT_ID failed x%08x\n", VAR_17->ulpStatus);

 FUNC_1(VAR_13, VAR_14);
}
