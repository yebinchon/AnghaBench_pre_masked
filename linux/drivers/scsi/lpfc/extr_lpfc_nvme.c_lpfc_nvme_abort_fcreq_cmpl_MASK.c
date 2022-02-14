
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_wcqe_complete {int dummy; } ;
struct TYPE_4__ {int abortIoTag; int abortContextTag; } ;
struct TYPE_5__ {TYPE_1__ acxri; } ;
struct TYPE_6__ {TYPE_2__ un; } ;
struct lpfc_iocbq {int iotag; TYPE_3__ iocb; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(struct lpfc_hba *VAR_5, struct lpfc_iocbq *VAR_6,
      struct lpfc_wcqe_complete *VAR_7)
{
 FUNC_1(VAR_5, VAR_0, VAR_1,
   "6145 ABORT_XRI_CN completing on rpi x%x "
   "original iotag x%x, abort cmd iotag x%x "
   "req_tag x%x, status x%x, hwstatus x%x\n",
   VAR_6->iocb.un.acxri.abortContextTag,
   VAR_6->iocb.un.acxri.abortIoTag,
   VAR_6->iotag,
   FUNC_0(VAR_3, VAR_7),
   FUNC_0(VAR_4, VAR_7),
   FUNC_0(VAR_2, VAR_7));
 FUNC_2(VAR_5, VAR_6);
}
