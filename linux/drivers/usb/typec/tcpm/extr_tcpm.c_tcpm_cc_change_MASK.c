
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int event_work; int wq; int pd_event_lock; int pd_events; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tcpm_port *VAR_1)
{
 FUNC_1(&VAR_1->pd_event_lock);
 VAR_1->pd_events |= VAR_0;
 FUNC_2(&VAR_1->pd_event_lock);
 FUNC_0(VAR_1->wq, &VAR_1->event_work);
}
