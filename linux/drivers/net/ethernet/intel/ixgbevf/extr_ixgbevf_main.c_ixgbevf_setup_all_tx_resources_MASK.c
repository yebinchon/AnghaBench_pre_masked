
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int num_tx_queues; int num_xdp_queues; int * tx_ring; int * xdp_ring; int hw; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ixgbevf_adapter *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++) {
  VAR_3 = FUNC_2(VAR_0->tx_ring[VAR_1]);
  if (!VAR_3)
   continue;
  FUNC_0(&VAR_0->hw, "Allocation for Tx Queue %u failed\n", VAR_1);
  goto err_setup_tx;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->num_xdp_queues; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0->xdp_ring[VAR_2]);
  if (!VAR_3)
   continue;
  FUNC_0(&VAR_0->hw, "Allocation for XDP Queue %u failed\n", VAR_2);
  goto err_setup_tx;
 }

 return 0;
err_setup_tx:

 while (VAR_2--)
  FUNC_1(VAR_0->xdp_ring[VAR_2]);
 while (VAR_1--)
  FUNC_1(VAR_0->tx_ring[VAR_1]);

 return VAR_3;
}
