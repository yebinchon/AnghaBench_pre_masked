
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_vport {int num_disc_nodes; int fc_prli_sent; } ;
struct lpfc_nodelist {int fc4_prli_sent; int nlp_DID; int nlp_flag; } ;
struct TYPE_6__ {int * ulpWord; } ;
struct TYPE_7__ {TYPE_2__ un; scalar_t__ ulpStatus; } ;
struct TYPE_5__ {struct lpfc_iocbq* rsp_iocb; } ;
struct lpfc_iocbq {scalar_t__ context1; TYPE_3__ iocb; TYPE_1__ context_un; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;
 scalar_t__ FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int ,scalar_t__,int ,int ,...) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct lpfc_hba *VAR_6, struct lpfc_iocbq *VAR_7,
     struct lpfc_iocbq *VAR_8)
{
 struct lpfc_vport *VAR_9 = VAR_7->vport;
 struct Scsi_Host *VAR_10 = FUNC_7(VAR_9);
 IOCB_t *VAR_11;
 struct lpfc_nodelist *VAR_12;


 VAR_7->context_un.rsp_iocb = VAR_8;

 VAR_11 = &(VAR_8->iocb);
 VAR_12 = (struct lpfc_nodelist *) VAR_7->context1;
 FUNC_8(VAR_10->host_lock);
 VAR_12->nlp_flag &= ~VAR_5;


 VAR_9->fc_prli_sent--;
 VAR_12->fc4_prli_sent--;
 FUNC_9(VAR_10->host_lock);

 FUNC_0(VAR_9, VAR_3,
  "PRLI cmpl:       status:x%x/x%x did:x%x",
  VAR_11->ulpStatus, VAR_11->un.ulpWord[4],
  VAR_12->nlp_DID);


 FUNC_6(VAR_9, VAR_1, VAR_2,
    "0103 PRLI completes to NPort x%06x "
    "Data: x%x x%x x%x x%x\n",
    VAR_12->nlp_DID, VAR_11->ulpStatus, VAR_11->un.ulpWord[4],
    VAR_9->num_disc_nodes, VAR_12->fc4_prli_sent);


 if (FUNC_2(VAR_9))
  goto out;

 if (VAR_11->ulpStatus) {

  if (FUNC_4(VAR_6, VAR_7, VAR_8)) {

   goto out;
  }


  FUNC_6(VAR_9, VAR_0, VAR_2,
     "2754 PRLI failure DID:%06X Status:x%x/x%x, "
     "data: x%x\n",
     VAR_12->nlp_DID, VAR_11->ulpStatus,
     VAR_11->un.ulpWord[4], VAR_12->fc4_prli_sent);


  if (FUNC_5(VAR_11))
   goto out;
  else
   FUNC_1(VAR_9, VAR_12, VAR_7,
      VAR_4);
 } else {





  FUNC_1(VAR_9, VAR_12, VAR_7,
     VAR_4);
 }

out:
 FUNC_3(VAR_6, VAR_7);
 return;
}
