
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_rpi; int nlp_flag; int nlp_DID; } ;
struct TYPE_3__ {int * ulpWord; } ;
struct TYPE_4__ {TYPE_1__ un; int ulpStatus; } ;
struct lpfc_iocbq {int * context1; TYPE_2__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
typedef TYPE_2__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba *VAR_4, struct lpfc_iocbq *VAR_5,
         struct lpfc_iocbq *VAR_6)
{
 struct lpfc_nodelist *VAR_7 = (struct lpfc_nodelist *) VAR_5->context1;
 struct lpfc_vport *VAR_8 = VAR_5->vport;
 IOCB_t *VAR_9;

 VAR_9 = &VAR_6->iocb;
 FUNC_0(VAR_8, VAR_2,
  "ACC LOGO cmpl:   status:x%x/x%x did:x%x",
  VAR_9->ulpStatus, VAR_9->un.ulpWord[4], VAR_7->nlp_DID);

 FUNC_3(VAR_8, VAR_0, VAR_1,
    "0109 ACC to LOGO completes to NPort x%x "
    "Data: x%x x%x x%x\n",
    VAR_7->nlp_DID, VAR_7->nlp_flag, VAR_7->nlp_state,
    VAR_7->nlp_rpi);

 if (VAR_7->nlp_state == VAR_3) {

  if (!FUNC_2(VAR_7)) {



   FUNC_4(VAR_8, VAR_7);
  } else {



   VAR_5->context1 = ((void*)0);
  }
 }





 FUNC_1(VAR_4, VAR_5);
}
