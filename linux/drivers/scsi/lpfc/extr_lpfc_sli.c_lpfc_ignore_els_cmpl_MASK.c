
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ulpWord; } ;
struct TYPE_4__ {scalar_t__ ulpCommand; int ulpTimeout; TYPE_1__ un; int ulpStatus; int ulpIoTag; } ;
struct lpfc_iocbq {TYPE_2__ iocb; } ;
struct lpfc_hba {int dummy; } ;
typedef TYPE_2__ IOCB_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_3, struct lpfc_iocbq *VAR_4,
       struct lpfc_iocbq *VAR_5)
{
 IOCB_t *VAR_6 = &VAR_5->iocb;


 FUNC_2(VAR_3, VAR_1, VAR_2,
   "0139 Ignoring ELS cmd tag x%x completion Data: "
   "x%x x%x x%x\n",
   VAR_6->ulpIoTag, VAR_6->ulpStatus,
   VAR_6->un.ulpWord[4], VAR_6->ulpTimeout);
 if (VAR_4->iocb.ulpCommand == VAR_0)
  FUNC_0(VAR_3, VAR_4);
 else
  FUNC_1(VAR_3, VAR_4);
 return;
}
