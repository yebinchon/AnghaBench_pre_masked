
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct comedi_driver {int dummy; } ;


 int FUNC_0 (int *,struct comedi_driver*,unsigned long) ;

int FUNC_1(struct pci_dev *VAR_0,
      struct comedi_driver *VAR_1,
      unsigned long VAR_2)
{
 return FUNC_0(&VAR_0->dev, VAR_1, VAR_2);
}
