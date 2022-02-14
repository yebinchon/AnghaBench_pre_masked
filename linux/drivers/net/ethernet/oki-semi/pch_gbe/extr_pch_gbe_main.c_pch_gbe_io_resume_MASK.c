
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_gbe_adapter {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct pch_gbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct pch_gbe_adapter*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct pch_gbe_adapter *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_1)) {
  if (FUNC_4(VAR_2)) {
   FUNC_0(VAR_1,
       "can't bring device back up after reset\n");
   return;
  }
 }
 FUNC_2(VAR_1);
}
