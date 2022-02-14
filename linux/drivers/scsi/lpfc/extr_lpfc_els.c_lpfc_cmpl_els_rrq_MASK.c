
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct lpfc_node_rrq {int xritag; int rxid; struct lpfc_nodelist* ndlp; } ;
struct TYPE_7__ {int remoteID; } ;
struct TYPE_9__ {int* ulpWord; TYPE_2__ elsreq64; } ;
struct TYPE_10__ {scalar_t__ ulpStatus; TYPE_4__ un; int ulpTimeout; int ulpIoTag; } ;
struct TYPE_6__ {struct lpfc_iocbq* rsp_iocb; struct lpfc_node_rrq* rrq; } ;
struct lpfc_iocbq {TYPE_5__ iocb; TYPE_1__ context_un; struct lpfc_vport* vport; } ;
struct lpfc_hba {TYPE_3__* pport; } ;
struct TYPE_8__ {int cfg_log_verbose; } ;
typedef TYPE_5__ IOCB_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_hba*,int ,struct lpfc_node_rrq*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (struct lpfc_vport*,int ,int,char*,int ,scalar_t__,int,...) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_7, struct lpfc_iocbq *VAR_8,
      struct lpfc_iocbq *VAR_9)
{
 struct lpfc_vport *VAR_10 = VAR_8->vport;
 IOCB_t *VAR_11;
 struct lpfc_nodelist *VAR_12;
 struct lpfc_node_rrq *VAR_13;


 VAR_13 = VAR_8->context_un.rrq;
 VAR_8->context_un.rsp_iocb = VAR_9;

 VAR_11 = &VAR_9->iocb;
 FUNC_2(VAR_10, VAR_4,
  "RRQ cmpl:      status:x%x/x%x did:x%x",
  VAR_11->ulpStatus, VAR_11->un.ulpWord[4],
  VAR_11->un.elsreq64.remoteID);

 VAR_12 = FUNC_4(VAR_10, VAR_11->un.elsreq64.remoteID);
 if (!VAR_12 || !FUNC_0(VAR_12) || VAR_12 != VAR_13->ndlp) {
  FUNC_5(VAR_10, VAR_1, VAR_3,
     "2882 RRQ completes to NPort x%x "
     "with no ndlp. Data: x%x x%x x%x\n",
     VAR_11->un.elsreq64.remoteID,
     VAR_11->ulpStatus, VAR_11->un.ulpWord[4],
     VAR_11->ulpIoTag);
  goto out;
 }


 FUNC_5(VAR_10, VAR_2, VAR_3,
    "2880 RRQ completes to NPort x%x "
    "Data: x%x x%x x%x x%x x%x\n",
    VAR_12->nlp_DID, VAR_11->ulpStatus, VAR_11->un.ulpWord[4],
    VAR_11->ulpTimeout, VAR_13->xritag, VAR_13->rxid);

 if (VAR_11->ulpStatus) {


  if (VAR_11->ulpStatus != VAR_0 ||
   (((VAR_11->un.ulpWord[4]) >> 16 != VAR_5) &&
   ((VAR_11->un.ulpWord[4]) >> 16 != VAR_6)) ||
   (VAR_7)->pport->cfg_log_verbose & VAR_3)
   FUNC_5(VAR_10, VAR_1, VAR_3,
     "2881 RRQ failure DID:%06X Status:x%x/x%x\n",
     VAR_12->nlp_DID, VAR_11->ulpStatus,
     VAR_11->un.ulpWord[4]);
 }
out:
 if (VAR_13)
  FUNC_1(VAR_7, VAR_13->xritag, VAR_13);
 FUNC_3(VAR_7, VAR_8);
 return;
}
