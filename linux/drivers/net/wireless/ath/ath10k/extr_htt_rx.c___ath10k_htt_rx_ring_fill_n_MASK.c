
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_5__ {void* flags; } ;
struct htt_rx_desc {TYPE_1__ attention; } ;
struct ath10k_skb_rxcb {int hlist; int paddr; } ;
struct TYPE_7__ {void** vaddr; } ;
struct TYPE_8__ {int size_mask; TYPE_3__ alloc_idx; int skb_table; scalar_t__ in_ord_rx; int fill_cnt; struct sk_buff** netbufs_ring; } ;
struct ath10k_htt {TYPE_4__ rx_ring; TYPE_2__* ar; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;


 struct ath10k_skb_rxcb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct ath10k_htt*,int ,int) ;
 struct sk_buff* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct ath10k_htt *VAR_6, int VAR_7)
{
 struct htt_rx_desc *VAR_8;
 struct ath10k_skb_rxcb *VAR_9;
 struct sk_buff *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12 = 0, VAR_13;






 FUNC_1(VAR_4 >= VAR_5 / 2);

 VAR_13 = FUNC_5(*VAR_6->rx_ring.alloc_idx.vaddr);
 while (VAR_7 > 0) {
  VAR_10 = FUNC_7(VAR_2 + VAR_3);
  if (!VAR_10) {
   VAR_12 = -VAR_1;
   goto fail;
  }

  if (!FUNC_2((unsigned long)VAR_10->data, VAR_3))
   FUNC_13(VAR_10,
     FUNC_3(VAR_10->data, VAR_3) -
     VAR_10->data);


  VAR_8 = (struct htt_rx_desc *)VAR_10->data;
  VAR_8->attention.flags = FUNC_4(0);

  VAR_11 = FUNC_9(VAR_6->ar->dev, VAR_10->data,
           VAR_10->len + FUNC_14(VAR_10),
           VAR_0);

  if (FUNC_15(FUNC_10(VAR_6->ar->dev, VAR_11))) {
   FUNC_8(VAR_10);
   VAR_12 = -VAR_1;
   goto fail;
  }

  VAR_9 = FUNC_0(VAR_10);
  VAR_9->paddr = VAR_11;
  VAR_6->rx_ring.netbufs_ring[VAR_13] = VAR_10;
  FUNC_6(VAR_6, VAR_11, VAR_13);
  VAR_6->rx_ring.fill_cnt++;

  if (VAR_6->rx_ring.in_ord_rx) {
   FUNC_11(VAR_6->rx_ring.skb_table,
     &FUNC_0(VAR_10)->hlist,
     VAR_11);
  }

  VAR_7--;
  VAR_13++;
  VAR_13 &= VAR_6->rx_ring.size_mask;
 }

fail:




 FUNC_12();
 *VAR_6->rx_ring.alloc_idx.vaddr = FUNC_4(VAR_13);
 return VAR_12;
}
