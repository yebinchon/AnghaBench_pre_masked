
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transfer_timer {int state; int timer; } ;
struct vudc {TYPE_1__* pdev; struct transfer_timer tr_timer; } ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct vudc *VAR_0, unsigned long VAR_1)
{
 struct transfer_timer *VAR_2 = &VAR_0->tr_timer;

 FUNC_0(&VAR_0->pdev->dev, "timer kick");
 switch (VAR_2->state) {
 case 129:
  return;
 case 130:
  VAR_2->state = 129;

 case 128:

  FUNC_1(&VAR_2->timer, VAR_1);
 }
}
