
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int * bridge; struct pci_bus* parent; TYPE_1__* self; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_0, bool VAR_1)
{
 while (VAR_0->parent) {
  if (FUNC_0(&VAR_0->self->dev))
   return FUNC_1(&VAR_0->self->dev, VAR_1);

  VAR_0 = VAR_0->parent;
 }


 if (VAR_0->bridge) {
  if (FUNC_0(VAR_0->bridge))
   return FUNC_1(VAR_0->bridge, VAR_1);
 }
 return 0;
}
