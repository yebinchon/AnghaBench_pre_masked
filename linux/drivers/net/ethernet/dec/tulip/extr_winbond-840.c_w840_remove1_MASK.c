
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct netdev_private {int base_addr; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  struct netdev_private *VAR_2 = FUNC_1(VAR_1);
  FUNC_5(VAR_1);
  FUNC_4(VAR_0);
  FUNC_3(VAR_0, VAR_2->base_addr);
  FUNC_0(VAR_1);
 }
}
