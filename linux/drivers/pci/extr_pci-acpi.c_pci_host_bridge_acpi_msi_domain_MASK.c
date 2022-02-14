
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dev; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 struct irq_domain* FUNC_0 (struct fwnode_handle*,int ) ;
 struct fwnode_handle* FUNC_1 (int *) ;

struct irq_domain *FUNC_2(struct pci_bus *VAR_1)
{
 struct fwnode_handle *VAR_2;

 if (!&FUNC_1)
  return ((void*)0);

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (!VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_0);
}
