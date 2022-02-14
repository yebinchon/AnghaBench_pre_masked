
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int dummy; } ;


 int FUNC_0 (struct lan743x_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 struct lan743x_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct lan743x_adapter *VAR_2 = FUNC_2(VAR_1);

 FUNC_7();
 FUNC_3(VAR_1);





 if (FUNC_4(VAR_1))
  FUNC_1(VAR_1);
 FUNC_8();






 FUNC_0(VAR_2);
}
