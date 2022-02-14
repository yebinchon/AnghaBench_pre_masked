
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_tx_ring_info {scalar_t__ tx_cons; scalar_t__ tx_prod; } ;
struct bnxt_rx_ring_info {scalar_t__ rx_next_cons; scalar_t__ rx_sw_agg_prod; scalar_t__ rx_agg_prod; scalar_t__ rx_prod; } ;
struct bnxt_cp_ring_info {scalar_t__ cp_raw_cons; } ;
struct bnxt_napi {struct bnxt_rx_ring_info* rx_ring; struct bnxt_tx_ring_info* tx_ring; struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;



__attribute__((used)) static void FUNC_0(struct bnxt *VAR_0)
{
 int VAR_1;

 if (!VAR_0->bnapi)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  struct bnxt_napi *VAR_2 = VAR_0->bnapi[VAR_1];
  struct bnxt_cp_ring_info *VAR_3;
  struct bnxt_rx_ring_info *VAR_4;
  struct bnxt_tx_ring_info *VAR_5;

  if (!VAR_2)
   continue;

  VAR_3 = &VAR_2->cp_ring;
  VAR_3->cp_raw_cons = 0;

  VAR_5 = VAR_2->tx_ring;
  if (VAR_5) {
   VAR_5->tx_prod = 0;
   VAR_5->tx_cons = 0;
  }

  VAR_4 = VAR_2->rx_ring;
  if (VAR_4) {
   VAR_4->rx_prod = 0;
   VAR_4->rx_agg_prod = 0;
   VAR_4->rx_sw_agg_prod = 0;
   VAR_4->rx_next_cons = 0;
  }
 }
}
