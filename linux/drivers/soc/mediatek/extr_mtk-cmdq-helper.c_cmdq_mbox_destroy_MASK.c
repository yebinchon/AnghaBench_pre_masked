
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_client {scalar_t__ timeout_ms; int chan; int lock; int timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cmdq_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cmdq_client *VAR_1)
{
 if (VAR_1->timeout_ms != VAR_0) {
  FUNC_3(&VAR_1->lock);
  FUNC_0(&VAR_1->timer);
  FUNC_4(&VAR_1->lock);
 }
 FUNC_2(VAR_1->chan);
 FUNC_1(VAR_1);
}
