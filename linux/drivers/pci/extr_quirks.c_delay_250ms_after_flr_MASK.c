
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, int VAR_2)
{
 if (!FUNC_2(VAR_1))
  return -VAR_0;

 if (VAR_2)
  return 0;

 FUNC_1(VAR_1);

 FUNC_0(250);

 return 0;
}
