
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct pci_bus {int cur_bus_speed; } ;


 size_t VAR_0 ;
 int * VAR_1 ;

void FUNC_0(struct pci_bus *VAR_2, u16 VAR_3)
{
 VAR_2->cur_bus_speed = VAR_1[VAR_3 & VAR_0];
}
