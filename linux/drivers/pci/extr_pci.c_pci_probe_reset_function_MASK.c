
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,int) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;

int FUNC_7(struct pci_dev *VAR_1)
{
 int VAR_2;

 FUNC_0();

 VAR_2 = FUNC_3(VAR_1, 1);
 if (VAR_2 != -VAR_0)
  return VAR_2;
 if (FUNC_6(VAR_1))
  return 0;
 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2 != -VAR_0)
  return VAR_2;
 VAR_2 = FUNC_5(VAR_1, 1);
 if (VAR_2 != -VAR_0)
  return VAR_2;
 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2 != -VAR_0)
  return VAR_2;

 return FUNC_4(VAR_1, 1);
}
