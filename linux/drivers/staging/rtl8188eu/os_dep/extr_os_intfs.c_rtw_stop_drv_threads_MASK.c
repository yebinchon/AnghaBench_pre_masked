
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int terminate_cmdthread_comp; int cmd_queue_comp; } ;
struct adapter {TYPE_1__ cmdpriv; scalar_t__ cmdThread; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, ("+rtw_stop_drv_threads\n"));


 FUNC_1(&VAR_2->cmdpriv.cmd_queue_comp);
 if (VAR_2->cmdThread)
  FUNC_2(&VAR_2->cmdpriv.terminate_cmdthread_comp);
}
