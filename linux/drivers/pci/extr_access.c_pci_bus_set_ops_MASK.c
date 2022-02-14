
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_ops {int dummy; } ;
struct pci_bus {struct pci_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct pci_ops *FUNC_2(struct pci_bus *VAR_1, struct pci_ops *VAR_2)
{
 struct pci_ops *VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_0, VAR_4);
 VAR_3 = VAR_1->ops;
 VAR_1->ops = VAR_2;
 FUNC_1(&VAR_0, VAR_4);
 return VAR_3;
}
