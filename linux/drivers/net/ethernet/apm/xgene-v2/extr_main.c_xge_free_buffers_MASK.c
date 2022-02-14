
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xge_pdata {TYPE_2__* pdev; struct xge_desc_ring* rx_ring; } ;
struct xge_desc_ring {TYPE_1__* pkt_info; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int dma_addr; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 struct xge_pdata* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct xge_pdata *VAR_4 = FUNC_2(VAR_3);
 struct xge_desc_ring *VAR_5 = VAR_4->rx_ring;
 struct device *VAR_6 = &VAR_4->pdev->dev;
 struct sk_buff *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7 = VAR_5->pkt_info[VAR_9].skb;
  VAR_8 = VAR_5->pkt_info[VAR_9].dma_addr;

  if (!VAR_7)
   continue;

  FUNC_1(VAR_6, VAR_8, VAR_2,
     VAR_0);
  FUNC_0(VAR_7);
 }
}
