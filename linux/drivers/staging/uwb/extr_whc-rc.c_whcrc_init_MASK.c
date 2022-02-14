
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {int event_work; int cmd_wq; int irq_lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct whcrc *VAR_1)
{
 FUNC_2(&VAR_1->irq_lock);
 FUNC_1(&VAR_1->cmd_wq);
 FUNC_0(&VAR_1->event_work, VAR_0);
}
