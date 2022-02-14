
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {scalar_t__ num_q_vectors; scalar_t__ num_rx_queues; scalar_t__ num_tx_queues; } ;



__attribute__((used)) static void FUNC_0(struct fm10k_intfc *VAR_0)
{
 VAR_0->num_tx_queues = 0;
 VAR_0->num_rx_queues = 0;
 VAR_0->num_q_vectors = 0;
}
