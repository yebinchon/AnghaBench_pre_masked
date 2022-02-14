
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int get_link_status; } ;
struct TYPE_3__ {int status; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ mng_cookie; } ;
struct e1000_adapter {int flags; scalar_t__ int_mode; int tx_hang_recheck; int tx_ring; int rx_ring; int pm_qos_req; int napi; int state; struct e1000_hw hw; int mng_vlan_id; struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct e1000_adapter*) ;
 int FUNC_10 (struct e1000_adapter*) ;
 int FUNC_11 (struct e1000_adapter*) ;
 int FUNC_12 (struct e1000_adapter*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct e1000_adapter*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *) ;
 struct e1000_adapter* FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ,int *) ;

int FUNC_27(struct net_device *VAR_9)
{
 struct e1000_adapter *VAR_10 = FUNC_18(VAR_9);
 struct e1000_hw *VAR_11 = &VAR_10->hw;
 struct pci_dev *VAR_12 = VAR_10->pdev;
 int VAR_13;


 if (FUNC_26(VAR_8, &VAR_10->state))
  return -VAR_3;

 FUNC_23(&VAR_12->dev);

 FUNC_19(VAR_9);
 FUNC_20(VAR_9);


 VAR_13 = FUNC_14(VAR_10->tx_ring);
 if (VAR_13)
  goto err_setup_tx;


 VAR_13 = FUNC_13(VAR_10->rx_ring);
 if (VAR_13)
  goto err_setup_rx;




 if (VAR_10->flags & VAR_4) {
  FUNC_9(VAR_10);
  FUNC_12(VAR_10);
 }

 FUNC_10(VAR_10);

 VAR_10->mng_vlan_id = VAR_2;
 if ((VAR_10->hw.mng_cookie.status & VAR_1))
  FUNC_6(VAR_10);


 FUNC_21(&VAR_10->pm_qos_req, VAR_5,
      VAR_6);






 FUNC_1(VAR_10);

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13)
  goto err_req_irq;





 if (VAR_10->int_mode != VAR_0) {
  VAR_13 = FUNC_5(VAR_10);
  if (VAR_13) {
   FUNC_16("Interrupt allocation failed\n");
   goto err_req_irq;
  }
 }


 FUNC_0(VAR_7, &VAR_10->state);

 FUNC_17(&VAR_10->napi);

 FUNC_2(VAR_10);

 VAR_10->tx_hang_recheck = 0;

 VAR_11->mac.get_link_status = 1;
 FUNC_24(&VAR_12->dev);

 FUNC_15(VAR_10);

 return 0;

err_req_irq:
 FUNC_22(&VAR_10->pm_qos_req);
 FUNC_11(VAR_10);
 FUNC_3(VAR_10);
 FUNC_7(VAR_10->rx_ring);
err_setup_rx:
 FUNC_8(VAR_10->tx_ring);
err_setup_tx:
 FUNC_12(VAR_10);
 FUNC_25(&VAR_12->dev);

 return VAR_13;
}
