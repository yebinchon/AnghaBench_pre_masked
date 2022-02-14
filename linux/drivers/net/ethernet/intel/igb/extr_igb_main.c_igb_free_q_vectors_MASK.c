
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_adapter {int num_q_vectors; scalar_t__ num_rx_queues; scalar_t__ num_tx_queues; } ;


 int FUNC_0 (struct igb_adapter*,int) ;
 int FUNC_1 (struct igb_adapter*,int) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_0)
{
 int VAR_1 = VAR_0->num_q_vectors;

 VAR_0->num_tx_queues = 0;
 VAR_0->num_rx_queues = 0;
 VAR_0->num_q_vectors = 0;

 while (VAR_1--) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_1);
 }
}
