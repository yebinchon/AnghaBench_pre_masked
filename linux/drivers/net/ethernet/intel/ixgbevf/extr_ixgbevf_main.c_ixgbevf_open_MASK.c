
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_hw {scalar_t__ adapter_stopped; } ;
struct ixgbevf_adapter {int num_rx_queues; int num_tx_queues; int state; int num_msix_vectors; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (struct ixgbevf_adapter*) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int ) ;
 int FUNC_12 (struct net_device*,int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

int FUNC_15(struct net_device *VAR_4)
{
 struct ixgbevf_adapter *VAR_5 = FUNC_9(VAR_4);
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;
 int VAR_7;







 if (!VAR_5->num_msix_vectors)
  return -VAR_1;

 if (VAR_6->adapter_stopped) {
  FUNC_5(VAR_5);



  if (VAR_6->adapter_stopped) {
   VAR_7 = VAR_2;
   FUNC_13("Unable to start - perhaps the PF Driver isn't up yet\n");
   goto err_setup_reset;
  }
 }


 if (FUNC_14(VAR_3, &VAR_5->state))
  return -VAR_0;

 FUNC_10(VAR_4);


 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7)
  goto err_setup_tx;


 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  goto err_setup_rx;

 FUNC_0(VAR_5);

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  goto err_req_irq;


 VAR_7 = FUNC_12(VAR_4, VAR_5->num_tx_queues);
 if (VAR_7)
  goto err_set_queues;

 VAR_7 = FUNC_11(VAR_4, VAR_5->num_rx_queues);
 if (VAR_7)
  goto err_set_queues;

 FUNC_8(VAR_5);

 return 0;

err_set_queues:
 FUNC_3(VAR_5);
err_req_irq:
 FUNC_1(VAR_5);
err_setup_rx:
 FUNC_2(VAR_5);
err_setup_tx:
 FUNC_5(VAR_5);
err_setup_reset:

 return VAR_7;
}
