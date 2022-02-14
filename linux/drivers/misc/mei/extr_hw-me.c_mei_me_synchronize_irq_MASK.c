
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct mei_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mei_device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0->dev);

 FUNC_0(VAR_1->irq);
}
