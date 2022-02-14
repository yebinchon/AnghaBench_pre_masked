
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tulip_private {scalar_t__ cur_rx; int dirty_rx; scalar_t__ chip_id; scalar_t__ base_addr; TYPE_2__* rx_ring; TYPE_1__* rx_buffers; TYPE_3__* pdev; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {void* status; void* buffer1; } ;
struct TYPE_4__ {int mapping; struct sk_buff* skb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 struct sk_buff* FUNC_5 (struct net_device*,int ) ;
 struct tulip_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;

int FUNC_8(struct net_device *VAR_7)
{
 struct tulip_private *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;
 int VAR_10 = 0;


 for (; VAR_8->cur_rx - VAR_8->dirty_rx > 0; VAR_8->dirty_rx++) {
  VAR_9 = VAR_8->dirty_rx % VAR_6;
  if (VAR_8->rx_buffers[VAR_9].skb == ((void*)0)) {
   struct sk_buff *VAR_11;
   dma_addr_t VAR_12;

   VAR_11 = VAR_8->rx_buffers[VAR_9].skb =
    FUNC_5(VAR_7, VAR_5);
   if (VAR_11 == ((void*)0))
    break;

   VAR_12 = FUNC_7(VAR_8->pdev, VAR_11->data, VAR_5,
       VAR_4);
   if (FUNC_2(&VAR_8->pdev->dev, VAR_12)) {
    FUNC_1(VAR_11);
    VAR_8->rx_buffers[VAR_9].skb = ((void*)0);
    break;
   }

   VAR_8->rx_buffers[VAR_9].mapping = VAR_12;

   VAR_8->rx_ring[VAR_9].buffer1 = FUNC_0(VAR_12);
   VAR_10++;
  }
  VAR_8->rx_ring[VAR_9].status = FUNC_0(VAR_2);
 }
 if(VAR_8->chip_id == VAR_3) {
  if(((FUNC_3(VAR_8->base_addr + VAR_1)>>17)&0x07) == 4) {



   FUNC_4(0x01, VAR_8->base_addr + VAR_0);
  }
 }
 return VAR_10;
}
