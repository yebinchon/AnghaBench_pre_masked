
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tulip_private {TYPE_3__* tx_buffers; int pdev; TYPE_2__* rx_ring; TYPE_1__* rx_buffers; } ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ mapping; struct sk_buff* skb; } ;
struct TYPE_5__ {int buffer1; scalar_t__ length; scalar_t__ status; } ;
struct TYPE_4__ {scalar_t__ mapping; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tulip_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct net_device *VAR_5)
{
 struct tulip_private *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct sk_buff *VAR_8 = VAR_6->rx_buffers[VAR_7].skb;
  dma_addr_t VAR_9 = VAR_6->rx_buffers[VAR_7].mapping;

  VAR_6->rx_buffers[VAR_7].skb = ((void*)0);
  VAR_6->rx_buffers[VAR_7].mapping = 0;

  VAR_6->rx_ring[VAR_7].status = 0;
  VAR_6->rx_ring[VAR_7].length = 0;

  VAR_6->rx_ring[VAR_7].buffer1 = FUNC_0(0xBADF00D0);
  if (VAR_8) {
   FUNC_3(VAR_6->pdev, VAR_9, VAR_2,
      VAR_0);
   FUNC_1 (VAR_8);
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct sk_buff *VAR_10 = VAR_6->tx_buffers[VAR_7].skb;

  if (VAR_10 != ((void*)0)) {
   FUNC_3(VAR_6->pdev, VAR_6->tx_buffers[VAR_7].mapping,
      VAR_10->len, VAR_1);
   FUNC_1 (VAR_10);
  }
  VAR_6->tx_buffers[VAR_7].skb = ((void*)0);
  VAR_6->tx_buffers[VAR_7].mapping = 0;
 }
}
