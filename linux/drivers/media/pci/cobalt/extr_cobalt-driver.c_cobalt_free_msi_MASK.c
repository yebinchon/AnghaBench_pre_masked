
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct cobalt {int dummy; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct cobalt *VAR_0, struct pci_dev *VAR_1)
{
 FUNC_0(VAR_1->irq, (void *)VAR_0);
 FUNC_1(VAR_1);
}
