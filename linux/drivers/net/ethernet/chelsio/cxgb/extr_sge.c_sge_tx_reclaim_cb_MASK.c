
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sge {int tx_reclaim_timer; TYPE_1__* adapter; struct cmdQ* cmdQ; } ;
struct cmdQ {int lock; scalar_t__ in_use; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sge* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct sge*,struct cmdQ*) ;
 struct sge* VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_7)
{
 int VAR_8;
 struct sge *VAR_9 = FUNC_0(VAR_9, VAR_7, VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  struct cmdQ *VAR_10 = &VAR_9->cmdQ[VAR_8];

  if (!FUNC_3(&VAR_10->lock))
   continue;

  FUNC_2(VAR_9, VAR_10);
  if (VAR_8 == 0 && VAR_10->in_use) {
   FUNC_5(VAR_1, VAR_9->adapter->regs + VAR_0);
  }
  FUNC_4(&VAR_10->lock);
 }
 FUNC_1(&VAR_9->tx_reclaim_timer, VAR_4 + VAR_3);
}
