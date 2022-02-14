
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_host {TYPE_1__* smu_registers; int flags; } ;
struct TYPE_2__ {int interrupt_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct isci_host *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_1(0, &VAR_1->smu_registers->interrupt_mask);
}
