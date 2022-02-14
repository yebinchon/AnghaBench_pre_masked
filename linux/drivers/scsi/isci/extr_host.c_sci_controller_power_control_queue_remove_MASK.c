
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_phy {size_t phy_index; } ;
struct TYPE_2__ {int ** requesters; int phys_waiting; } ;
struct isci_host {TYPE_1__ power_control; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct isci_host *VAR_0,
            struct isci_phy *VAR_1)
{
 FUNC_0(VAR_1 == ((void*)0));

 if (VAR_0->power_control.requesters[VAR_1->phy_index])
  VAR_0->power_control.phys_waiting--;

 VAR_0->power_control.requesters[VAR_1->phy_index] = ((void*)0);
}
