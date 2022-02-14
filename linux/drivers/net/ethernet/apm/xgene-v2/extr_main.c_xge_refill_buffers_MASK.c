
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct xge_raw_desc {void* m0; void* m1; } ;
struct xge_pdata {TYPE_1__* pdev; struct xge_desc_ring* rx_ring; } ;
struct xge_desc_ring {size_t tail; TYPE_2__* pkt_info; struct xge_raw_desc* raw_desc; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dma_addr; struct sk_buff* skb; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 size_t VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct device*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (void*) ;
 struct sk_buff* FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct xge_pdata* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_10, u32 VAR_11)
{
 struct xge_pdata *VAR_12 = FUNC_10(VAR_10);
 struct xge_desc_ring *VAR_13 = VAR_12->rx_ring;
 const u8 VAR_14 = VAR_8 - 1;
 struct device *VAR_15 = &VAR_12->pdev->dev;
 struct xge_raw_desc *VAR_16;
 u64 VAR_17, VAR_18;
 u8 VAR_19 = VAR_13->tail;
 struct sk_buff *VAR_20;
 dma_addr_t VAR_21;
 u16 VAR_22;
 int VAR_23;

 for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
  VAR_16 = &VAR_13->raw_desc[VAR_19];

  VAR_22 = VAR_9;
  VAR_20 = FUNC_8(VAR_10, VAR_22);
  if (FUNC_11(!VAR_20))
   return -VAR_3;

  VAR_21 = FUNC_4(VAR_15, VAR_20->data, VAR_22, VAR_0);
  if (FUNC_5(VAR_15, VAR_21)) {
   FUNC_9(VAR_10, "DMA mapping error\n");
   FUNC_3(VAR_20);
   return -VAR_2;
  }

  VAR_13->pkt_info[VAR_19].skb = VAR_20;
  VAR_13->pkt_info[VAR_19].dma_addr = VAR_21;

  VAR_18 = FUNC_0(VAR_4, FUNC_7(VAR_16->m1));
  VAR_17 = FUNC_0(VAR_5, FUNC_7(VAR_16->m1));
  VAR_16->m1 = FUNC_2(FUNC_1(VAR_5, VAR_17) |
        FUNC_1(VAR_4, VAR_18) |
        FUNC_1(VAR_6,
          FUNC_12(VAR_21)));

  FUNC_6();
  VAR_16->m0 = FUNC_2(FUNC_1(VAR_7, VAR_21) |
        FUNC_1(VAR_1, 1));
  VAR_19 = (VAR_19 + 1) & VAR_14;
 }

 VAR_13->tail = VAR_19;

 return 0;
}
