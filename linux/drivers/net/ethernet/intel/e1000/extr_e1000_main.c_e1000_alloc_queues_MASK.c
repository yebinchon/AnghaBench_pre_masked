
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_tx_ring {int dummy; } ;
struct e1000_rx_ring {int dummy; } ;
struct e1000_adapter {void* tx_ring; void* rx_ring; int num_rx_queues; int num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct e1000_adapter *VAR_3)
{
 VAR_3->tx_ring = FUNC_0(VAR_3->num_tx_queues,
       sizeof(struct e1000_tx_ring), VAR_2);
 if (!VAR_3->tx_ring)
  return -VAR_1;

 VAR_3->rx_ring = FUNC_0(VAR_3->num_rx_queues,
       sizeof(struct e1000_rx_ring), VAR_2);
 if (!VAR_3->rx_ring) {
  FUNC_1(VAR_3->tx_ring);
  return -VAR_1;
 }

 return VAR_0;
}
