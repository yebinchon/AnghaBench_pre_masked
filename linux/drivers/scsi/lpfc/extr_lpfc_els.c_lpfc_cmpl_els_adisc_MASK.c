
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ num_disc_nodes; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct TYPE_6__ {int * ulpWord; } ;
struct TYPE_7__ {TYPE_2__ un; scalar_t__ ulpStatus; int ulpTimeout; } ;
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
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;
 scalar_t__ FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,int ,scalar_t__,int ,...) ;
 int FUNC_8 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct lpfc_hba *VAR_7, struct lpfc_iocbq *VAR_8,
      struct lpfc_iocbq *VAR_9)
{
 struct lpfc_vport *VAR_10 = VAR_8->vport;
 struct Scsi_Host *VAR_11 = FUNC_9(VAR_10);
 IOCB_t *VAR_12;
 struct lpfc_nodelist *VAR_13;
 int VAR_14;


 VAR_8->context_un.rsp_iocb = VAR_9;

 VAR_12 = &(VAR_9->iocb);
 VAR_13 = (struct lpfc_nodelist *) VAR_8->context1;

 FUNC_0(VAR_10, VAR_3,
  "ADISC cmpl:      status:x%x/x%x did:x%x",
  VAR_12->ulpStatus, VAR_12->un.ulpWord[4],
  VAR_13->nlp_DID);




 FUNC_10(VAR_11->host_lock);
 VAR_14 = (VAR_13->nlp_flag & VAR_6);
 VAR_13->nlp_flag &= ~(VAR_4 | VAR_6);
 FUNC_11(VAR_11->host_lock);

 FUNC_7(VAR_10, VAR_1, VAR_2,
    "0104 ADISC completes to NPort x%x "
    "Data: x%x x%x x%x x%x x%x\n",
    VAR_13->nlp_DID, VAR_12->ulpStatus, VAR_12->un.ulpWord[4],
    VAR_12->ulpTimeout, VAR_14, VAR_10->num_disc_nodes);

 if (FUNC_2(VAR_10)) {
  FUNC_10(VAR_11->host_lock);
  VAR_13->nlp_flag |= VAR_6;
  FUNC_11(VAR_11->host_lock);
  goto out;
 }

 if (VAR_12->ulpStatus) {

  if (FUNC_4(VAR_7, VAR_8, VAR_9)) {

   if (VAR_14) {
    FUNC_10(VAR_11->host_lock);
    VAR_13->nlp_flag |= VAR_6;
    FUNC_11(VAR_11->host_lock);
    FUNC_8(VAR_10);
   }
   goto out;
  }

  FUNC_7(VAR_10, VAR_0, VAR_2,
     "2755 ADISC failure DID:%06X Status:x%x/x%x\n",
     VAR_13->nlp_DID, VAR_12->ulpStatus,
     VAR_12->un.ulpWord[4]);

  if (!FUNC_5(VAR_12))
   FUNC_1(VAR_10, VAR_13, VAR_8,
      VAR_5);
 } else

  FUNC_1(VAR_10, VAR_13, VAR_8,
     VAR_5);


 if (VAR_14 && VAR_10->num_disc_nodes)
  FUNC_6(VAR_10);
out:
 FUNC_3(VAR_7, VAR_8);
 return;
}
