
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct skb_shared_info {unsigned int nr_frags; int * frags; } ;
struct sk_buff {size_t data_len; size_t len; int truesize; } ;
struct rx_agg_cmp {size_t rx_agg_cmp_opaque; int rx_agg_cmp_len_flags_type; } ;
struct pci_dev {int dev; } ;
struct page {int dummy; } ;
struct bnxt_sw_rx_agg_bd {struct page* page; int mapping; int offset; } ;
struct bnxt_rx_ring_info {size_t rx_agg_prod; int rx_agg_bmap; struct bnxt_sw_rx_agg_bd* rx_agg_ring; } ;
struct bnxt_napi {struct bnxt_rx_ring_info* rx_ring; } ;
struct bnxt_cp_ring_info {struct bnxt_napi* bnapi; } ;
struct bnxt {int flags; struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct bnxt*,struct bnxt_rx_ring_info*,size_t,int ) ;
 struct rx_agg_cmp* FUNC_4 (struct bnxt*,struct bnxt_cp_ring_info*,size_t,scalar_t__) ;
 struct rx_agg_cmp* FUNC_5 (struct bnxt*,struct bnxt_rx_ring_info*,size_t,scalar_t__) ;
 int FUNC_6 (struct bnxt_cp_ring_info*,size_t,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,scalar_t__,struct page*,int ,size_t) ;
 struct skb_shared_info* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct bnxt *VAR_8,
         struct bnxt_cp_ring_info *VAR_9,
         struct sk_buff *VAR_10, u16 VAR_11,
         u32 VAR_12, bool VAR_13)
{
 struct bnxt_napi *VAR_14 = VAR_9->bnapi;
 struct pci_dev *VAR_15 = VAR_8->pdev;
 struct bnxt_rx_ring_info *VAR_16 = VAR_14->rx_ring;
 u16 VAR_17 = VAR_16->rx_agg_prod;
 bool VAR_18 = 0;
 u32 VAR_19;

 if ((VAR_8->flags & VAR_0) && VAR_13)
  VAR_18 = 1;

 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  u16 VAR_20, VAR_21;
  struct rx_agg_cmp *VAR_22;
  struct bnxt_sw_rx_agg_bd *VAR_23;
  struct page *VAR_24;
  dma_addr_t VAR_25;

  if (VAR_18)
   VAR_22 = FUNC_5(VAR_8, VAR_16, VAR_11, VAR_19);
  else
   VAR_22 = FUNC_4(VAR_8, VAR_9, VAR_11, VAR_19);
  VAR_20 = VAR_22->rx_agg_cmp_opaque;
  VAR_21 = (FUNC_9(VAR_22->rx_agg_cmp_len_flags_type) &
       VAR_6) >> VAR_7;

  VAR_23 = &VAR_16->rx_agg_ring[VAR_20];
  FUNC_10(VAR_10, VAR_19, VAR_23->page,
       VAR_23->offset, VAR_21);
  FUNC_1(VAR_20, VAR_16->rx_agg_bmap);





  VAR_25 = VAR_23->mapping;
  VAR_24 = VAR_23->page;
  VAR_23->page = ((void*)0);

  if (FUNC_3(VAR_8, VAR_16, VAR_17, VAR_3) != 0) {
   struct skb_shared_info *VAR_26;
   unsigned int VAR_27;

   VAR_26 = FUNC_11(VAR_10);
   VAR_27 = --VAR_26->nr_frags;
   FUNC_2(&VAR_26->frags[VAR_27], ((void*)0));

   FUNC_7(VAR_10);

   VAR_23->page = VAR_24;




   VAR_16->rx_agg_prod = VAR_17;
   FUNC_6(VAR_9, VAR_11, VAR_19, VAR_12 - VAR_19, VAR_13);
   return ((void*)0);
  }

  FUNC_8(&VAR_15->dev, VAR_25, VAR_1,
         VAR_5,
         VAR_2);

  VAR_10->data_len += VAR_21;
  VAR_10->len += VAR_21;
  VAR_10->truesize += VAR_4;

  VAR_17 = FUNC_0(VAR_17);
 }
 VAR_16->rx_agg_prod = VAR_17;
 return VAR_10;
}
