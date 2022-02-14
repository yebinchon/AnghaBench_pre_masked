
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_adapter {int * rx_rings; int * tx_rings; scalar_t__ num_active_queues; int vsi_res; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct iavf_adapter *VAR_0)
{
 if (!VAR_0->vsi_res)
  return;
 VAR_0->num_active_queues = 0;
 FUNC_0(VAR_0->tx_rings);
 VAR_0->tx_rings = ((void*)0);
 FUNC_0(VAR_0->rx_rings);
 VAR_0->rx_rings = ((void*)0);
}
