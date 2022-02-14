
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transfer_timer {int state; } ;
struct vudc {TYPE_1__* pdev; struct transfer_timer tr_timer; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

void FUNC_1(struct vudc *VAR_1)
{
 struct transfer_timer *VAR_2 = &VAR_1->tr_timer;


 FUNC_0(&VAR_1->pdev->dev, "timer stop");
 VAR_2->state = VAR_0;
}
