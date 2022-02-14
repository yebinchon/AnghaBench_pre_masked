
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;
struct netxen_adapter {scalar_t__ portnum; int state; int tx_timeout_task; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct netxen_adapter*) ;
 int FUNC_5 (struct netxen_adapter*) ;
 int FUNC_6 (struct netxen_adapter*) ;
 int FUNC_7 (struct netxen_adapter*) ;
 int FUNC_8 (struct netxen_adapter*,int) ;
 int FUNC_9 (struct netxen_adapter*) ;
 int FUNC_10 (struct netxen_adapter*) ;
 int FUNC_11 (struct netxen_adapter*) ;
 int FUNC_12 (struct netxen_adapter*,int ) ;
 int FUNC_13 (struct netxen_adapter*) ;
 int FUNC_14 (struct netxen_adapter*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 struct netxen_adapter* FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static void FUNC_20(struct pci_dev *VAR_1)
{
 struct netxen_adapter *VAR_2;
 struct net_device *VAR_3;

 VAR_2 = FUNC_17(VAR_1);
 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->netdev;

 FUNC_4(VAR_2);

 FUNC_19(VAR_3);

 FUNC_1(&VAR_2->tx_timeout_task);

 FUNC_8(VAR_2, 0);
 FUNC_9(VAR_2);

 FUNC_14(VAR_2);

 if (VAR_2->portnum == 0)
  FUNC_7(VAR_2);

 FUNC_2(VAR_0, &VAR_2->state);

 FUNC_13(VAR_2);
 FUNC_12(VAR_2, 0);
 FUNC_11(VAR_2);

 FUNC_6(VAR_2);

 FUNC_10(VAR_2);

 if (FUNC_0(VAR_1->revision)) {
  FUNC_5(VAR_2);
  FUNC_16(VAR_1);
 }

 FUNC_18(VAR_1);
 FUNC_15(VAR_1);

 FUNC_3(VAR_3);
}
