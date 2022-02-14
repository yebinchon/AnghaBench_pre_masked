
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54_common {int conf_mutex; scalar_t__ tsf_low32; scalar_t__ tsf_high32; int beacon_req_id; TYPE_1__* tx_stats; int tx_queue; int tx_pending; int (* stop ) (struct ieee80211_hw*) ;int work; scalar_t__ softled_state; int mode; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct p54_common*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_2)
{
 struct p54_common *VAR_3 = VAR_2->priv;
 int VAR_4;

 VAR_3->mode = VAR_0;
 VAR_3->softled_state = 0;
 FUNC_0(&VAR_3->work);
 FUNC_2(&VAR_3->conf_mutex);
 FUNC_4(VAR_3);
 VAR_3->stop(VAR_2);
 FUNC_5(&VAR_3->tx_pending);
 FUNC_5(&VAR_3->tx_queue);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->tx_stats[VAR_4].count = 0;
  VAR_3->tx_stats[VAR_4].len = 0;
 }

 VAR_3->beacon_req_id = FUNC_1(0);
 VAR_3->tsf_high32 = VAR_3->tsf_low32 = 0;
 FUNC_3(&VAR_3->conf_mutex);
}
