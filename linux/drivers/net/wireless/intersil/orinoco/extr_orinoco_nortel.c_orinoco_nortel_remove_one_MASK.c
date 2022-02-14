
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;
struct orinoco_private {TYPE_1__ hw; struct orinoco_pci_card* card; } ;
struct orinoco_pci_card {scalar_t__ bridge_io; scalar_t__ attr_io; } ;


 int FUNC_0 (int ,struct orinoco_private*) ;
 int FUNC_1 (struct orinoco_private*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct orinoco_private*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct orinoco_private* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct orinoco_private*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct orinoco_private *VAR_1 = FUNC_5(VAR_0);
 struct orinoco_pci_card *VAR_2 = VAR_1->card;


 FUNC_2(0, VAR_2->bridge_io + 10);

 FUNC_3(VAR_1);
 FUNC_9(FUNC_8(VAR_1));
 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0, VAR_1->hw.iobase);
 FUNC_6(VAR_0, VAR_2->attr_io);
 FUNC_6(VAR_0, VAR_2->bridge_io);
 FUNC_7(VAR_0);
 FUNC_4(VAR_0);
}
