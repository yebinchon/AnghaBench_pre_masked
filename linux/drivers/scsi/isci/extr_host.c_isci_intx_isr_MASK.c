
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_host {int scic_lock; int completion_tasklet; TYPE_1__* smu_registers; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int interrupt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isci_host*) ;
 scalar_t__ FUNC_1 (struct isci_host*) ;
 scalar_t__ FUNC_2 (struct isci_host*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 irqreturn_t VAR_5 = VAR_1;
 struct isci_host *VAR_6 = VAR_4;

 if (FUNC_2(VAR_6)) {
  FUNC_6(VAR_2, &VAR_6->smu_registers->interrupt_status);
  FUNC_5(&VAR_6->completion_tasklet);
  VAR_5 = VAR_0;
 } else if (FUNC_1(VAR_6)) {
  FUNC_3(&VAR_6->scic_lock);
  FUNC_0(VAR_6);
  FUNC_4(&VAR_6->scic_lock);
  VAR_5 = VAR_0;
 }

 return VAR_5;
}
