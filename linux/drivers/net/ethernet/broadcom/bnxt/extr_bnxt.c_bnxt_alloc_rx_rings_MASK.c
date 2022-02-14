
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_ring_struct {int grp_idx; int ring_mem; } ;
struct bnxt_rx_ring_info {int rx_agg_bmap_size; int rx_agg_bmap; struct bnxt_ring_struct rx_agg_ring_struct; int xdp_rxq; int page_pool; struct bnxt_ring_struct rx_ring_struct; } ;
struct bnxt {int flags; int rx_nr_rings; int rx_agg_ring_mask; int dev; struct bnxt_rx_ring_info* rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,int *) ;
 int FUNC_1 (struct bnxt*,struct bnxt_rx_ring_info*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct bnxt *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;

 if (!VAR_5->rx_ring)
  return -VAR_2;

 if (VAR_5->flags & VAR_0)
  VAR_8 = 1;

 for (VAR_6 = 0; VAR_6 < VAR_5->rx_nr_rings; VAR_6++) {
  struct bnxt_rx_ring_info *VAR_9 = &VAR_5->rx_ring[VAR_6];
  struct bnxt_ring_struct *VAR_10;

  VAR_10 = &VAR_9->rx_ring_struct;

  VAR_7 = FUNC_1(VAR_5, VAR_9);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_4(&VAR_9->xdp_rxq, VAR_5->dev, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_5(&VAR_9->xdp_rxq,
      VAR_4,
      VAR_9->page_pool);
  if (VAR_7) {
   FUNC_6(&VAR_9->xdp_rxq);
   return VAR_7;
  }

  VAR_7 = FUNC_0(VAR_5, &VAR_10->ring_mem);
  if (VAR_7)
   return VAR_7;

  VAR_10->grp_idx = VAR_6;
  if (VAR_8) {
   u16 VAR_11;

   VAR_10 = &VAR_9->rx_agg_ring_struct;
   VAR_7 = FUNC_0(VAR_5, &VAR_10->ring_mem);
   if (VAR_7)
    return VAR_7;

   VAR_10->grp_idx = VAR_6;
   VAR_9->rx_agg_bmap_size = VAR_5->rx_agg_ring_mask + 1;
   VAR_11 = VAR_9->rx_agg_bmap_size / 8;
   VAR_9->rx_agg_bmap = FUNC_3(VAR_11, VAR_3);
   if (!VAR_9->rx_agg_bmap)
    return -VAR_2;
  }
 }
 if (VAR_5->flags & VAR_1)
  VAR_7 = FUNC_2(VAR_5);
 return VAR_7;
}
