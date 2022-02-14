
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1)
{
 unsigned int VAR_2 = VAR_1->device & 0xff00;

 if (VAR_2 == 0x1000)
  return FUNC_1(VAR_1);
 else if (VAR_2 == 0x2000)
  return FUNC_2(VAR_1);

 FUNC_0("Unknown SIIG card", VAR_1);
 return -VAR_0;
}
