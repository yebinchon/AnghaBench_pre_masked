
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ tx_pending_len; int driver_lock; int waitq; int wakeup_dev_required; int cur_cmd; int dnld_sent; int tx_lockup_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct lbs_private *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->driver_lock, VAR_2);
 FUNC_0(&VAR_1->tx_lockup_timer);

 VAR_1->dnld_sent = VAR_0;


 if (!VAR_1->cur_cmd || VAR_1->tx_pending_len > 0) {
  if (!VAR_1->wakeup_dev_required)
   FUNC_3(&VAR_1->waitq);
 }

 FUNC_2(&VAR_1->driver_lock, VAR_2);
}
