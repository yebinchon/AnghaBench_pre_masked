
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kref; } ;
struct pci_slot {TYPE_2__ kobj; int number; TYPE_1__* bus; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct pci_slot *VAR_1)
{
 FUNC_0(&VAR_1->bus->dev, "dev %02x, dec refcount to %d\n",
  VAR_1->number, FUNC_2(&VAR_1->kobj.kref) - 1);

 FUNC_3(&VAR_0);
 FUNC_1(&VAR_1->kobj);
 FUNC_4(&VAR_0);
}
