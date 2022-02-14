
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int num_rx_queues; int state; int num_xdp_queues; int num_tx_queues; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int,int ,int ) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct ixgbe_adapter *VAR_1)
{
 int VAR_2;


 FUNC_6(VAR_1);


 FUNC_5(VAR_1);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("Unable to allocate memory for queue vectors\n");
  goto err_alloc_q_vectors;
 }

 FUNC_3(VAR_1);

 FUNC_1("Multiqueue %s: Rx Queue count = %u, Tx Queue count = %u XDP Queue count = %u\n",
     (VAR_1->num_rx_queues > 1) ? "Enabled" : "Disabled",
     VAR_1->num_rx_queues, VAR_1->num_tx_queues,
     VAR_1->num_xdp_queues);

 FUNC_7(VAR_0, &VAR_1->state);

 return 0;

err_alloc_q_vectors:
 FUNC_4(VAR_1);
 return VAR_2;
}
