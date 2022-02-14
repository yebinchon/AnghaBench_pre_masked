
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct pci_dev {int dev; } ;
struct page {int dummy; } ;
struct bnxt_tpa_info {int * data; int mapping; } ;
struct bnxt_tpa_idx_map {int agg_idx_bmap; } ;
struct bnxt_sw_rx_bd {int * data; int mapping; } ;
struct bnxt_sw_rx_agg_bd {struct page* page; int mapping; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_idx_map* rx_tpa_idx_map; struct page* rx_page; int rx_agg_bmap; struct bnxt_sw_rx_agg_bd* rx_agg_ring; int page_pool; struct bnxt_sw_rx_bd* rx_buf_ring; struct bnxt_tpa_info* rx_tpa; } ;
struct bnxt {int rx_nr_pages; int rx_agg_nr_pages; int rx_nr_rings; int max_tpa; int rx_dir; int rx_buf_use_size; scalar_t__ rx_dma_offset; struct bnxt_rx_ring_info* rx_ring; struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static void FUNC_8(struct bnxt *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct pci_dev *VAR_9 = VAR_5->pdev;

 if (!VAR_5->rx_ring)
  return;

 VAR_7 = VAR_5->rx_nr_pages * VAR_4;
 VAR_8 = VAR_5->rx_agg_nr_pages * VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_5->rx_nr_rings; VAR_6++) {
  struct bnxt_rx_ring_info *VAR_10 = &VAR_5->rx_ring[VAR_6];
  struct bnxt_tpa_idx_map *VAR_11;
  int VAR_12;

  if (VAR_10->rx_tpa) {
   for (VAR_12 = 0; VAR_12 < VAR_5->max_tpa; VAR_12++) {
    struct bnxt_tpa_info *VAR_13 =
       &VAR_10->rx_tpa[VAR_12];
    u8 *VAR_14 = VAR_13->data;

    if (!VAR_14)
     continue;

    FUNC_4(&VAR_9->dev,
             VAR_13->mapping,
             VAR_5->rx_buf_use_size,
             VAR_5->rx_dir,
             VAR_1);

    VAR_13->data = ((void*)0);

    FUNC_5(VAR_14);
   }
  }

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   struct bnxt_sw_rx_bd *VAR_15 = &VAR_10->rx_buf_ring[VAR_12];
   dma_addr_t VAR_16 = VAR_15->mapping;
   void *VAR_17 = VAR_15->data;

   if (!VAR_17)
    continue;

   VAR_15->data = ((void*)0);

   if (FUNC_0(VAR_5)) {
    VAR_16 -= VAR_5->rx_dma_offset;
    FUNC_3(&VAR_9->dev, VAR_16,
           VAR_2, VAR_5->rx_dir,
           VAR_1);
    FUNC_7(VAR_10->page_pool, VAR_17);
   } else {
    FUNC_4(&VAR_9->dev, VAR_16,
             VAR_5->rx_buf_use_size,
             VAR_5->rx_dir,
             VAR_1);
    FUNC_5(VAR_17);
   }
  }

  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   struct bnxt_sw_rx_agg_bd *VAR_18 =
    &VAR_10->rx_agg_ring[VAR_12];
   struct page *VAR_19 = VAR_18->page;

   if (!VAR_19)
    continue;

   FUNC_3(&VAR_9->dev, VAR_18->mapping,
          VAR_0,
          VAR_3,
          VAR_1);

   VAR_18->page = ((void*)0);
   FUNC_1(VAR_12, VAR_10->rx_agg_bmap);

   FUNC_2(VAR_19);
  }
  if (VAR_10->rx_page) {
   FUNC_2(VAR_10->rx_page);
   VAR_10->rx_page = ((void*)0);
  }
  VAR_11 = VAR_10->rx_tpa_idx_map;
  if (VAR_11)
   FUNC_6(VAR_11->agg_idx_bmap, 0, sizeof(VAR_11->agg_idx_bmap));
 }
}
