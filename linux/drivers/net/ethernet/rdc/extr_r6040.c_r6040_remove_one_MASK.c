
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r6040_private {int base; int napi; int mii_bus; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct r6040_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct r6040_private *VAR_2 = FUNC_3(VAR_1);

 FUNC_9(VAR_1);
 FUNC_2(VAR_2->mii_bus);
 FUNC_1(VAR_2->mii_bus);
 FUNC_4(&VAR_2->napi);
 FUNC_7(VAR_0, VAR_2->base);
 FUNC_8(VAR_0);
 FUNC_0(VAR_1);
 FUNC_5(VAR_0);
}
