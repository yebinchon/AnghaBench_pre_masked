
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;

int FUNC_4(struct pci_dev *VAR_2)
{
 bool VAR_3 = FUNC_0(&VAR_2->dev);
 pci_power_t VAR_4 = FUNC_3(VAR_2, VAR_3);
 int VAR_5;

 if (VAR_4 == VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_4, VAR_3);

 VAR_5 = FUNC_2(VAR_2, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_2, VAR_4, 0);

 return VAR_5;
}
