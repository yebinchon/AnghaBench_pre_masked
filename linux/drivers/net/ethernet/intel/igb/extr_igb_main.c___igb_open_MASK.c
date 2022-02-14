
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int get_link_status; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int num_q_vectors; int watchdog_task; scalar_t__ vfs_allocated_count; TYPE_1__** q_vector; int state; int num_rx_queues; int netdev; int num_tx_queues; struct pci_dev* pdev; struct e1000_hw hw; } ;
struct TYPE_3__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (struct igb_adapter*) ;
 int FUNC_8 (struct igb_adapter*) ;
 int FUNC_9 (struct igb_adapter*) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (struct igb_adapter*) ;
 int FUNC_12 (struct igb_adapter*) ;
 int FUNC_13 (struct igb_adapter*) ;
 int FUNC_14 (int *) ;
 struct igb_adapter* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,int *) ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static int FUNC_26(struct net_device *VAR_7, bool VAR_8)
{
 struct igb_adapter *VAR_9 = FUNC_15(VAR_7);
 struct e1000_hw *VAR_10 = &VAR_9->hw;
 struct pci_dev *VAR_11 = VAR_9->pdev;
 int VAR_12;
 int VAR_13;


 if (FUNC_24(VAR_6, &VAR_9->state)) {
  FUNC_0(VAR_8);
  return -VAR_4;
 }

 if (!VAR_8)
  FUNC_20(&VAR_11->dev);

 FUNC_16(VAR_7);


 VAR_12 = FUNC_13(VAR_9);
 if (VAR_12)
  goto err_setup_tx;


 VAR_12 = FUNC_12(VAR_9);
 if (VAR_12)
  goto err_setup_rx;

 FUNC_8(VAR_9);






 FUNC_2(VAR_9);

 VAR_12 = FUNC_10(VAR_9);
 if (VAR_12)
  goto err_req_irq;


 VAR_12 = FUNC_18(VAR_9->netdev,
        VAR_9->num_tx_queues);
 if (VAR_12)
  goto err_set_queues;

 VAR_12 = FUNC_17(VAR_9->netdev,
        VAR_9->num_rx_queues);
 if (VAR_12)
  goto err_set_queues;


 FUNC_1(VAR_5, &VAR_9->state);

 for (VAR_13 = 0; VAR_13 < VAR_9->num_q_vectors; VAR_13++)
  FUNC_14(&(VAR_9->q_vector[VAR_13]->napi));


 FUNC_22(VAR_3);
 FUNC_22(VAR_2);

 FUNC_6(VAR_9);


 if (VAR_9->vfs_allocated_count) {
  u32 VAR_14 = FUNC_22(VAR_0);

  VAR_14 |= VAR_1;
  FUNC_25(VAR_0, VAR_14);
 }

 FUNC_19(VAR_7);

 if (!VAR_8)
  FUNC_21(&VAR_11->dev);


 VAR_10->mac.get_link_status = 1;
 FUNC_23(&VAR_9->watchdog_task);

 return 0;

err_set_queues:
 FUNC_5(VAR_9);
err_req_irq:
 FUNC_9(VAR_9);
 FUNC_7(VAR_9);
 FUNC_3(VAR_9);
err_setup_rx:
 FUNC_4(VAR_9);
err_setup_tx:
 FUNC_11(VAR_9);
 if (!VAR_8)
  FUNC_21(&VAR_11->dev);

 return VAR_12;
}
