
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct netdev_private {int rx_buf_sz; int free_tx_count; TYPE_2__* tx_ring; scalar_t__ tx_ring_dma; scalar_t__ really_tx_count; TYPE_2__* cur_tx_copy; TYPE_2__* cur_tx; TYPE_1__* rx_ring; int pci_dev; scalar_t__ really_rx_count; TYPE_1__* lack_rxbuf; scalar_t__ rx_ring_dma; TYPE_1__* cur_rx; } ;
struct net_device {int mtu; } ;
struct fealnx_desc {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next_desc_logical; scalar_t__ next_desc; int * skbuff; scalar_t__ status; } ;
struct TYPE_3__ {int control; scalar_t__ status; int buffer; struct sk_buff* skbuff; struct TYPE_3__* next_desc_logical; scalar_t__ next_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (struct net_device*,int) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{
 struct netdev_private *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;


 VAR_8->rx_buf_sz = (VAR_7->mtu <= 1500 ? VAR_1 : VAR_7->mtu + 32);
 VAR_8->cur_rx = &VAR_8->rx_ring[0];
 VAR_8->lack_rxbuf = VAR_8->rx_ring;
 VAR_8->really_rx_count = 0;


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8->rx_ring[VAR_9].status = 0;
  VAR_8->rx_ring[VAR_9].control = VAR_8->rx_buf_sz << VAR_2;
  VAR_8->rx_ring[VAR_9].next_desc = VAR_8->rx_ring_dma +
   (VAR_9 + 1)*sizeof(struct fealnx_desc);
  VAR_8->rx_ring[VAR_9].next_desc_logical = &VAR_8->rx_ring[VAR_9 + 1];
  VAR_8->rx_ring[VAR_9].skbuff = ((void*)0);
 }


 VAR_8->rx_ring[VAR_9 - 1].next_desc = VAR_8->rx_ring_dma;
 VAR_8->rx_ring[VAR_9 - 1].next_desc_logical = VAR_8->rx_ring;


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct sk_buff *VAR_10 = FUNC_0(VAR_7, VAR_8->rx_buf_sz);

  if (VAR_10 == ((void*)0)) {
   VAR_8->lack_rxbuf = &VAR_8->rx_ring[VAR_9];
   break;
  }

  ++VAR_8->really_rx_count;
  VAR_8->rx_ring[VAR_9].skbuff = VAR_10;
  VAR_8->rx_ring[VAR_9].buffer = FUNC_2(VAR_8->pci_dev, VAR_10->data,
   VAR_8->rx_buf_sz, VAR_0);
  VAR_8->rx_ring[VAR_9].status = VAR_4;
  VAR_8->rx_ring[VAR_9].control |= VAR_3;
 }


 VAR_8->cur_tx = &VAR_8->tx_ring[0];
 VAR_8->cur_tx_copy = &VAR_8->tx_ring[0];
 VAR_8->really_tx_count = 0;
 VAR_8->free_tx_count = VAR_6;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8->tx_ring[VAR_9].status = 0;

  VAR_8->tx_ring[VAR_9].next_desc = VAR_8->tx_ring_dma +
   (VAR_9 + 1)*sizeof(struct fealnx_desc);
  VAR_8->tx_ring[VAR_9].next_desc_logical = &VAR_8->tx_ring[VAR_9 + 1];
  VAR_8->tx_ring[VAR_9].skbuff = ((void*)0);
 }


 VAR_8->tx_ring[VAR_9 - 1].next_desc = VAR_8->tx_ring_dma;
 VAR_8->tx_ring[VAR_9 - 1].next_desc_logical = &VAR_8->tx_ring[0];
}
