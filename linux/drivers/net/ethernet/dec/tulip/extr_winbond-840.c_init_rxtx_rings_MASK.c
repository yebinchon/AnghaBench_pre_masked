
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w840_tx_desc {scalar_t__ status; } ;
struct w840_rx_desc {int dummy; } ;
struct sk_buff {int data; } ;
struct netdev_private {unsigned int dirty_rx; scalar_t__ base_addr; scalar_t__ ring_dma_addr; scalar_t__ cur_tx; scalar_t__ dirty_tx; scalar_t__ tx_q_bytes; scalar_t__ tx_full; struct w840_tx_desc* tx_ring; int ** tx_skbuff; scalar_t__ cur_rx; TYPE_1__* rx_ring; int * rx_addr; int rx_buf_sz; int pci_dev; struct sk_buff** rx_skbuff; TYPE_1__* rx_head_desc; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; int buffer1; int length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_1 (struct net_device*,int ) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 struct netdev_private *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 VAR_8->rx_head_desc = &VAR_8->rx_ring[0];
 VAR_8->tx_ring = (struct w840_tx_desc*)&VAR_8->rx_ring[VAR_3];


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8->rx_ring[VAR_9].length = VAR_8->rx_buf_sz;
  VAR_8->rx_ring[VAR_9].status = 0;
  VAR_8->rx_skbuff[VAR_9] = ((void*)0);
 }

 VAR_8->rx_ring[VAR_9-1].length |= VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  struct sk_buff *VAR_10 = FUNC_1(VAR_7, VAR_8->rx_buf_sz);
  VAR_8->rx_skbuff[VAR_9] = VAR_10;
  if (VAR_10 == ((void*)0))
   break;
  VAR_8->rx_addr[VAR_9] = FUNC_3(VAR_8->pci_dev,VAR_10->data,
     VAR_8->rx_buf_sz,VAR_2);

  VAR_8->rx_ring[VAR_9].buffer1 = VAR_8->rx_addr[VAR_9];
  VAR_8->rx_ring[VAR_9].status = VAR_1;
 }

 VAR_8->cur_rx = 0;
 VAR_8->dirty_rx = (unsigned int)(VAR_9 - VAR_3);


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8->tx_skbuff[VAR_9] = ((void*)0);
  VAR_8->tx_ring[VAR_9].status = 0;
 }
 VAR_8->tx_full = 0;
 VAR_8->tx_q_bytes = VAR_8->dirty_tx = VAR_8->cur_tx = 0;

 FUNC_0(VAR_8->ring_dma_addr, VAR_8->base_addr + VAR_4);
 FUNC_0(VAR_8->ring_dma_addr+sizeof(struct w840_rx_desc)*VAR_3,
  VAR_8->base_addr + VAR_6);

}
