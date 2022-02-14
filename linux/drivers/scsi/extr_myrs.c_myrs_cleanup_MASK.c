
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct myrs_hba {int host; scalar_t__ mmio_base; scalar_t__ io_addr; scalar_t__ irq; int (* disable_intr ) (struct myrs_hba*) ;struct pci_dev* pdev; } ;


 int FUNC_0 (scalar_t__,struct myrs_hba*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct myrs_hba*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct myrs_hba*) ;

__attribute__((used)) static void FUNC_8(struct myrs_hba *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;


 FUNC_2(VAR_0);

 if (VAR_0->mmio_base) {
  VAR_0->disable_intr(VAR_0);
  FUNC_1(VAR_0->mmio_base);
 }
 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_0);
 if (VAR_0->io_addr)
  FUNC_5(VAR_0->io_addr, 0x80);
 FUNC_1(VAR_0->mmio_base);
 FUNC_4(VAR_1, ((void*)0));
 FUNC_3(VAR_1);
 FUNC_6(VAR_0->host);
}
