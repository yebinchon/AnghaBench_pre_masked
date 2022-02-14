
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int uapsd; int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {size_t queues; struct cw1200_common* priv; } ;
struct TYPE_3__ {int uapsd_flags; } ;
struct TYPE_4__ {int * params; } ;
struct cw1200_common {scalar_t__ mode; scalar_t__ join_status; int conf_mutex; int powersave_mode; TYPE_1__ uapsd_info; scalar_t__ setbssparams_done; int edca; TYPE_2__ tx_queue_params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,size_t,int ,int ,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,size_t,int ,int ,int ) ;
 int FUNC_2 (struct cw1200_common*,int *) ;
 int FUNC_3 (struct cw1200_common*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cw1200_common*,int *) ;
 int FUNC_8 (struct cw1200_common*,int *,size_t) ;

int FUNC_9(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4,
     u16 VAR_5, const struct ieee80211_tx_queue_params *VAR_6)
{
 struct cw1200_common *VAR_7 = VAR_3->priv;
 int VAR_8 = 0;

 bool VAR_9;

 FUNC_5(&VAR_7->conf_mutex);

 if (VAR_5 < VAR_3->queues) {
  VAR_9 = FUNC_4(VAR_7->uapsd_info.uapsd_flags);

  FUNC_1(&VAR_7->tx_queue_params, VAR_5, 0, 0, 0);
  VAR_8 = FUNC_8(VAR_7,
           &VAR_7->tx_queue_params.params[VAR_5], VAR_5);
  if (VAR_8) {
   VAR_8 = -VAR_1;
   goto out;
  }

  FUNC_0(&VAR_7->edca, VAR_5, VAR_6->aifs,
        VAR_6->cw_min, VAR_6->cw_max,
        VAR_6->txop, 0xc8,
        VAR_6->uapsd);
  VAR_8 = FUNC_7(VAR_7, &VAR_7->edca);
  if (VAR_8) {
   VAR_8 = -VAR_1;
   goto out;
  }

  if (VAR_7->mode == VAR_2) {
   VAR_8 = FUNC_3(VAR_7, &VAR_7->edca);
   if (!VAR_8 && VAR_7->setbssparams_done &&
       (VAR_7->join_status == VAR_0) &&
       (VAR_9 != FUNC_4(VAR_7->uapsd_info.uapsd_flags)))
    VAR_8 = FUNC_2(VAR_7, &VAR_7->powersave_mode);
  }
 } else {
  VAR_8 = -VAR_1;
 }

out:
 FUNC_6(&VAR_7->conf_mutex);
 return VAR_8;
}
