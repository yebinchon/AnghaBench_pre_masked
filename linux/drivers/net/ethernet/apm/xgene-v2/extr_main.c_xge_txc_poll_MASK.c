
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct xge_raw_desc {int m0; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct xge_pdata {TYPE_3__ stats; struct xge_desc_ring* tx_ring; TYPE_1__* pdev; } ;
struct xge_desc_ring {size_t head; TYPE_2__* pkt_info; struct xge_raw_desc* raw_desc; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {void* pkt_buf; int dma_addr; struct sk_buff* skb; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct device*,int ,void*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct xge_raw_desc*) ;
 struct xge_pdata* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct xge_pdata*,int ) ;
 int FUNC_11 (struct xge_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_7)
{
 struct xge_pdata *VAR_8 = FUNC_7(VAR_7);
 struct device *VAR_9 = &VAR_8->pdev->dev;
 struct xge_desc_ring *VAR_10;
 struct xge_raw_desc *VAR_11;
 dma_addr_t VAR_12;
 struct sk_buff *VAR_13;
 void *VAR_14;
 u32 VAR_15;
 u8 VAR_16;

 VAR_10 = VAR_8->tx_ring;
 VAR_16 = VAR_10->head;

 VAR_15 = FUNC_10(VAR_8, VAR_0);
 if (!FUNC_0(VAR_4, VAR_15))
  return;

 while (1) {
  VAR_11 = &VAR_10->raw_desc[VAR_16];

  if (!FUNC_6(VAR_11))
   break;

  FUNC_5();

  VAR_13 = VAR_10->pkt_info[VAR_16].skb;
  VAR_12 = VAR_10->pkt_info[VAR_16].dma_addr;
  VAR_14 = VAR_10->pkt_info[VAR_16].pkt_buf;
  VAR_8->stats.tx_packets++;
  VAR_8->stats.tx_bytes += VAR_13->len;
  FUNC_4(VAR_9, VAR_6, VAR_14, VAR_12);
  FUNC_3(VAR_13);


  VAR_11->m0 = FUNC_2(FUNC_1(VAR_1, 1) |
        FUNC_1(VAR_2, VAR_3));
  FUNC_11(VAR_8, VAR_0, 1);

  VAR_16 = (VAR_16 + 1) & (VAR_5 - 1);
 }

 if (FUNC_8(VAR_7))
  FUNC_9(VAR_7);

 VAR_10->head = VAR_16;
}
