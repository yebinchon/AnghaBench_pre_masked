
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subordinate; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,scalar_t__) ;

int FUNC_2(struct pci_dev *VAR_3, pci_power_t VAR_4)
{
 int VAR_5;

 if (VAR_4 <= VAR_1)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3, VAR_4);

 if (!VAR_5 && VAR_4 == VAR_2)
  FUNC_0(VAR_3->subordinate, VAR_2);
 return VAR_5;
}
