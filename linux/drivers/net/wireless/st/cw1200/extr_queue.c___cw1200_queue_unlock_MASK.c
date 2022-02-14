
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_queue_stats {TYPE_1__* priv; } ;
struct cw1200_queue {scalar_t__ tx_locked_cnt; int queue_id; struct cw1200_queue_stats* stats; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct cw1200_queue *VAR_0)
{
 struct cw1200_queue_stats *VAR_1 = VAR_0->stats;
 FUNC_0(!VAR_0->tx_locked_cnt);
 if (--VAR_0->tx_locked_cnt == 0) {
  FUNC_2("[TX] Queue %d is unlocked.\n",
    VAR_0->queue_id);
  FUNC_1(VAR_1->priv->hw, VAR_0->queue_id);
 }
}
