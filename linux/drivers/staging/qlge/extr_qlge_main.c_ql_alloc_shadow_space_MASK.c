
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int rx_ring_shadow_reg_dma; int * rx_ring_shadow_reg_area; int pdev; int ndev; int * tx_ring_shadow_reg_area; int tx_ring_shadow_reg_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 void* FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_3)
{
 VAR_3->rx_ring_shadow_reg_area =
  FUNC_2(VAR_3->pdev, VAR_1,
          &VAR_3->rx_ring_shadow_reg_dma);
 if (VAR_3->rx_ring_shadow_reg_area == ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, VAR_3->ndev,
     "Allocation of RX shadow space failed.\n");
  return -VAR_0;
 }

 VAR_3->tx_ring_shadow_reg_area =
  FUNC_2(VAR_3->pdev, VAR_1,
          &VAR_3->tx_ring_shadow_reg_dma);
 if (VAR_3->tx_ring_shadow_reg_area == ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, VAR_3->ndev,
     "Allocation of TX shadow space failed.\n");
  goto err_wqp_sh_area;
 }
 return 0;

err_wqp_sh_area:
 FUNC_1(VAR_3->pdev,
       VAR_1,
       VAR_3->rx_ring_shadow_reg_area,
       VAR_3->rx_ring_shadow_reg_dma);
 return -VAR_0;
}
