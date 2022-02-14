
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_11__ {int cntxt_id; int restarted; scalar_t__ credits; int starved; int lock; } ;
struct sge_qset {int rx_reclaim_timer; TYPE_6__* fl; TYPE_5__ rspq; int napi; int netdev; } ;
struct port_info {struct adapter* adapter; } ;
struct TYPE_10__ {int rev; } ;
struct TYPE_9__ {TYPE_2__* qs; } ;
struct adapter {TYPE_4__ params; TYPE_3__ sge; } ;
typedef int spinlock_t ;
struct TYPE_12__ {scalar_t__ credits; scalar_t__ size; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_8__ {TYPE_1__ rspq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adapter*,TYPE_6__*) ;
 struct sge_qset* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 struct port_info* FUNC_4 (int ) ;
 struct sge_qset* VAR_3 ;
 int FUNC_5 (struct adapter*,TYPE_5__*,int) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_5)
{
 spinlock_t *VAR_6;
 struct sge_qset *VAR_7 = FUNC_1(VAR_7, VAR_5, VAR_4);
 struct port_info *VAR_8 = FUNC_4(VAR_7->netdev);
 struct adapter *VAR_9 = VAR_8->adapter;
 u32 VAR_10;

 VAR_6 = VAR_9->params.rev > 0 ?
        &VAR_7->rspq.lock : &VAR_9->sge.qs[0].rspq.lock;

 if (!FUNC_6(VAR_6))
  goto out;

 if (FUNC_3(&VAR_7->napi))
  goto unlock;

 if (VAR_9->params.rev < 4) {
  VAR_10 = FUNC_8(VAR_9, VAR_0);

  if (VAR_10 & (1 << VAR_7->rspq.cntxt_id)) {
   VAR_7->rspq.starved++;
   if (VAR_7->rspq.credits) {
    VAR_7->rspq.credits--;
    FUNC_5(VAR_9, &VAR_7->rspq, 1);
    VAR_7->rspq.restarted++;
    FUNC_9(VAR_9, VAR_0,
          1 << VAR_7->rspq.cntxt_id);
   }
  }
 }

 if (VAR_7->fl[0].credits < VAR_7->fl[0].size)
  FUNC_0(VAR_9, &VAR_7->fl[0]);
 if (VAR_7->fl[1].credits < VAR_7->fl[1].size)
  FUNC_0(VAR_9, &VAR_7->fl[1]);

unlock:
 FUNC_7(VAR_6);
out:
 FUNC_2(&VAR_7->rx_reclaim_timer, VAR_2 + VAR_1);
}
