
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_tx_ring_info {scalar_t__ hw_tx_cons; scalar_t__ tx_cons; } ;
struct bnx2_rx_ring_info {scalar_t__ rx_pg_cons; scalar_t__ rx_pg_prod; scalar_t__ rx_cons; scalar_t__ rx_prod; scalar_t__ rx_prod_bseq; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {struct bnx2_napi* bnx2_napi; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct bnx2 *VAR_1)
{
 struct bnx2_napi *VAR_2;
 struct bnx2_tx_ring_info *VAR_3;
 struct bnx2_rx_ring_info *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_2 = &VAR_1->bnx2_napi[VAR_5];
  VAR_3 = &VAR_2->tx_ring;
  VAR_4 = &VAR_2->rx_ring;

  VAR_3->tx_cons = 0;
  VAR_3->hw_tx_cons = 0;
  VAR_4->rx_prod_bseq = 0;
  VAR_4->rx_prod = 0;
  VAR_4->rx_cons = 0;
  VAR_4->rx_pg_prod = 0;
  VAR_4->rx_pg_cons = 0;
 }
}
