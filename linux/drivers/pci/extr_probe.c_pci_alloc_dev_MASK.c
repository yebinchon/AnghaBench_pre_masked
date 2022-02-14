
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; } ;
struct pci_dev {int bus; TYPE_1__ dev; int bus_list; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pci_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_bus*) ;
 int VAR_1 ;

struct pci_dev *FUNC_3(struct pci_bus *VAR_2)
{
 struct pci_dev *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct pci_dev), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->bus_list);
 VAR_3->dev.type = &VAR_1;
 VAR_3->bus = FUNC_2(VAR_2);

 return VAR_3;
}
