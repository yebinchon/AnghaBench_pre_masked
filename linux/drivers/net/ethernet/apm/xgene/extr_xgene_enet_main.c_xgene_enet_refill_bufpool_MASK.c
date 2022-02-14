
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xgene_enet_raw_desc16 {int m1; } ;
struct xgene_enet_pdata {TYPE_1__* ring_ops; } ;
struct xgene_enet_desc_ring {int tail; int slots; struct sk_buff** rx_skb; struct xgene_enet_raw_desc16* raw_desc16; struct net_device* ndev; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* wr_cmd ) (struct xgene_enet_desc_ring*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int) ;
 struct device* FUNC_7 (struct net_device*) ;
 struct sk_buff* FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct xgene_enet_pdata* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct xgene_enet_desc_ring*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct xgene_enet_desc_ring *VAR_9,
         u32 VAR_10)
{
 struct sk_buff *VAR_11;
 struct xgene_enet_raw_desc16 *VAR_12;
 struct xgene_enet_pdata *VAR_13;
 struct net_device *VAR_14;
 struct device *VAR_15;
 dma_addr_t VAR_16;
 u32 VAR_17 = VAR_9->tail;
 u32 VAR_18 = VAR_9->slots - 1;
 u16 VAR_19, VAR_20;
 int VAR_21;

 VAR_14 = VAR_9->ndev;
 VAR_15 = FUNC_7(VAR_9->ndev);
 VAR_13 = FUNC_10(VAR_14);

 VAR_19 = VAR_1 | (VAR_7 & FUNC_0(11, 0));
 VAR_20 = VAR_8;

 for (VAR_21 = 0; VAR_21 < VAR_10; VAR_21++) {
  VAR_12 = &VAR_9->raw_desc16[VAR_17];

  VAR_11 = FUNC_8(VAR_14, VAR_20);
  if (FUNC_12(!VAR_11))
   return -VAR_6;

  VAR_16 = FUNC_5(VAR_15, VAR_11->data, VAR_20, VAR_4);
  if (FUNC_6(VAR_15, VAR_16)) {
   FUNC_9(VAR_14, "DMA mapping error\n");
   FUNC_4(VAR_11);
   return -VAR_5;
  }

  VAR_9->rx_skb[VAR_17] = VAR_11;

  VAR_12->m1 = FUNC_3(FUNC_2(VAR_3, VAR_16) |
        FUNC_2(VAR_0, VAR_19) |
        FUNC_1(VAR_2));
  VAR_17 = (VAR_17 + 1) & VAR_18;
 }

 VAR_13->ring_ops->wr_cmd(VAR_9, VAR_10);
 VAR_9->tail = VAR_17;

 return 0;
}
