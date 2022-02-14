
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {int pm_state; int tx_queue_stats; int * tx_queue; int * sdd; int * workqueue; int wsm_cmd_buf; int conf_mutex; int mcast_timeout; } ;


 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_0)
{
 struct cw1200_common *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_7(VAR_0);

 FUNC_5(&VAR_1->mcast_timeout);
 FUNC_4(VAR_1);

 FUNC_0(VAR_1);

 FUNC_8(&VAR_1->conf_mutex);

 FUNC_10(&VAR_1->wsm_cmd_buf);

 FUNC_6(VAR_1->workqueue);
 VAR_1->workqueue = ((void*)0);

 if (VAR_1->sdd) {
  FUNC_9(VAR_1->sdd);
  VAR_1->sdd = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  FUNC_2(&VAR_1->tx_queue[VAR_2]);

 FUNC_3(&VAR_1->tx_queue_stats);



}
