
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int link_work; int fnic_lock; scalar_t__ stop_rx_link_events; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct fnic *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->fnic_lock, VAR_2);
 if (VAR_1->stop_rx_link_events) {
  FUNC_2(&VAR_1->fnic_lock, VAR_2);
  return;
 }
 FUNC_2(&VAR_1->fnic_lock, VAR_2);

 FUNC_0(VAR_0, &VAR_1->link_work);

}
