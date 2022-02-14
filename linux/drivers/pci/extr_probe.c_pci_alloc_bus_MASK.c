
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int domain_nr; void* cur_bus_speed; void* max_bus_speed; int resources; int slots; int devices; int children; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* VAR_1 ;
 struct pci_bus* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pci_bus *FUNC_2(struct pci_bus *VAR_2)
{
 struct pci_bus *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->node);
 FUNC_0(&VAR_3->children);
 FUNC_0(&VAR_3->devices);
 FUNC_0(&VAR_3->slots);
 FUNC_0(&VAR_3->resources);
 VAR_3->max_bus_speed = VAR_1;
 VAR_3->cur_bus_speed = VAR_1;




 return VAR_3;
}
