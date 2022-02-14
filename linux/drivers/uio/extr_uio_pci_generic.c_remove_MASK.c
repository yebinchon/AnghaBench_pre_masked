
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pci_generic_dev {int info; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct uio_pci_generic_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct uio_pci_generic_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct uio_pci_generic_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->info);
 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
