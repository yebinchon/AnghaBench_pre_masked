
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int get_link_status; } ;
struct igc_hw {TYPE_2__ mac; } ;
struct igc_adapter {int num_q_vectors; int watchdog_task; TYPE_1__** q_vector; int state; int num_rx_queues; int num_tx_queues; struct igc_hw hw; } ;
struct TYPE_3__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*) ;
 int FUNC_5 (struct igc_adapter*) ;
 int FUNC_6 (struct igc_adapter*) ;
 int FUNC_7 (struct igc_adapter*) ;
 int FUNC_8 (struct igc_adapter*) ;
 int FUNC_9 (struct igc_adapter*) ;
 int FUNC_10 (struct igc_adapter*) ;
 int FUNC_11 (struct igc_adapter*) ;
 int FUNC_12 (struct igc_adapter*) ;
 int FUNC_13 (struct igc_adapter*) ;
 int FUNC_14 (int *) ;
 struct igc_adapter* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,int ) ;
 int FUNC_18 (struct net_device*,int ) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;

__attribute__((used)) static int FUNC_23(struct net_device *VAR_5, bool VAR_6)
{
 struct igc_adapter *VAR_7 = FUNC_15(VAR_5);
 struct igc_hw *VAR_8 = &VAR_7->hw;
 int VAR_9 = 0;
 int VAR_10 = 0;



 if (FUNC_22(VAR_4, &VAR_7->state)) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 FUNC_16(VAR_5);


 VAR_9 = FUNC_13(VAR_7);
 if (VAR_9)
  goto err_setup_tx;


 VAR_9 = FUNC_12(VAR_7);
 if (VAR_9)
  goto err_setup_rx;

 FUNC_8(VAR_7);

 FUNC_2(VAR_7);

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9)
  goto err_req_irq;


 VAR_9 = FUNC_18(VAR_5, VAR_7->num_tx_queues);
 if (VAR_9)
  goto err_set_queues;

 VAR_9 = FUNC_17(VAR_5, VAR_7->num_rx_queues);
 if (VAR_9)
  goto err_set_queues;

 FUNC_1(VAR_3, &VAR_7->state);

 for (VAR_10 = 0; VAR_10 < VAR_7->num_q_vectors; VAR_10++)
  FUNC_14(&VAR_7->q_vector[VAR_10]->napi);


 FUNC_20(VAR_1);
 FUNC_6(VAR_7);

 FUNC_19(VAR_5);


 VAR_8->mac.get_link_status = 1;
 FUNC_21(&VAR_7->watchdog_task);

 return VAR_2;

err_set_queues:
 FUNC_5(VAR_7);
err_req_irq:
 FUNC_9(VAR_7);
 FUNC_7(VAR_7);
 FUNC_3(VAR_7);
err_setup_rx:
 FUNC_4(VAR_7);
err_setup_tx:
 FUNC_11(VAR_7);

 return VAR_9;
}
