
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ mng_cookie; } ;
struct e1000_adapter {int flags; int pm_qos_req; int state; int mng_vlan_id; TYPE_3__ hw; int rx_ring; int tx_ring; int napi; TYPE_1__* netdev; struct pci_dev* pdev; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct e1000_adapter*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 struct e1000_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int,int) ;

int FUNC_16(struct net_device *VAR_7)
{
 struct e1000_adapter *VAR_8 = FUNC_9(VAR_7);
 struct pci_dev *VAR_9 = VAR_8->pdev;
 int VAR_10 = VAR_0;

 while (FUNC_14(VAR_5, &VAR_8->state) && VAR_10--)
  FUNC_15(10000, 11000);

 FUNC_0(FUNC_14(VAR_5, &VAR_8->state));

 FUNC_11(&VAR_9->dev);

 if (!FUNC_14(VAR_4, &VAR_8->state)) {
  FUNC_3(VAR_8, 1);
  FUNC_1(VAR_8);


  FUNC_13("%s NIC Link is Down\n", VAR_8->netdev->name);
 }

 FUNC_8(&VAR_8->napi);

 FUNC_5(VAR_8->tx_ring);
 FUNC_4(VAR_8->rx_ring);




 if (VAR_8->hw.mng_cookie.status & VAR_1)
  FUNC_2(VAR_7, FUNC_7(VAR_2),
           VAR_8->mng_vlan_id);




 if ((VAR_8->flags & VAR_3) &&
     !FUNC_14(VAR_6, &VAR_8->state))
  FUNC_6(VAR_8);

 FUNC_10(&VAR_8->pm_qos_req);

 FUNC_12(&VAR_9->dev);

 return 0;
}
