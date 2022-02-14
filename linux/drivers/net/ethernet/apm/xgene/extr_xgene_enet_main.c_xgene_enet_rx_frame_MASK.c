
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct xgene_enet_raw_desc {int m0; int m1; } ;
struct xgene_enet_pdata {int vlan_rjbr; int false_rflr; } ;
struct xgene_enet_desc_ring {size_t slots; size_t head; scalar_t__ npagepool; scalar_t__ nbufpool; int napi; int rx_bytes; int rx_packets; struct page** frag_page; int rx_dropped; struct sk_buff** rx_skb; struct xgene_enet_desc_ring* page_pool; struct xgene_enet_desc_ring* buf_pool; struct net_device* ndev; } ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct page {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct device*,int,int ,int ) ;
 int FUNC_3 (struct device*,int,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 struct device* FUNC_7 (struct net_device*) ;
 struct xgene_enet_pdata* FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__,struct page*,int ,size_t,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,size_t) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (struct sk_buff*,size_t,int) ;
 scalar_t__ FUNC_16 (struct sk_buff*,size_t,int) ;
 int FUNC_17 (struct xgene_enet_desc_ring*,struct xgene_enet_raw_desc*,struct xgene_enet_raw_desc*) ;
 size_t FUNC_18 (int ) ;
 int FUNC_19 (struct xgene_enet_desc_ring*,int) ;
 int FUNC_20 (struct xgene_enet_desc_ring*,scalar_t__) ;
 int FUNC_21 (struct xgene_enet_desc_ring*,scalar_t__) ;
 int FUNC_22 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_23(struct xgene_enet_desc_ring *VAR_12,
          struct xgene_enet_raw_desc *VAR_13,
          struct xgene_enet_raw_desc *VAR_14)
{
 struct xgene_enet_desc_ring *VAR_15, *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 struct xgene_enet_pdata *VAR_20;
 struct net_device *VAR_21;
 dma_addr_t VAR_22;
 struct sk_buff *VAR_23;
 struct device *VAR_24;
 struct page *VAR_25;
 u16 VAR_26, VAR_27;
 int VAR_28, VAR_29 = 0;
 __le64 *VAR_30;
 u8 VAR_31;
 bool VAR_32;

 VAR_21 = VAR_12->ndev;
 VAR_20 = FUNC_8(VAR_21);
 VAR_24 = FUNC_7(VAR_12->ndev);
 VAR_15 = VAR_12->buf_pool;
 VAR_16 = VAR_12->page_pool;

 FUNC_3(VAR_24, FUNC_0(VAR_0, FUNC_5(VAR_13->m1)),
    VAR_11, VAR_1);
 VAR_19 = FUNC_0(VAR_10, FUNC_5(VAR_13->m0));
 VAR_23 = VAR_15->rx_skb[VAR_19];
 VAR_15->rx_skb[VAR_19] = ((void*)0);

 VAR_17 = FUNC_18(FUNC_5(VAR_13->m1));
 FUNC_12(VAR_23, VAR_17);
 FUNC_9(VAR_23->data - VAR_5);
 VAR_23->protocol = FUNC_4(VAR_23, VAR_21);


 VAR_31 = (FUNC_0(VAR_2, FUNC_5(VAR_13->m0)) << VAR_4) |
    FUNC_0(VAR_3, FUNC_5(VAR_13->m0));
 if (FUNC_14(VAR_31)) {
  if (FUNC_16(VAR_23, VAR_17, VAR_31)) {
   VAR_20->false_rflr++;
  } else if (FUNC_15(VAR_23, VAR_17, VAR_31)) {
   VAR_20->vlan_rjbr++;
  } else {
   FUNC_1(VAR_23);
   FUNC_17(VAR_16, VAR_13, VAR_14);
   FUNC_19(VAR_12, VAR_31);
   VAR_12->rx_dropped++;
   goto out;
  }
 }

 VAR_32 = FUNC_0(VAR_8, FUNC_5(VAR_13->m0));
 if (!VAR_32) {

  VAR_17 -= 4;
  goto skip_jumbo;
 }

 VAR_26 = VAR_16->slots - 1;
 VAR_27 = VAR_16->head;
 VAR_30 = (void *)VAR_14;

 for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
  VAR_18 = FUNC_18(FUNC_5(VAR_30[VAR_28 ^ 1]));
  if (!VAR_18)
   break;

  VAR_22 = FUNC_0(VAR_0, FUNC_5(VAR_30[VAR_28 ^ 1]));
  FUNC_2(VAR_24, VAR_22, VAR_9, VAR_1);

  VAR_25 = VAR_16->frag_page[VAR_27];
  FUNC_10(VAR_23, FUNC_13(VAR_23)->nr_frags, VAR_25, 0,
    VAR_18, VAR_9);

  VAR_17 += VAR_18;

  VAR_16->frag_page[VAR_27] = ((void*)0);
  VAR_27 = (VAR_27 + 1) & VAR_26;
 }

 VAR_16->head = VAR_27;
 VAR_12->npagepool -= FUNC_13(VAR_23)->nr_frags;

skip_jumbo:
 FUNC_11(VAR_23);
 FUNC_22(VAR_23);

 VAR_12->rx_packets++;
 VAR_12->rx_bytes += VAR_17;
 FUNC_6(&VAR_12->napi, VAR_23);

out:
 if (VAR_12->npagepool <= 0) {
  VAR_29 = FUNC_21(VAR_16, VAR_7);
  VAR_12->npagepool = VAR_7;
  if (VAR_29)
   return VAR_29;
 }

 if (--VAR_12->nbufpool == 0) {
  VAR_29 = FUNC_20(VAR_15, VAR_6);
  VAR_12->nbufpool = VAR_6;
 }

 return VAR_29;
}
