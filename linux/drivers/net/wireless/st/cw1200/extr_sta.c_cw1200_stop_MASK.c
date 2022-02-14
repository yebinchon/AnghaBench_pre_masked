
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct cw1200_common* priv; } ;
struct TYPE_2__ {int timeout; int probe_work; int lock; int * req; } ;
struct cw1200_common {int listening; int join_pending; int tx_lock; int conf_mutex; int * tx_queue; int join_status; int event_queue_lock; int event_queue; int mode; int mcast_timeout; int workqueue; int link_id_gc_work; int unjoin_work; int join_timeout; int clear_recent_scan_work; TYPE_1__ scan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cw1200_common*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct cw1200_common*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct cw1200_common*) ;
 int FUNC_20 (struct cw1200_common*) ;

void FUNC_21(struct ieee80211_hw *VAR_3)
{
 struct cw1200_common *VAR_4 = VAR_3->priv;
 FUNC_0(VAR_2);
 int VAR_5;

 FUNC_19(VAR_4);

 while (FUNC_8(&VAR_4->scan.lock)) {

  VAR_4->scan.req = ((void*)0);
  FUNC_14();
 }
 FUNC_18(&VAR_4->scan.lock);

 FUNC_3(&VAR_4->scan.probe_work);
 FUNC_3(&VAR_4->scan.timeout);
 FUNC_3(&VAR_4->clear_recent_scan_work);
 FUNC_3(&VAR_4->join_timeout);
 FUNC_5(VAR_4, 0, 0, 0);
 FUNC_4(&VAR_4->unjoin_work);
 FUNC_3(&VAR_4->link_id_gc_work);
 FUNC_9(VAR_4->workqueue);
 FUNC_7(&VAR_4->mcast_timeout);
 FUNC_11(&VAR_4->conf_mutex);
 VAR_4->mode = VAR_1;
 VAR_4->listening = 0;

 FUNC_15(&VAR_4->event_queue_lock);
 FUNC_10(&VAR_4->event_queue, &VAR_2);
 FUNC_16(&VAR_4->event_queue_lock);
 FUNC_1(&VAR_2);


 VAR_4->join_status = VAR_0;
 VAR_4->join_pending = 0;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_6(&VAR_4->tx_queue[VAR_5]);
 FUNC_12(&VAR_4->conf_mutex);
 FUNC_17(VAR_4);


 if (FUNC_2(&VAR_4->tx_lock, 1) != 1)
  FUNC_13("[STA] TX is force-unlocked due to stop request.\n");

 FUNC_20(VAR_4);
 FUNC_2(&VAR_4->tx_lock, 0);
}
