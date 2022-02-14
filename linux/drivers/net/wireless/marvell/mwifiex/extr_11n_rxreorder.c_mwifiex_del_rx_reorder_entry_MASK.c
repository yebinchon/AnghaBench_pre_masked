
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer_is_set; int timer; } ;
struct mwifiex_rx_reorder_tbl {int start_win; int win_size; struct mwifiex_rx_reorder_tbl* rx_reorder_ptr; int list; TYPE_1__ timer_context; } ;
struct mwifiex_private {TYPE_2__* adapter; int rx_reorder_tbl_lock; } ;
struct TYPE_4__ {int rx_locked; int rx_proc_lock; int rx_workqueue; scalar_t__ rx_processing; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_rx_reorder_tbl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mwifiex_private*,struct mwifiex_rx_reorder_tbl*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct mwifiex_private *VAR_1,
        struct mwifiex_rx_reorder_tbl *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 FUNC_5(&VAR_1->adapter->rx_proc_lock);
 VAR_1->adapter->rx_locked = 1;
 if (VAR_1->adapter->rx_processing) {
  FUNC_6(&VAR_1->adapter->rx_proc_lock);
  FUNC_1(VAR_1->adapter->rx_workqueue);
 } else {
  FUNC_6(&VAR_1->adapter->rx_proc_lock);
 }

 VAR_3 = (VAR_2->start_win + VAR_2->win_size) & (VAR_0 - 1);
 FUNC_4(VAR_1, VAR_2, VAR_3);

 FUNC_0(&VAR_2->timer_context.timer);
 VAR_2->timer_context.timer_is_set = 0;

 FUNC_5(&VAR_1->rx_reorder_tbl_lock);
 FUNC_3(&VAR_2->list);
 FUNC_6(&VAR_1->rx_reorder_tbl_lock);

 FUNC_2(VAR_2->rx_reorder_ptr);
 FUNC_2(VAR_2);

 FUNC_5(&VAR_1->adapter->rx_proc_lock);
 VAR_1->adapter->rx_locked = 0;
 FUNC_6(&VAR_1->adapter->rx_proc_lock);

}
