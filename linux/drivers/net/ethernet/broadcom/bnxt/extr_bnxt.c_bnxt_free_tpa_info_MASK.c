
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_rx_ring_info {TYPE_1__* rx_tpa; TYPE_1__* rx_tpa_idx_map; } ;
struct bnxt {int rx_nr_rings; struct bnxt_rx_ring_info* rx_ring; } ;
struct TYPE_2__ {struct TYPE_2__* agg_arr; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_nr_rings; VAR_1++) {
  struct bnxt_rx_ring_info *VAR_2 = &VAR_0->rx_ring[VAR_1];

  FUNC_0(VAR_2->rx_tpa_idx_map);
  VAR_2->rx_tpa_idx_map = ((void*)0);
  if (VAR_2->rx_tpa) {
   FUNC_0(VAR_2->rx_tpa[0].agg_arr);
   VAR_2->rx_tpa[0].agg_arr = ((void*)0);
  }
  FUNC_0(VAR_2->rx_tpa);
  VAR_2->rx_tpa = ((void*)0);
 }
}
