
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer_timer {int state; int timer; } ;
struct vudc {struct transfer_timer tr_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;

void FUNC_1(struct vudc *VAR_2)
{
 struct transfer_timer *VAR_3 = &VAR_2->tr_timer;

 FUNC_0(&VAR_3->timer, VAR_1, 0);
 VAR_3->state = VAR_0;
}
