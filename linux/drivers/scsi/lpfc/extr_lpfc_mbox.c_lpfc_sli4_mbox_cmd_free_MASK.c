
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_10__ {int cfg_mhdr; } ;
struct lpfc_mbx_sli4_config {TYPE_4__ header; } ;
struct lpfc_mbx_sge {int pa_lo; int pa_hi; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_5__* pcidev; } ;
struct TYPE_7__ {struct lpfc_mbx_sli4_config sli4_config; } ;
struct TYPE_8__ {TYPE_1__ un; } ;
struct TYPE_9__ {TYPE_2__ mqe; } ;
struct lpfcMboxq {TYPE_6__* sge_array; TYPE_3__ u; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int * addr; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct lpfcMboxq*,size_t,struct lpfc_mbx_sge*) ;
 int FUNC_5 (struct lpfcMboxq*,int ) ;
 scalar_t__ FUNC_6 (int) ;

void
FUNC_7(struct lpfc_hba *VAR_3, struct lpfcMboxq *VAR_4)
{
 struct lpfc_mbx_sli4_config *VAR_5;
 struct lpfc_mbx_sge VAR_6;
 dma_addr_t VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_5 = &VAR_4->u.mqe.un.sli4_config;


 if (FUNC_0(VAR_1, &VAR_5->header.cfg_mhdr)) {
  FUNC_5(VAR_4, VAR_3->mbox_mem_pool);
  return;
 }


 VAR_8 = FUNC_0(VAR_2, &VAR_5->header.cfg_mhdr);

 if (FUNC_6(!VAR_4->sge_array)) {
  FUNC_5(VAR_4, VAR_3->mbox_mem_pool);
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_4(VAR_4, VAR_9, &VAR_6);
  VAR_7 = FUNC_2(VAR_6.pa_hi, VAR_6.pa_lo);
  FUNC_1(&VAR_3->pcidev->dev, VAR_0,
      VAR_4->sge_array->addr[VAR_9], VAR_7);
 }

 FUNC_3(VAR_4->sge_array);

 FUNC_5(VAR_4, VAR_3->mbox_mem_pool);
}
