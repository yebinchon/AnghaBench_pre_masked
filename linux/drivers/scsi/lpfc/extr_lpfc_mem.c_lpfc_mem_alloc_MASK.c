
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_nodelist {int dummy; } ;
struct lpfc_node_rrq {int dummy; } ;
struct lpfc_dma_pool {TYPE_2__* elements; scalar_t__ current_count; scalar_t__ max_count; } ;
struct lpfc_hba {scalar_t__ sli_rev; int * lpfc_mbuf_pool; int * mbox_mem_pool; int * nlp_mem_pool; int * rrq_pool; int * lpfc_hrb_pool; int * lpfc_drb_pool; int * device_data_mem_pool; scalar_t__ cfg_EnableXLane; int * lpfc_hbq_pool; TYPE_1__* pcidev; struct lpfc_dma_pool lpfc_mbuf_safety_pool; } ;
struct lpfc_dmabuf {int dummy; } ;
struct lpfc_device_data {int dummy; } ;
struct TYPE_5__ {int phys; int virt; } ;
struct TYPE_4__ {int dev; } ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,int ,int *) ;
 void* FUNC_1 (char*,int *,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int,int,int ) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct lpfc_hba *VAR_9, int VAR_10)
{
 struct lpfc_dma_pool *VAR_11 = &VAR_9->lpfc_mbuf_safety_pool;
 int VAR_12;


 VAR_9->lpfc_mbuf_pool = FUNC_1("lpfc_mbuf_pool", &VAR_9->pcidev->dev,
       VAR_2,
       VAR_10, 0);
 if (!VAR_9->lpfc_mbuf_pool)
  goto fail;

 VAR_11->elements = FUNC_5(VAR_6,
           sizeof(struct lpfc_dmabuf),
           VAR_1);
 if (!VAR_11->elements)
  goto fail_free_lpfc_mbuf_pool;

 VAR_11->max_count = 0;
 VAR_11->current_count = 0;
 for ( VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_11->elements[VAR_12].virt = FUNC_0(VAR_9->lpfc_mbuf_pool,
           VAR_1, &VAR_11->elements[VAR_12].phys);
  if (!VAR_11->elements[VAR_12].virt)
   goto fail_free_mbuf_pool;
  VAR_11->max_count++;
  VAR_11->current_count++;
 }

 VAR_9->mbox_mem_pool = FUNC_6(VAR_7,
        sizeof(LPFC_MBOXQ_t));
 if (!VAR_9->mbox_mem_pool)
  goto fail_free_mbuf_pool;

 VAR_9->nlp_mem_pool = FUNC_6(VAR_7,
      sizeof(struct lpfc_nodelist));
 if (!VAR_9->nlp_mem_pool)
  goto fail_free_mbox_pool;

 if (VAR_9->sli_rev == VAR_8) {
  VAR_9->rrq_pool =
   FUNC_6(VAR_7,
      sizeof(struct lpfc_node_rrq));
  if (!VAR_9->rrq_pool)
   goto fail_free_nlp_mem_pool;
  VAR_9->lpfc_hrb_pool = FUNC_1("lpfc_hrb_pool",
           &VAR_9->pcidev->dev,
           VAR_5, VAR_10, 0);
  if (!VAR_9->lpfc_hrb_pool)
   goto fail_free_rrq_mem_pool;

  VAR_9->lpfc_drb_pool = FUNC_1("lpfc_drb_pool",
           &VAR_9->pcidev->dev,
           VAR_3, VAR_10, 0);
  if (!VAR_9->lpfc_drb_pool)
   goto fail_free_hrb_pool;
  VAR_9->lpfc_hbq_pool = ((void*)0);
 } else {
  VAR_9->lpfc_hbq_pool = FUNC_1("lpfc_hbq_pool",
   &VAR_9->pcidev->dev, VAR_2, VAR_10, 0);
  if (!VAR_9->lpfc_hbq_pool)
   goto fail_free_nlp_mem_pool;
  VAR_9->lpfc_hrb_pool = ((void*)0);
  VAR_9->lpfc_drb_pool = ((void*)0);
 }

 if (VAR_9->cfg_EnableXLane) {
  VAR_9->device_data_mem_pool = FUNC_6(
     VAR_4,
     sizeof(struct lpfc_device_data));
  if (!VAR_9->device_data_mem_pool)
   goto fail_free_drb_pool;
 } else {
  VAR_9->device_data_mem_pool = ((void*)0);
 }

 return 0;
fail_free_drb_pool:
 FUNC_2(VAR_9->lpfc_drb_pool);
 VAR_9->lpfc_drb_pool = ((void*)0);
 fail_free_hrb_pool:
 FUNC_2(VAR_9->lpfc_hrb_pool);
 VAR_9->lpfc_hrb_pool = ((void*)0);
 fail_free_rrq_mem_pool:
 FUNC_7(VAR_9->rrq_pool);
 VAR_9->rrq_pool = ((void*)0);
 fail_free_nlp_mem_pool:
 FUNC_7(VAR_9->nlp_mem_pool);
 VAR_9->nlp_mem_pool = ((void*)0);
 fail_free_mbox_pool:
 FUNC_7(VAR_9->mbox_mem_pool);
 VAR_9->mbox_mem_pool = ((void*)0);
 fail_free_mbuf_pool:
 while (VAR_12--)
  FUNC_3(VAR_9->lpfc_mbuf_pool, VAR_11->elements[VAR_12].virt,
       VAR_11->elements[VAR_12].phys);
 FUNC_4(VAR_11->elements);
 fail_free_lpfc_mbuf_pool:
 FUNC_2(VAR_9->lpfc_mbuf_pool);
 VAR_9->lpfc_mbuf_pool = ((void*)0);
 fail:
 return -VAR_0;
}
