
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 struct irq_domain* FUNC_0 (struct fwnode_handle*,int ) ;
 struct irq_domain* FUNC_1 (struct pci_bus*) ;
 struct irq_domain* FUNC_2 (struct pci_bus*) ;
 struct fwnode_handle* FUNC_3 (struct pci_bus*) ;

__attribute__((used)) static struct irq_domain *FUNC_4(struct pci_bus *VAR_1)
{
 struct irq_domain *VAR_2;





 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_1);
 return VAR_2;
}
