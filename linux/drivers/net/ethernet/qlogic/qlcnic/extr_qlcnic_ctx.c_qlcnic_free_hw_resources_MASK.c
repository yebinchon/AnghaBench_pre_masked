
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_tx_ring {int * desc_head; int phys_addr; int * hw_consumer; int hw_cons_phys_addr; } ;
struct qlcnic_host_sds_ring {int * desc_head; int phys_addr; } ;
struct qlcnic_host_rds_ring {int * desc_head; int phys_addr; } ;
struct qlcnic_adapter {int drv_tx_rings; int max_rds_rings; int drv_sds_rings; TYPE_1__* pdev; struct qlcnic_host_tx_ring* tx_ring; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct qlcnic_host_rds_ring*) ;
 int FUNC_1 (struct qlcnic_host_sds_ring*) ;
 int FUNC_2 (struct qlcnic_host_tx_ring*) ;
 int FUNC_3 (int *,int,int *,int ) ;

void FUNC_4(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_recv_context *VAR_1;
 struct qlcnic_host_rds_ring *VAR_2;
 struct qlcnic_host_sds_ring *VAR_3;
 struct qlcnic_host_tx_ring *VAR_4;
 int VAR_5;

 VAR_1 = VAR_0->recv_ctx;

 for (VAR_5 = 0; VAR_5 < VAR_0->drv_tx_rings; VAR_5++) {
  VAR_4 = &VAR_0->tx_ring[VAR_5];
  if (VAR_4->hw_consumer != ((void*)0)) {
   FUNC_3(&VAR_0->pdev->dev, sizeof(u32),
       VAR_4->hw_consumer,
       VAR_4->hw_cons_phys_addr);

   VAR_4->hw_consumer = ((void*)0);
  }

  if (VAR_4->desc_head != ((void*)0)) {
   FUNC_3(&VAR_0->pdev->dev,
       FUNC_2(VAR_4),
       VAR_4->desc_head,
       VAR_4->phys_addr);
   VAR_4->desc_head = ((void*)0);
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_0->max_rds_rings; VAR_5++) {
  VAR_2 = &VAR_1->rds_rings[VAR_5];

  if (VAR_2->desc_head != ((void*)0)) {
   FUNC_3(&VAR_0->pdev->dev,
     FUNC_0(VAR_2),
     VAR_2->desc_head,
     VAR_2->phys_addr);
   VAR_2->desc_head = ((void*)0);
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_0->drv_sds_rings; VAR_5++) {
  VAR_3 = &VAR_1->sds_rings[VAR_5];

  if (VAR_3->desc_head != ((void*)0)) {
   FUNC_3(&VAR_0->pdev->dev,
    FUNC_1(VAR_3),
    VAR_3->desc_head,
    VAR_3->phys_addr);
   VAR_3->desc_head = ((void*)0);
  }
 }
}
