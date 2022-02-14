
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_6__ {struct lpfc_vport* vport; int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_vport*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(struct lpfc_hba *VAR_4, struct lpfc_vport *VAR_5)
{
 LPFC_MBOXQ_t *VAR_6;

 VAR_6 = FUNC_2(VAR_4->mbox_mem_pool, VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_5, VAR_6);
  VAR_6->mbox_cmpl = VAR_3;
  VAR_6->vport = VAR_5;
  if (FUNC_1(VAR_4, VAR_6, VAR_2)
     == VAR_1) {
   FUNC_3(VAR_6, VAR_4->mbox_mem_pool);
  }
 }
}
