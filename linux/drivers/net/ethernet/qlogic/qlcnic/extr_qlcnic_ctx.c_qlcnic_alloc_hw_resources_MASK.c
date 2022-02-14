
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_tx_ring {void* desc_head; int phys_addr; int * hw_consumer; int hw_cons_phys_addr; } ;
struct qlcnic_host_sds_ring {void* desc_head; int phys_addr; } ;
struct qlcnic_host_rds_ring {void* desc_head; int phys_addr; } ;
struct qlcnic_adapter {int drv_tx_rings; int max_rds_rings; int drv_sds_rings; struct pci_dev* pdev; struct qlcnic_host_tx_ring* tx_ring; struct qlcnic_recv_context* recv_ctx; } ;
struct pci_dev {int dev; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_host_rds_ring*) ;
 int FUNC_1 (struct qlcnic_host_sds_ring*) ;
 int FUNC_2 (struct qlcnic_host_tx_ring*) ;
 void* FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

int FUNC_5(struct qlcnic_adapter *VAR_2)
{
 void *VAR_3;
 int VAR_4, VAR_5;
 struct qlcnic_recv_context *VAR_6;
 struct qlcnic_host_rds_ring *VAR_7;
 struct qlcnic_host_sds_ring *VAR_8;
 struct qlcnic_host_tx_ring *VAR_9;
 __le32 *VAR_10;

 struct pci_dev *VAR_11 = VAR_2->pdev;

 VAR_6 = VAR_2->recv_ctx;

 for (VAR_5 = 0; VAR_5 < VAR_2->drv_tx_rings; VAR_5++) {
  VAR_9 = &VAR_2->tx_ring[VAR_5];
  VAR_10 = (__le32 *)FUNC_3(&VAR_11->dev, sizeof(u32),
         &VAR_9->hw_cons_phys_addr,
         VAR_1);
  if (VAR_10 == ((void*)0)) {
   VAR_4 = -VAR_0;
   goto err_out_free;
  }

  VAR_9->hw_consumer = VAR_10;

  VAR_3 = FUNC_3(&VAR_11->dev, FUNC_2(VAR_9),
       &VAR_9->phys_addr,
       VAR_1);
  if (VAR_3 == ((void*)0)) {
   VAR_4 = -VAR_0;
   goto err_out_free;
  }

  VAR_9->desc_head = VAR_3;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->max_rds_rings; VAR_5++) {
  VAR_7 = &VAR_6->rds_rings[VAR_5];
  VAR_3 = FUNC_3(&VAR_2->pdev->dev,
       FUNC_0(VAR_7),
       &VAR_7->phys_addr, VAR_1);
  if (VAR_3 == ((void*)0)) {
   VAR_4 = -VAR_0;
   goto err_out_free;
  }
  VAR_7->desc_head = VAR_3;

 }

 for (VAR_5 = 0; VAR_5 < VAR_2->drv_sds_rings; VAR_5++) {
  VAR_8 = &VAR_6->sds_rings[VAR_5];

  VAR_3 = FUNC_3(&VAR_2->pdev->dev,
       FUNC_1(VAR_8),
       &VAR_8->phys_addr, VAR_1);
  if (VAR_3 == ((void*)0)) {
   VAR_4 = -VAR_0;
   goto err_out_free;
  }
  VAR_8->desc_head = VAR_3;
 }

 return 0;

err_out_free:
 FUNC_4(VAR_2);
 return VAR_4;
}
