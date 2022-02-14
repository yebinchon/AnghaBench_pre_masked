
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ irq; int dev; } ;
struct pch_dev {scalar_t__ mem_base; int mem_size; int * regs; int ptp_clock; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,struct pch_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pch_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pch_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct pch_dev *VAR_1 = FUNC_5(VAR_0);

 FUNC_6(VAR_1->ptp_clock);

 if (VAR_0->irq != 0)
  FUNC_1(VAR_0->irq, VAR_1);


 if (VAR_1->regs != ((void*)0)) {
  FUNC_2(VAR_1->regs);
  VAR_1->regs = ((void*)0);
 }

 if (VAR_1->mem_base != 0) {
  FUNC_7(VAR_1->mem_base, VAR_1->mem_size);
  VAR_1->mem_base = 0;
 }
 FUNC_4(VAR_0);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_0->dev, "complete\n");
}
