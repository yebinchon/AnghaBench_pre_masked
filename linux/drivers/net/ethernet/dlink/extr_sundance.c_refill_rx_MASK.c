
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct netdev_private {int cur_rx; int dirty_rx; int rx_buf_sz; TYPE_3__* rx_ring; struct sk_buff** rx_skbuff; TYPE_1__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ status; TYPE_2__* frag; } ;
struct TYPE_5__ {void* length; void* addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 struct sk_buff* FUNC_4 (struct net_device*,int ) ;
 struct netdev_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7 (struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 int VAR_6 = 0;


 for (;(VAR_4->cur_rx - VAR_4->dirty_rx + VAR_2) % VAR_2 > 0;
  VAR_4->dirty_rx = (VAR_4->dirty_rx + 1) % VAR_2) {
  struct sk_buff *VAR_7;
  VAR_5 = VAR_4->dirty_rx % VAR_2;
  if (VAR_4->rx_skbuff[VAR_5] == ((void*)0)) {
   VAR_7 = FUNC_4(VAR_3, VAR_4->rx_buf_sz + 2);
   VAR_4->rx_skbuff[VAR_5] = VAR_7;
   if (VAR_7 == ((void*)0))
    break;
   FUNC_6(VAR_7, 2);
   VAR_4->rx_ring[VAR_5].frag[0].addr = FUNC_0(
    FUNC_2(&VAR_4->pci_dev->dev, VAR_7->data,
     VAR_4->rx_buf_sz, VAR_0));
   if (FUNC_3(&VAR_4->pci_dev->dev,
        VAR_4->rx_ring[VAR_5].frag[0].addr)) {
       FUNC_1(VAR_7);
       VAR_4->rx_skbuff[VAR_5] = ((void*)0);
       break;
   }
  }

  VAR_4->rx_ring[VAR_5].frag[0].length =
   FUNC_0(VAR_4->rx_buf_sz | VAR_1);
  VAR_4->rx_ring[VAR_5].status = 0;
  VAR_6++;
 }
}
