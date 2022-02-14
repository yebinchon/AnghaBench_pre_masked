
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct TYPE_4__ {int remoteID; } ;
struct TYPE_5__ {int * ulpWord; TYPE_1__ elsreq64; } ;
struct TYPE_6__ {int ulpTimeout; TYPE_2__ un; int ulpStatus; int ulpIoTag; } ;
struct lpfc_iocbq {TYPE_3__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_3, struct lpfc_iocbq *VAR_4,
    struct lpfc_iocbq *VAR_5)
{
 struct lpfc_vport *VAR_6 = VAR_4->vport;
 IOCB_t *VAR_7;

 VAR_7 = &VAR_5->iocb;

 FUNC_0(VAR_6, VAR_2,
  "ELS cmd cmpl:    status:x%x/x%x did:x%x",
  VAR_7->ulpStatus, VAR_7->un.ulpWord[4],
  VAR_7->un.elsreq64.remoteID);

 FUNC_3(VAR_6, VAR_0, VAR_1,
    "0106 ELS cmd tag x%x completes Data: x%x x%x x%x\n",
    VAR_7->ulpIoTag, VAR_7->ulpStatus,
    VAR_7->un.ulpWord[4], VAR_7->ulpTimeout);

 FUNC_1(VAR_6);
 FUNC_2(VAR_3, VAR_4);
 return;
}
