
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int alloc_txq; int alloc_rxq; void** rxq_map; void** txq_map; struct ice_pf* back; } ;
struct ice_pf {int avail_q_mutex; int avail_rxqs; int avail_txqs; } ;


 void* VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ice_vsi *VAR_1)
{
 struct ice_pf *VAR_2 = VAR_1->back;
 int VAR_3;

 FUNC_1(&VAR_2->avail_q_mutex);

 for (VAR_3 = 0; VAR_3 < VAR_1->alloc_txq; VAR_3++) {
  FUNC_0(VAR_1->txq_map[VAR_3], VAR_2->avail_txqs);
  VAR_1->txq_map[VAR_3] = VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->alloc_rxq; VAR_3++) {
  FUNC_0(VAR_1->rxq_map[VAR_3], VAR_2->avail_rxqs);
  VAR_1->rxq_map[VAR_3] = VAR_0;
 }

 FUNC_2(&VAR_2->avail_q_mutex);
}
