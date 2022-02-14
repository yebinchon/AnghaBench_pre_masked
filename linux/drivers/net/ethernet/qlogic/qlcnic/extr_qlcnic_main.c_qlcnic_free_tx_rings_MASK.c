
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_host_tx_ring {int * cmd_buf_arr; } ;
struct qlcnic_adapter {int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; } ;


 int FUNC_0 (struct qlcnic_host_tx_ring*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_0)
{
 int VAR_1;
 struct qlcnic_host_tx_ring *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->drv_tx_rings; VAR_1++) {
  VAR_2 = &VAR_0->tx_ring[VAR_1];
  if (VAR_2) {
   FUNC_1(VAR_2->cmd_buf_arr);
   VAR_2->cmd_buf_arr = ((void*)0);
  }
 }
 FUNC_0(VAR_0->tx_ring);
}
