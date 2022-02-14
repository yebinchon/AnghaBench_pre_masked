
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_device {int ioenabled; } ;


 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct comedi_device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 && VAR_0->ioenabled) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
 }
 VAR_0->ioenabled = 0;
}
