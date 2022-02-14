
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int state; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_1, pm_message_t VAR_2)
{
 struct net_device *VAR_3 = FUNC_6(VAR_1);
 struct ixgbevf_adapter *VAR_4 = FUNC_2(VAR_3);




 FUNC_8();
 FUNC_3(VAR_3);

 if (FUNC_4(VAR_3))
  FUNC_1(VAR_4);

 FUNC_0(VAR_4);
 FUNC_9();







 if (!FUNC_10(VAR_0, &VAR_4->state))
  FUNC_5(VAR_1);

 return 0;
}
