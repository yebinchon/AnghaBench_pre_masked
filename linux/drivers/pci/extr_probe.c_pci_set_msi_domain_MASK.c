
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; TYPE_1__* bus; } ;
struct irq_domain {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct irq_domain* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct irq_domain*) ;
 struct irq_domain* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct irq_domain *VAR_1;






 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  VAR_1 = FUNC_0(&VAR_0->bus->dev);

 FUNC_1(&VAR_0->dev, VAR_1);
}
