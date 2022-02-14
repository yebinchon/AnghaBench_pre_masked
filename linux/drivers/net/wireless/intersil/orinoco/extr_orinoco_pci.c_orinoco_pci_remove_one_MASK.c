
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct TYPE_2__ {int iobase; } ;
struct orinoco_private {TYPE_1__ hw; } ;


 int FUNC_0 (int ,struct orinoco_private*) ;
 int FUNC_1 (struct orinoco_private*) ;
 int FUNC_2 (struct orinoco_private*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct orinoco_private* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct orinoco_private*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct orinoco_private *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(VAR_1);
 FUNC_8(FUNC_7(VAR_1));
 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_1(VAR_1);
 FUNC_5(VAR_0, VAR_1->hw.iobase);
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);
}
