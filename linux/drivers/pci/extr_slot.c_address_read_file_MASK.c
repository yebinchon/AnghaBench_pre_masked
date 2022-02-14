
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_slot {int number; TYPE_1__* bus; } ;
typedef int ssize_t ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,int,int,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct pci_slot *VAR_0, char *VAR_1)
{
 if (VAR_0->number == 0xff)
  return FUNC_1(VAR_1, "%04x:%02x\n",
    FUNC_0(VAR_0->bus),
    VAR_0->bus->number);
 else
  return FUNC_1(VAR_1, "%04x:%02x:%02x\n",
    FUNC_0(VAR_0->bus),
    VAR_0->bus->number,
    VAR_0->number);
}
