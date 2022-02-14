
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct irq_domain {int dummy; } ;


 struct irq_domain* FUNC_0 (int *) ;
 struct irq_domain* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static struct irq_domain *FUNC_2(struct pci_dev *VAR_0)
{
 struct irq_domain *VAR_1;





 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  return VAR_1;





 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return ((void*)0);
}
