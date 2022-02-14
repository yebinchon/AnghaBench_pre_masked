
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int base; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct rhine_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct rhine_private *VAR_2 = FUNC_1(VAR_1);

 FUNC_6(VAR_1);

 FUNC_4(VAR_0, VAR_2->base);
 FUNC_5(VAR_0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_0);
}
