
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_struct {int ring_mem; } ;
struct bnxt_rx_ring_info {struct bnxt_ring_struct rx_agg_ring_struct; struct bnxt_ring_struct rx_ring_struct; int * rx_agg_bmap; int * page_pool; int xdp_rxq; scalar_t__ xdp_prog; } ;
struct bnxt {int rx_nr_rings; struct bnxt_rx_ring_info* rx_ring; } ;


 int FUNC_0 (struct bnxt*,int *) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct bnxt *VAR_0)
{
 int VAR_1;

 if (!VAR_0->rx_ring)
  return;

 FUNC_1(VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->rx_nr_rings; VAR_1++) {
  struct bnxt_rx_ring_info *VAR_2 = &VAR_0->rx_ring[VAR_1];
  struct bnxt_ring_struct *VAR_3;

  if (VAR_2->xdp_prog)
   FUNC_2(VAR_2->xdp_prog);

  if (FUNC_5(&VAR_2->xdp_rxq))
   FUNC_6(&VAR_2->xdp_rxq);

  FUNC_4(VAR_2->page_pool);
  VAR_2->page_pool = ((void*)0);

  FUNC_3(VAR_2->rx_agg_bmap);
  VAR_2->rx_agg_bmap = ((void*)0);

  VAR_3 = &VAR_2->rx_ring_struct;
  FUNC_0(VAR_0, &VAR_3->ring_mem);

  VAR_3 = &VAR_2->rx_agg_ring_struct;
  FUNC_0(VAR_0, &VAR_3->ring_mem);
 }
}
