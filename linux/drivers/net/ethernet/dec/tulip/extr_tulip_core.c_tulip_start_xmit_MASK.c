
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tulip_private {int cur_tx; int dirty_tx; int lock; scalar_t__ base_addr; TYPE_2__* tx_ring; TYPE_1__* tx_buffers; int pdev; } ;
struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* status; void* length; void* buffer1; } ;
struct TYPE_3__ {int mapping; struct sk_buff* skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct tulip_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;

__attribute__((used)) static netdev_tx_t
FUNC_8(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct tulip_private *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;
 u32 VAR_10;
 dma_addr_t VAR_11;
 unsigned long VAR_12;

 FUNC_5(&VAR_8->lock, VAR_12);


 VAR_9 = VAR_8->cur_tx % VAR_5;

 VAR_8->tx_buffers[VAR_9].skb = VAR_6;
 VAR_11 = FUNC_4(VAR_8->pdev, VAR_6->data,
     VAR_6->len, VAR_4);
 VAR_8->tx_buffers[VAR_9].mapping = VAR_11;
 VAR_8->tx_ring[VAR_9].buffer1 = FUNC_0(VAR_11);

 if (VAR_8->cur_tx - VAR_8->dirty_tx < VAR_5/2) {
  VAR_10 = 0x60000000;
 } else if (VAR_8->cur_tx - VAR_8->dirty_tx == VAR_5/2) {
  VAR_10 = 0xe0000000;
 } else if (VAR_8->cur_tx - VAR_8->dirty_tx < VAR_5 - 2) {
  VAR_10 = 0x60000000;
 } else {
  VAR_10 = 0xe0000000;
  FUNC_3(VAR_7);
 }
 if (VAR_9 == VAR_5-1)
  VAR_10 = 0xe0000000 | VAR_1;

 VAR_8->tx_ring[VAR_9].length = FUNC_0(VAR_6->len | VAR_10);


 VAR_8->tx_ring[VAR_9].status = FUNC_0(VAR_2);
 FUNC_7();

 VAR_8->cur_tx++;


 FUNC_1(0, VAR_8->base_addr + VAR_0);

 FUNC_6(&VAR_8->lock, VAR_12);

 return VAR_3;
}
