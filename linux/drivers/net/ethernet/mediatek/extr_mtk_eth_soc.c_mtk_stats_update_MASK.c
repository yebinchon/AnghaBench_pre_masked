
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_eth {TYPE_2__** mac; } ;
struct TYPE_4__ {TYPE_1__* hw_stats; } ;
struct TYPE_3__ {int stats_lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_eth *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->mac[VAR_2] || !VAR_1->mac[VAR_2]->hw_stats)
   continue;
  if (FUNC_1(&VAR_1->mac[VAR_2]->hw_stats->stats_lock)) {
   FUNC_0(VAR_1->mac[VAR_2]);
   FUNC_2(&VAR_1->mac[VAR_2]->hw_stats->stats_lock);
  }
 }
}
