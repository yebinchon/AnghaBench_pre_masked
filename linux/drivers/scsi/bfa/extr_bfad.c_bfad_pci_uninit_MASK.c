
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bfad_s {int pci_bar2_kva; int pci_bar0_kva; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;

void
FUNC_4(struct pci_dev *VAR_0, struct bfad_s *VAR_1)
{
 FUNC_2(VAR_0, VAR_1->pci_bar0_kva);
 FUNC_2(VAR_0, VAR_1->pci_bar2_kva);
 FUNC_3(VAR_0);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
