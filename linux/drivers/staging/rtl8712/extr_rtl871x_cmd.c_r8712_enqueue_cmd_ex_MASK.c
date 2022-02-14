
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct __queue {int lock; int queue; } ;
struct cmd_priv {int cmd_queue_comp; struct __queue cmd_queue; TYPE_2__* padapter; } ;
struct cmd_obj {int list; } ;
struct TYPE_3__ {scalar_t__ bautoload_fail_flag; } ;
struct TYPE_4__ {TYPE_1__ eeprompriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct cmd_priv *VAR_0, struct cmd_obj *VAR_1)
{
 unsigned long VAR_2;
 struct __queue *VAR_3;

 if (!VAR_1)
  return;
 if (VAR_0->padapter->eeprompriv.bautoload_fail_flag)
  return;
 VAR_3 = &VAR_0->cmd_queue;
 FUNC_2(&VAR_3->lock, VAR_2);
 FUNC_1(&VAR_1->list, &VAR_3->queue);
 FUNC_3(&VAR_3->lock, VAR_2);
 FUNC_0(&VAR_0->cmd_queue_comp);
}
