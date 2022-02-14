
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_physfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;

int FUNC_5(struct pci_dev *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0();

 if (!VAR_2->is_physfn)
  return -VAR_0;

 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_2, "Cannot modify SR-IOV while VFs are assigned\n");
  return -VAR_1;
 }

 if (VAR_3 == 0) {
  FUNC_3(VAR_2);
  return 0;
 }

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_3;
}
