
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xge_raw_desc {int dummy; } ;
struct xge_pdata {struct xge_desc_ring* tx_ring; TYPE_1__* pdev; } ;
struct xge_desc_ring {TYPE_2__* pkt_info; struct xge_raw_desc* raw_desc; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* pkt_buf; int dma_addr; struct sk_buff* skb; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct device*,int ,void*,int ) ;
 int FUNC_2 (struct xge_raw_desc*) ;
 struct xge_pdata* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct xge_pdata *VAR_3 = FUNC_3(VAR_2);
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct xge_desc_ring *VAR_5;
 struct xge_raw_desc *VAR_6;
 dma_addr_t VAR_7;
 struct sk_buff *VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_5 = VAR_3->tx_ring;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_6 = &VAR_5->raw_desc[VAR_10];

  if (!FUNC_2(VAR_6))
   continue;

  VAR_8 = VAR_5->pkt_info[VAR_10].skb;
  VAR_7 = VAR_5->pkt_info[VAR_10].dma_addr;
  VAR_9 = VAR_5->pkt_info[VAR_10].pkt_buf;
  FUNC_1(VAR_4, VAR_1, VAR_9, VAR_7);
  FUNC_0(VAR_8);
 }
}
