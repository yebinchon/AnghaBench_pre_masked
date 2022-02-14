
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phys_granted_power; scalar_t__ phys_waiting; int requesters; int timer; } ;
struct isci_host {TYPE_1__ power_control; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct isci_host *VAR_1)
{
 FUNC_1(&VAR_1->power_control.timer, VAR_0);

 FUNC_0(VAR_1->power_control.requesters, 0,
        sizeof(VAR_1->power_control.requesters));

 VAR_1->power_control.phys_waiting = 0;
 VAR_1->power_control.phys_granted_power = 0;
}
