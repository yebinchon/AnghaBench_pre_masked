
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_adapter {int * rx_stats_buffers; int * tx_stats_buffers; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ibmvnic_adapter *VAR_0)
{
 FUNC_0(VAR_0->tx_stats_buffers);
 FUNC_0(VAR_0->rx_stats_buffers);
 VAR_0->tx_stats_buffers = ((void*)0);
 VAR_0->rx_stats_buffers = ((void*)0);
}
