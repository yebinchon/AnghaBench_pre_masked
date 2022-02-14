
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct __vxge_hw_device {struct net_device* ndev; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct __vxge_hw_device* FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct __vxge_hw_device *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = VAR_1->ndev;

 if (FUNC_2(VAR_2)) {
  if (FUNC_4(VAR_2)) {
   FUNC_0(VAR_2,
       "Can't bring device back up after reset\n");
   return;
  }
 }

 FUNC_1(VAR_2);
}
