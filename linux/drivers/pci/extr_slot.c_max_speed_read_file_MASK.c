
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_slot {TYPE_1__* bus; } ;
typedef int ssize_t ;
struct TYPE_2__ {int max_bus_speed; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct pci_slot *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_0->bus->max_bus_speed, VAR_1);
}
