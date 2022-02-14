
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic {int link_work; int snic_lock; scalar_t__ stop_link_events; } ;
struct TYPE_2__ {int event_q; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct snic *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->snic_lock, VAR_2);
 if (VAR_1->stop_link_events) {
  FUNC_2(&VAR_1->snic_lock, VAR_2);

  return;
 }
 FUNC_2(&VAR_1->snic_lock, VAR_2);

 FUNC_0(VAR_0->event_q, &VAR_1->link_work);
}
