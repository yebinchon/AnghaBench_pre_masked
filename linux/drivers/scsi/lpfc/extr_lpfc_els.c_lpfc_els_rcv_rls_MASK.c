
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_15__ {int lsRjtError; TYPE_4__ b; } ;
struct ls_rjt {TYPE_5__ un; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct TYPE_11__ {int ox_id; } ;
struct TYPE_12__ {TYPE_1__ rcvsli3; } ;
struct TYPE_13__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {TYPE_3__ iocb; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_16__ {int mbox_cmpl; struct lpfc_vport* vport; int ctx_ndlp; void* ctx_buf; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,TYPE_6__*,int ) ;
 TYPE_6__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_8, struct lpfc_iocbq *VAR_9,
   struct lpfc_nodelist *VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_8->phba;
 LPFC_MBOXQ_t *VAR_12;
 struct ls_rjt VAR_13;

 if ((VAR_10->nlp_state != VAR_6) &&
     (VAR_10->nlp_state != VAR_5))

  goto reject_out;

 VAR_12 = FUNC_5(VAR_11->mbox_mem_pool, VAR_0);
 if (VAR_12) {
  FUNC_3(VAR_11, VAR_12);
  VAR_12->ctx_buf = (void *)((unsigned long)
   ((VAR_9->iocb.unsli3.rcvsli3.ox_id << 16) |
   VAR_9->iocb.ulpContext));
  VAR_12->ctx_ndlp = FUNC_1(VAR_10);
  VAR_12->vport = VAR_8;
  VAR_12->mbox_cmpl = VAR_7;
  if (FUNC_4(VAR_11, VAR_12, VAR_4)
   != VAR_3)

   return 0;



  FUNC_2(VAR_10);
  FUNC_6(VAR_12, VAR_11->mbox_mem_pool);
 }
reject_out:

 VAR_13.un.b.lsRjtRsvd0 = 0;
 VAR_13.un.b.lsRjtRsnCode = VAR_2;
 VAR_13.un.b.lsRjtRsnCodeExp = VAR_1;
 VAR_13.un.b.vendorUnique = 0;
 FUNC_0(VAR_8, VAR_13.un.lsRjtError, VAR_9, VAR_10, ((void*)0));
 return 0;
}
