
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_mem_info {int nr_pages; void** pg_arr; int vmem_size; void** vmem; int dma_arr; void* page_size; } ;
struct bnxt_ring_struct {struct bnxt_ring_mem_info ring_mem; } ;
struct bnxt_tx_ring_info {int tx_buf_ring; int tx_desc_mapping; scalar_t__ tx_desc_ring; struct bnxt_ring_struct tx_ring_struct; } ;
struct bnxt_rx_ring_info {int rx_agg_ring; int rx_agg_desc_mapping; scalar_t__ rx_agg_desc_ring; struct bnxt_ring_struct rx_agg_ring_struct; int rx_buf_ring; int rx_desc_mapping; scalar_t__ rx_desc_ring; struct bnxt_ring_struct rx_ring_struct; } ;
struct bnxt_cp_ring_info {int cp_desc_mapping; scalar_t__ cp_desc_ring; struct bnxt_ring_struct cp_ring_struct; } ;
struct bnxt_napi {struct bnxt_tx_ring_info* tx_ring; struct bnxt_rx_ring_info* rx_ring; struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; int cp_nr_pages; int rx_nr_pages; int rx_agg_nr_pages; int tx_nr_pages; struct bnxt_napi** bnapi; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct bnxt *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->cp_nr_rings; VAR_6++) {
  struct bnxt_napi *VAR_7 = VAR_5->bnapi[VAR_6];
  struct bnxt_ring_mem_info *VAR_8;
  struct bnxt_cp_ring_info *VAR_9;
  struct bnxt_rx_ring_info *VAR_10;
  struct bnxt_tx_ring_info *VAR_11;
  struct bnxt_ring_struct *VAR_12;

  if (!VAR_7)
   continue;

  VAR_9 = &VAR_7->cp_ring;
  VAR_12 = &VAR_9->cp_ring_struct;
  VAR_8 = &VAR_12->ring_mem;
  VAR_8->nr_pages = VAR_5->cp_nr_pages;
  VAR_8->page_size = VAR_0;
  VAR_8->pg_arr = (void **)VAR_9->cp_desc_ring;
  VAR_8->dma_arr = VAR_9->cp_desc_mapping;
  VAR_8->vmem_size = 0;

  VAR_10 = VAR_7->rx_ring;
  if (!VAR_10)
   goto skip_rx;

  VAR_12 = &VAR_10->rx_ring_struct;
  VAR_8 = &VAR_12->ring_mem;
  VAR_8->nr_pages = VAR_5->rx_nr_pages;
  VAR_8->page_size = VAR_1;
  VAR_8->pg_arr = (void **)VAR_10->rx_desc_ring;
  VAR_8->dma_arr = VAR_10->rx_desc_mapping;
  VAR_8->vmem_size = VAR_3 * VAR_5->rx_nr_pages;
  VAR_8->vmem = (void **)&VAR_10->rx_buf_ring;

  VAR_12 = &VAR_10->rx_agg_ring_struct;
  VAR_8 = &VAR_12->ring_mem;
  VAR_8->nr_pages = VAR_5->rx_agg_nr_pages;
  VAR_8->page_size = VAR_1;
  VAR_8->pg_arr = (void **)VAR_10->rx_agg_desc_ring;
  VAR_8->dma_arr = VAR_10->rx_agg_desc_mapping;
  VAR_8->vmem_size = VAR_2 * VAR_5->rx_agg_nr_pages;
  VAR_8->vmem = (void **)&VAR_10->rx_agg_ring;

skip_rx:
  VAR_11 = VAR_7->tx_ring;
  if (!VAR_11)
   continue;

  VAR_12 = &VAR_11->tx_ring_struct;
  VAR_8 = &VAR_12->ring_mem;
  VAR_8->nr_pages = VAR_5->tx_nr_pages;
  VAR_8->page_size = VAR_1;
  VAR_8->pg_arr = (void **)VAR_11->tx_desc_ring;
  VAR_8->dma_arr = VAR_11->tx_desc_mapping;
  VAR_8->vmem_size = VAR_4 * VAR_5->tx_nr_pages;
  VAR_8->vmem = (void **)&VAR_11->tx_buf_ring;
 }
}
