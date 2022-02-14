
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxq {int rx_used; } ;
struct iwl_rb_allocator {int lock; int rbd_empty; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iwl_rxq *VAR_0,
       struct iwl_rb_allocator *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_0->rx_used, &VAR_1->rbd_empty);
 FUNC_2(&VAR_1->lock);
}
