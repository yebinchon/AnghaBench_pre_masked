
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci_bus {int children; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct pci_bus* FUNC_2 (struct pci_bus*,struct pci_dev*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

struct pci_bus *FUNC_4(struct pci_bus *VAR_1, struct pci_dev *VAR_2,
    int VAR_3)
{
 struct pci_bus *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_0);
  FUNC_1(&VAR_4->node, &VAR_1->children);
  FUNC_3(&VAR_0);
 }
 return VAR_4;
}
