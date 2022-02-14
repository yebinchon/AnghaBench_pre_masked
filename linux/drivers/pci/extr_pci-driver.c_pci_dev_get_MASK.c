
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *) ;

struct pci_dev *FUNC_1(struct pci_dev *VAR_0)
{
 if (VAR_0)
  FUNC_0(&VAR_0->dev);
 return VAR_0;
}
