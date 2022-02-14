
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; } ;
struct transfer_timer {int state; int frame_limit; int frame_start; } ;
struct vudc {TYPE_1__ gadget; TYPE_2__* pdev; struct transfer_timer tr_timer; } ;
struct TYPE_4__ {int dev; } ;





 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 void FUNC_2 (struct vudc*,int ) ;

void FUNC_3(struct vudc *VAR_1)
{
 struct transfer_timer *VAR_2 = &VAR_1->tr_timer;

 FUNC_0(&VAR_1->pdev->dev, "timer start");
 switch (VAR_2->state) {
 case 129:
  return;
 case 130:
  return FUNC_2(VAR_1, VAR_0);
 case 128:
  VAR_2->state = 130;
  VAR_2->frame_start = VAR_0;
  VAR_2->frame_limit = FUNC_1(VAR_1->gadget.speed);
  return FUNC_2(VAR_1, VAR_0);
 }
}
