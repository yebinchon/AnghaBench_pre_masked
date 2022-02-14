
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxq {scalar_t__ used_count; scalar_t__ free_count; int rx_used; int rx_free; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iwl_rxq *VAR_0)
{
 FUNC_1(&VAR_0->lock);

 FUNC_0(&VAR_0->rx_free);
 FUNC_0(&VAR_0->rx_used);
 VAR_0->free_count = 0;
 VAR_0->used_count = 0;
}
