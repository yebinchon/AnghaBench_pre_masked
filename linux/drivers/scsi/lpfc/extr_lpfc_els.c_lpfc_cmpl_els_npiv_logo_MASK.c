
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; int num_disc_nodes; int unreg_vpi_cmpl; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct TYPE_4__ {int remoteID; } ;
struct TYPE_5__ {int * ulpWord; TYPE_1__ rcvels; } ;
struct TYPE_6__ {scalar_t__ ulpStatus; int ulpTimeout; TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_3__ iocb; scalar_t__ context1; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int ,scalar_t__,int ,int ,int ) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_7, struct lpfc_iocbq *VAR_8,
   struct lpfc_iocbq *VAR_9)
{
 struct lpfc_vport *VAR_10 = VAR_8->vport;
 IOCB_t *VAR_11;
 struct lpfc_nodelist *VAR_12;
 struct Scsi_Host *VAR_13 = FUNC_5(VAR_10);

 VAR_12 = (struct lpfc_nodelist *)VAR_8->context1;
 VAR_11 = &VAR_9->iocb;
 FUNC_1(VAR_10, VAR_5,
  "LOGO npiv cmpl:  status:x%x/x%x did:x%x",
  VAR_11->ulpStatus, VAR_11->un.ulpWord[4], VAR_11->un.rcvels.remoteID);

 FUNC_2(VAR_7, VAR_8);
 VAR_10->unreg_vpi_cmpl = VAR_6;


 FUNC_3(VAR_12);


 FUNC_4(VAR_10, VAR_3, VAR_4,
    "2928 NPIV LOGO completes to NPort x%x "
    "Data: x%x x%x x%x x%x\n",
    VAR_12->nlp_DID, VAR_11->ulpStatus, VAR_11->un.ulpWord[4],
    VAR_11->ulpTimeout, VAR_10->num_disc_nodes);

 if (VAR_11->ulpStatus == VAR_2) {
  FUNC_6(VAR_13->host_lock);
  VAR_10->fc_flag &= ~VAR_1;
  VAR_10->fc_flag &= ~VAR_0;
  FUNC_7(VAR_13->host_lock);
  FUNC_0(VAR_10);
 }
}
