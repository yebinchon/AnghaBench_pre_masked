
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * by_id; int * by_hash; int lock; } ;
struct ionic_lif {TYPE_1__ rx_filters; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ionic_lif *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(&VAR_1->rx_filters.lock);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->rx_filters.by_hash[VAR_2]);
  FUNC_0(&VAR_1->rx_filters.by_id[VAR_2]);
 }

 return 0;
}
