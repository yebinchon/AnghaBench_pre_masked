
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_power_t ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct pci_dev *VAR_1, pci_power_t VAR_2, bool VAR_3)
{
 if (VAR_3 && !FUNC_1(&VAR_1->dev))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
