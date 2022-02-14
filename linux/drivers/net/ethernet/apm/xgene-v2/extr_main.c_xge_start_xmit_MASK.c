
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u16 ;
struct xge_raw_desc {void* m0; void* m1; } ;
struct xge_pdata {struct xge_desc_ring* tx_ring; TYPE_1__* pdev; } ;
struct xge_desc_ring {size_t tail; TYPE_2__* pkt_info; struct xge_raw_desc* raw_desc; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* pkt_buf; int dma_addr; struct sk_buff* skb; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (struct device*,int ,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct xge_raw_desc*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,int ,int ) ;
 struct xge_pdata* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct xge_pdata*,int ,int) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
 struct xge_pdata *VAR_14 = FUNC_9(VAR_13);
 struct device *VAR_15 = &VAR_14->pdev->dev;
 struct xge_desc_ring *VAR_16;
 struct xge_raw_desc *VAR_17;
 static dma_addr_t VAR_18;
 u64 VAR_19, VAR_20;
 void *VAR_21;
 u8 VAR_22;
 u16 VAR_23;

 VAR_16 = VAR_14->tx_ring;
 VAR_22 = VAR_16->tail;
 VAR_23 = FUNC_11(VAR_12);
 VAR_17 = &VAR_16->raw_desc[VAR_22];

 if (!FUNC_6(VAR_17)) {
  FUNC_10(VAR_13);
  return VAR_3;
 }


 VAR_21 = FUNC_4(VAR_15, VAR_11, &VAR_18,
         VAR_2);
 if (FUNC_13(!VAR_21)) {
  FUNC_3(VAR_12);
  return VAR_4;
 }
 FUNC_8(VAR_21, VAR_12->data, VAR_23);

 VAR_20 = FUNC_0(VAR_5, FUNC_7(VAR_17->m1));
 VAR_19 = FUNC_0(VAR_6, FUNC_7(VAR_17->m1));
 VAR_17->m1 = FUNC_2(FUNC_1(VAR_6, VAR_19) |
       FUNC_1(VAR_5, VAR_20) |
       FUNC_1(VAR_7,
         FUNC_14(VAR_18)));

 VAR_16->pkt_info[VAR_22].skb = VAR_12;
 VAR_16->pkt_info[VAR_22].dma_addr = VAR_18;
 VAR_16->pkt_info[VAR_22].pkt_buf = VAR_21;

 FUNC_5();

 VAR_17->m0 = FUNC_2(FUNC_1(VAR_8, VAR_18) |
       FUNC_1(VAR_9, VAR_23) |
       FUNC_1(VAR_1, 0));
 FUNC_12(VAR_12);
 FUNC_15(VAR_14, VAR_0, 1);

 VAR_16->tail = (VAR_22 + 1) & (VAR_10 - 1);

 return VAR_4;
}
