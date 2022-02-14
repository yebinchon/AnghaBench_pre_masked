
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_3)
{
 if ((VAR_2&VAR_0) == 0) {
  FUNC_0(VAR_3, "Limiting direct PCI/PCI transfers\n");
  VAR_2 |= VAR_0|VAR_1;
 }
}
