
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; scalar_t__ multifunction; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 if (VAR_0->multifunction) {
  FUNC_0(&VAR_0->dev);
  FUNC_1(VAR_0, "async suspend disabled to avoid multi-function power-on ordering issue\n");
 }
}
