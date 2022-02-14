
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct rx_bd {size_t rx_bd_opaque; int rx_bd_haddr; } ;
struct pci_dev {int dev; } ;
struct page {int dummy; } ;
struct bnxt_sw_rx_agg_bd {unsigned int offset; int mapping; struct page* page; } ;
struct bnxt_rx_ring_info {size_t rx_sw_agg_prod; unsigned int rx_page_offset; struct bnxt_sw_rx_agg_bd* rx_agg_ring; int rx_agg_bmap; struct page* rx_page; struct rx_bd** rx_agg_desc_ring; } ;
struct bnxt {struct pci_dev* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (size_t,int ) ;
 struct page* FUNC_5 (int ) ;
 size_t FUNC_6 (struct bnxt_rx_ring_info*,size_t) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct page*,unsigned int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (size_t,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static inline int FUNC_13(struct bnxt *VAR_6,
         struct bnxt_rx_ring_info *VAR_7,
         u16 VAR_8, gfp_t VAR_9)
{
 struct rx_bd *VAR_10 =
  &VAR_7->rx_agg_desc_ring[FUNC_2(VAR_8)][FUNC_1(VAR_8)];
 struct bnxt_sw_rx_agg_bd *VAR_11;
 struct pci_dev *VAR_12 = VAR_6->pdev;
 struct page *VAR_13;
 dma_addr_t VAR_14;
 u16 VAR_15 = VAR_7->rx_sw_agg_prod;
 unsigned int VAR_16 = 0;

 if (VAR_4 > VAR_0) {
  VAR_13 = VAR_7->rx_page;
  if (!VAR_13) {
   VAR_13 = FUNC_5(VAR_9);
   if (!VAR_13)
    return -VAR_3;
   VAR_7->rx_page = VAR_13;
   VAR_7->rx_page_offset = 0;
  }
  VAR_16 = VAR_7->rx_page_offset;
  VAR_7->rx_page_offset += VAR_0;
  if (VAR_7->rx_page_offset == VAR_4)
   VAR_7->rx_page = ((void*)0);
  else
   FUNC_10(VAR_13);
 } else {
  VAR_13 = FUNC_5(VAR_9);
  if (!VAR_13)
   return -VAR_3;
 }

 VAR_14 = FUNC_8(&VAR_12->dev, VAR_13, VAR_16,
         VAR_0, VAR_5,
         VAR_1);
 if (FUNC_9(&VAR_12->dev, VAR_14)) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }

 if (FUNC_12(FUNC_11(VAR_15, VAR_7->rx_agg_bmap)))
  VAR_15 = FUNC_6(VAR_7, VAR_15);

 FUNC_4(VAR_15, VAR_7->rx_agg_bmap);
 VAR_11 = &VAR_7->rx_agg_ring[VAR_15];
 VAR_7->rx_sw_agg_prod = FUNC_0(VAR_15);

 VAR_11->page = VAR_13;
 VAR_11->offset = VAR_16;
 VAR_11->mapping = VAR_14;
 VAR_10->rx_bd_haddr = FUNC_7(VAR_14);
 VAR_10->rx_bd_opaque = VAR_15;
 return 0;
}
