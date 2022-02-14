
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {int * espibug_skb; scalar_t__ tx_sched; int tx_reclaim_timer; int espibug_timer; TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sge*) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct sge *VAR_2)
{
 int VAR_3;
 FUNC_5(0, VAR_2->adapter->regs + VAR_0);
 FUNC_3(VAR_2->adapter->regs + VAR_0);

 if (FUNC_1(VAR_2->adapter))
  FUNC_0(&VAR_2->espibug_timer);

 FUNC_0(&VAR_2->tx_reclaim_timer);
 if (VAR_2->tx_sched)
  FUNC_4(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_2(VAR_2->espibug_skb[VAR_3]);
}
