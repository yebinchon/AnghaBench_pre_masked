
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgb_adapter {int watchdog_timer; } ;


 scalar_t__ FUNC_0 (struct ixgb_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct ixgb_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_5(VAR_1);
 struct ixgb_adapter *VAR_3 = FUNC_2(VAR_2);

 FUNC_6(VAR_1);

 if (FUNC_4(VAR_2)) {
  if (FUNC_0(VAR_3)) {
   FUNC_7("can't bring device back up after reset\n");
   return;
  }
 }

 FUNC_3(VAR_2);
 FUNC_1(&VAR_3->watchdog_timer, VAR_0);
}
