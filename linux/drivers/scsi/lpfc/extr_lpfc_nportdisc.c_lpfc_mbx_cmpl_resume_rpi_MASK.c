
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {scalar_t__ drvrTimeout; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_4__ {struct lpfc_vport* vport; scalar_t__ ctx_ndlp; scalar_t__ ctx_buf; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_iocbq*) ;
 int FUNC_1 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_2, LPFC_MBOXQ_t *VAR_3)
{
 struct lpfc_vport *VAR_4;
 struct lpfc_iocbq *VAR_5;
 struct lpfc_nodelist *VAR_6;
 uint32_t VAR_7;

 VAR_5 = (struct lpfc_iocbq *)VAR_3->ctx_buf;
 VAR_6 = (struct lpfc_nodelist *)VAR_3->ctx_ndlp;
 VAR_4 = VAR_3->vport;
 VAR_7 = VAR_5->drvrTimeout;

 if (VAR_7 == VAR_0) {
  FUNC_2(VAR_4, VAR_5, VAR_6);
 } else {
  FUNC_1(VAR_4, VAR_1, VAR_5,
   VAR_6, ((void*)0));
 }
 FUNC_0(VAR_5);
 FUNC_3(VAR_3, VAR_2->mbox_mem_pool);
}
