
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct netdev_private {unsigned int dirty_rx; unsigned int dirty_tx; unsigned int rx_done; unsigned int tx_done; int rx_buf_sz; int * tx_info; TYPE_4__* tx_done_q; TYPE_3__* rx_done_q; TYPE_2__* rx_ring; TYPE_1__* rx_info; scalar_t__ base; int pci_dev; scalar_t__ reap_tx; scalar_t__ cur_tx; scalar_t__ cur_rx; } ;
struct net_device {int mtu; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_6__ {scalar_t__ rxaddr; } ;
struct TYPE_5__ {int mapping; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int) ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 struct netdev_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_8)
{
 struct netdev_private *VAR_9 = FUNC_4(VAR_8);
 int VAR_10;

 VAR_9->cur_rx = VAR_9->cur_tx = VAR_9->reap_tx = 0;
 VAR_9->dirty_rx = VAR_9->dirty_tx = VAR_9->rx_done = VAR_9->tx_done = 0;

 VAR_9->rx_buf_sz = (VAR_8->mtu <= 1500 ? VAR_2 : VAR_8->mtu + 32);


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct sk_buff *VAR_11 = FUNC_3(VAR_8, VAR_9->rx_buf_sz);
  VAR_9->rx_info[VAR_10].skb = VAR_11;
  if (VAR_11 == ((void*)0))
   break;
  VAR_9->rx_info[VAR_10].mapping = FUNC_6(VAR_9->pci_dev, VAR_11->data, VAR_9->rx_buf_sz, VAR_1);
  if (FUNC_5(VAR_9->pci_dev,
       VAR_9->rx_info[VAR_10].mapping)) {
   FUNC_1(VAR_11);
   VAR_9->rx_info[VAR_10].skb = ((void*)0);
   break;
  }

  VAR_9->rx_ring[VAR_10].rxaddr = FUNC_0(VAR_9->rx_info[VAR_10].mapping | VAR_6);
 }
 FUNC_7(VAR_10 - 1, VAR_9->base + VAR_5);
 VAR_9->dirty_rx = (unsigned int)(VAR_10 - VAR_3);


 for ( ; VAR_10 < VAR_3; VAR_10++) {
  VAR_9->rx_ring[VAR_10].rxaddr = 0;
  VAR_9->rx_info[VAR_10].skb = ((void*)0);
  VAR_9->rx_info[VAR_10].mapping = 0;
 }

 VAR_9->rx_ring[VAR_3 - 1].rxaddr |= FUNC_0(VAR_4);


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9->rx_done_q[VAR_10].status = 0;
  VAR_9->tx_done_q[VAR_10].status = 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_2(&VAR_9->tx_info[VAR_10], 0, sizeof(VAR_9->tx_info[VAR_10]));
}
