
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_4__ {int sub_ctxt_tag; } ;
struct TYPE_5__ {TYPE_1__ asyncstat; } ;
struct TYPE_6__ {int ulpStatus; int ulpContext; TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_3__ iocb; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 struct lpfc_vport* FUNC_1 (struct lpfc_hba*,int ) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,...) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba *VAR_4,
     struct lpfc_iocbq *VAR_5)
{
 struct lpfc_nodelist *VAR_6 = ((void*)0);
 uint16_t VAR_7 = 0, VAR_8 = 0;
 struct lpfc_vport *VAR_9 = ((void*)0);


 VAR_8 = VAR_5->iocb.un.asyncstat.sub_ctxt_tag;
 VAR_7 = VAR_5->iocb.ulpContext;

 FUNC_3(VAR_4, VAR_2, VAR_3,
   "3092 Port generated ABTS async event "
   "on vpi %d rpi %d status 0x%x\n",
   VAR_8, VAR_7, VAR_5->iocb.ulpStatus);

 VAR_9 = FUNC_1(VAR_4, VAR_8);
 if (!VAR_9)
  goto err_exit;
 VAR_6 = FUNC_2(VAR_9, VAR_7);
 if (!VAR_6 || !FUNC_0(VAR_6))
  goto err_exit;

 if (VAR_5->iocb.ulpStatus == VAR_0)
  FUNC_4(VAR_9, VAR_6);
 return;

 err_exit:
 FUNC_3(VAR_4, VAR_1, VAR_3,
   "3095 Event Context not found, no "
   "action on vpi %d rpi %d status 0x%x, reason 0x%x\n",
   VAR_5->iocb.ulpContext, VAR_5->iocb.ulpStatus,
   VAR_8, VAR_7);
}
