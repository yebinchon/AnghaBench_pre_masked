
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stop_req; int terminate_cmdthread_comp; int cmd_queue_comp; int cmdthd_running; } ;
struct adapter {TYPE_1__ cmdpriv; scalar_t__ cmdThread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_0)
{
 if (VAR_0->cmdThread &&
  FUNC_0(&(VAR_0->cmdpriv.cmdthd_running)) == 1 &&
  VAR_0->cmdpriv.stop_req == 0) {
  VAR_0->cmdpriv.stop_req = 1;
  FUNC_1(&VAR_0->cmdpriv.cmd_queue_comp);
  FUNC_2(&VAR_0->cmdpriv.terminate_cmdthread_comp);
 }
}
