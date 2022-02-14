
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_device {int regs; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct slic_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct slic_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_6(VAR_1);
 FUNC_1(VAR_2->regs);
 FUNC_0(VAR_1);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
}
