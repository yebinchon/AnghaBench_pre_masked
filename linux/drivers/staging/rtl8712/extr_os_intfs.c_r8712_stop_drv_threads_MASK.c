
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct completion {int dummy; } ;
struct TYPE_2__ {int cmd_seq; int cmd_queue_comp; struct completion terminate_cmdthread_comp; } ;
struct _adapter {TYPE_1__ cmdpriv; scalar_t__ cmd_thread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct completion*) ;

void FUNC_2(struct _adapter *VAR_0)
{
 struct completion *VAR_1 =
  &VAR_0->cmdpriv.terminate_cmdthread_comp;


 FUNC_0(&VAR_0->cmdpriv.cmd_queue_comp);
 if (VAR_0->cmd_thread)
  FUNC_1(VAR_1);
 VAR_0->cmdpriv.cmd_seq = 1;
}
