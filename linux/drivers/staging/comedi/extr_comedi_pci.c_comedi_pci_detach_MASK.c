
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_device {int * mmio; scalar_t__ irq; int ioenabled; } ;


 int FUNC_0 (struct comedi_device*) ;
 struct pci_dev* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__,struct comedi_device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct comedi_device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1 || !VAR_0->ioenabled)
  return;

 if (VAR_0->irq) {
  FUNC_2(VAR_0->irq, VAR_0);
  VAR_0->irq = 0;
 }
 if (VAR_0->mmio) {
  FUNC_3(VAR_0->mmio);
  VAR_0->mmio = ((void*)0);
 }
 FUNC_0(VAR_0);
}
