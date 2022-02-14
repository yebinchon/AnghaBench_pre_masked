
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vpd {int valid; size_t len; } ;
struct pci_dev {struct pci_vpd* vpd; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_2, size_t VAR_3)
{
 struct pci_vpd *VAR_4 = VAR_2->vpd;

 if (VAR_3 == 0 || VAR_3 > VAR_1)
  return -VAR_0;

 VAR_4->valid = 1;
 VAR_4->len = VAR_3;

 return 0;
}
