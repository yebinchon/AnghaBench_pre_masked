
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p54_common {scalar_t__ mode; int tx_stats_lock; TYPE_2__* hw; TYPE_1__* tx_stats; } ;
struct TYPE_4__ {unsigned int queues; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ limit; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (struct p54_common*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct p54_common *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 if (FUNC_4(VAR_2->mode == VAR_0))
  return ;

 FUNC_1(VAR_2);

 FUNC_2(&VAR_2->tx_stats_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2->hw->queues; VAR_4++) {
  if (VAR_2->tx_stats[VAR_4 + VAR_1].len <
      VAR_2->tx_stats[VAR_4 + VAR_1].limit)
   FUNC_0(VAR_2->hw, VAR_4);
 }
 FUNC_3(&VAR_2->tx_stats_lock, VAR_3);
}
