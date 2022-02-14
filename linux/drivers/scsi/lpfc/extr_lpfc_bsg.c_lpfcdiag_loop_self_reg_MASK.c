
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_1__* pport; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_11__ {int * varWords; } ;
struct TYPE_12__ {TYPE_2__ un; scalar_t__ mbxStatus; } ;
struct TYPE_13__ {TYPE_3__ mb; } ;
struct TYPE_14__ {TYPE_4__ u; int * ctx_ndlp; int * ctx_buf; } ;
struct TYPE_10__ {int fc_sparam; int fc_myDID; int vpi; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,int *,TYPE_5__*,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ) ;
 int FUNC_5 (struct lpfc_hba*,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_8(struct lpfc_hba *VAR_9, uint16_t *VAR_10)
{
 LPFC_MBOXQ_t *VAR_11;
 struct lpfc_dmabuf *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(VAR_9->mbox_mem_pool, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 if (VAR_9->sli_rev < VAR_6)
  VAR_13 = FUNC_2(VAR_9, 0, VAR_9->pport->fc_myDID,
    (uint8_t *)&VAR_9->pport->fc_sparam,
    VAR_11, *VAR_10);
 else {
  *VAR_10 = FUNC_3(VAR_9);
  if (*VAR_10 == VAR_5) {
   FUNC_7(VAR_11, VAR_9->mbox_mem_pool);
   return -VAR_0;
  }
  VAR_13 = FUNC_2(VAR_9, VAR_9->pport->vpi,
    VAR_9->pport->fc_myDID,
    (uint8_t *)&VAR_9->pport->fc_sparam,
    VAR_11, *VAR_10);
 }

 if (VAR_13) {
  FUNC_7(VAR_11, VAR_9->mbox_mem_pool);
  if (VAR_9->sli_rev == VAR_6)
   FUNC_4(VAR_9, *VAR_10);
  return -VAR_2;
 }

 VAR_12 = (struct lpfc_dmabuf *)VAR_11->ctx_buf;
 VAR_11->ctx_buf = ((void*)0);
 VAR_11->ctx_ndlp = ((void*)0);
 VAR_13 = FUNC_5(VAR_9, VAR_11, VAR_4);

 if ((VAR_13 != VAR_7) || (VAR_11->u.mb.mbxStatus)) {
  FUNC_1(VAR_9, VAR_12->virt, VAR_12->phys);
  FUNC_0(VAR_12);
  if (VAR_13 != VAR_8)
   FUNC_7(VAR_11, VAR_9->mbox_mem_pool);
  if (VAR_9->sli_rev == VAR_6)
   FUNC_4(VAR_9, *VAR_10);
  return -VAR_1;
 }

 if (VAR_9->sli_rev < VAR_6)
  *VAR_10 = VAR_11->u.mb.un.varWords[0];

 FUNC_1(VAR_9, VAR_12->virt, VAR_12->phys);
 FUNC_0(VAR_12);
 FUNC_7(VAR_11, VAR_9->mbox_mem_pool);
 return 0;
}
