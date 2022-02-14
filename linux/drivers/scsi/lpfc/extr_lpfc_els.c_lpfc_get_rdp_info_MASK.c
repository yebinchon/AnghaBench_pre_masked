
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_rdp_context {TYPE_1__* ndlp; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_8__ {struct lpfc_rdp_context* ctx_ndlp; int mbox_cmpl; int vport; } ;
struct TYPE_7__ {int vport; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*,TYPE_2__*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_7, struct lpfc_rdp_context *VAR_8)
{
 LPFC_MBOXQ_t *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_9 = FUNC_3(VAR_7->mbox_mem_pool, VAR_0);
 if (!VAR_9) {
  FUNC_0(VAR_7, VAR_1, VAR_3 | VAR_2,
    "7105 failed to allocate mailbox memory");
  return 1;
 }

 if (FUNC_1(VAR_7, VAR_9))
  goto prep_mbox_fail;
 VAR_9->vport = VAR_8->ndlp->vport;
 VAR_9->mbox_cmpl = VAR_6;
 VAR_9->ctx_ndlp = (struct lpfc_rdp_context *)VAR_8;
 VAR_10 = FUNC_2(VAR_7, VAR_9, VAR_5);
 if (VAR_10 == VAR_4)
  goto issue_mbox_fail;

 return 0;

prep_mbox_fail:
issue_mbox_fail:
 FUNC_4(VAR_9, VAR_7->mbox_mem_pool);
 return 1;
}
