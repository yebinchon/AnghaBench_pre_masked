
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_queue_stats {TYPE_1__* priv; } ;
struct cw1200_queue {int queue_id; int tx_locked_cnt; struct cw1200_queue_stats* stats; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct cw1200_queue *VAR_0)
{
 struct cw1200_queue_stats *VAR_1 = VAR_0->stats;
 if (VAR_0->tx_locked_cnt++ == 0) {
  FUNC_1("[TX] Queue %d is locked.\n",
    VAR_0->queue_id);
  FUNC_0(VAR_1->priv->hw, VAR_0->queue_id);
 }
}
