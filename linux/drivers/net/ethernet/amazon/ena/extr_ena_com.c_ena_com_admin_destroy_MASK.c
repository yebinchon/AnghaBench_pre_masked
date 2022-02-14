
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_aenq {int * entries; int dma_addr; int q_depth; } ;
struct ena_com_admin_sq {int * entries; int dma_addr; } ;
struct ena_com_admin_cq {int * entries; int dma_addr; } ;
struct ena_com_admin_queue {int q_depth; int * comp_ctx; struct ena_com_admin_sq sq; struct ena_com_admin_cq cq; } ;
struct ena_com_dev {int dmadev; struct ena_com_aenq aenq; struct ena_com_admin_queue admin_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ) ;

void FUNC_5(struct ena_com_dev *VAR_0)
{
 struct ena_com_admin_queue *VAR_1 = &VAR_0->admin_queue;
 struct ena_com_admin_cq *VAR_2 = &VAR_1->cq;
 struct ena_com_admin_sq *VAR_3 = &VAR_1->sq;
 struct ena_com_aenq *VAR_4 = &VAR_0->aenq;
 u16 VAR_5;

 if (VAR_1->comp_ctx)
  FUNC_3(VAR_0->dmadev, VAR_1->comp_ctx);
 VAR_1->comp_ctx = ((void*)0);
 VAR_5 = FUNC_2(VAR_1->q_depth);
 if (VAR_3->entries)
  FUNC_4(VAR_0->dmadev, VAR_5, VAR_3->entries,
      VAR_3->dma_addr);
 VAR_3->entries = ((void*)0);

 VAR_5 = FUNC_1(VAR_1->q_depth);
 if (VAR_2->entries)
  FUNC_4(VAR_0->dmadev, VAR_5, VAR_2->entries,
      VAR_2->dma_addr);
 VAR_2->entries = ((void*)0);

 VAR_5 = FUNC_0(VAR_4->q_depth);
 if (VAR_0->aenq.entries)
  FUNC_4(VAR_0->dmadev, VAR_5, VAR_4->entries,
      VAR_4->dma_addr);
 VAR_4->entries = ((void*)0);
}
