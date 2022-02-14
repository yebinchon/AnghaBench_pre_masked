
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct genwqe_dev {int mmio; struct pci_dev* pci_dev; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct genwqe_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pci_dev;

 if (VAR_0->mmio)
  FUNC_1(VAR_1, VAR_0->mmio);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
