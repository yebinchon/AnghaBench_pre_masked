
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int num_rx_queues; int state; int num_xdp_queues; int num_tx_queues; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ixgbevf_adapter *VAR_1)
{
 int VAR_2;


 FUNC_4(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->hw,
         "Unable to setup interrupt capabilities\n");
  goto err_set_interrupt;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->hw, "Unable to allocate memory for queue vectors\n");
  goto err_alloc_q_vectors;
 }

 FUNC_0(&VAR_1->hw, "Multiqueue %s: Rx Queue count = %u, Tx Queue count = %u XDP Queue count %u\n",
        (VAR_1->num_rx_queues > 1) ? "Enabled" : "Disabled",
        VAR_1->num_rx_queues, VAR_1->num_tx_queues,
        VAR_1->num_xdp_queues);

 FUNC_5(VAR_0, &VAR_1->state);

 return 0;
err_alloc_q_vectors:
 FUNC_2(VAR_1);
err_set_interrupt:
 return VAR_2;
}
