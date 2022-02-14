
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct netdev_private {unsigned int dirty_rx; unsigned int dirty_tx; int rx_buf_sz; int rx_ring_dma; TYPE_4__* tx_ring; int ** tx_skbuff; TYPE_3__* rx_ring; struct sk_buff** rx_skbuff; TYPE_1__* pci_dev; scalar_t__ cur_task; scalar_t__ cur_tx; scalar_t__ cur_rx; } ;
struct net_device {int mtu; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_7__ {TYPE_2__* frag; scalar_t__ status; void* next_desc; } ;
struct TYPE_6__ {void* length; void* addr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 struct sk_buff* FUNC_4 (struct net_device*,int ) ;
 struct netdev_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 struct netdev_private *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 VAR_6->cur_rx = VAR_6->cur_tx = 0;
 VAR_6->dirty_rx = VAR_6->dirty_tx = 0;
 VAR_6->cur_task = 0;

 VAR_6->rx_buf_sz = (VAR_5->mtu <= 1520 ? VAR_2 : VAR_5->mtu + 16);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->rx_ring[VAR_7].next_desc = FUNC_0(VAR_6->rx_ring_dma +
   ((VAR_7+1)%VAR_3)*sizeof(*VAR_6->rx_ring));
  VAR_6->rx_ring[VAR_7].status = 0;
  VAR_6->rx_ring[VAR_7].frag[0].length = 0;
  VAR_6->rx_skbuff[VAR_7] = ((void*)0);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct sk_buff *VAR_8 =
   FUNC_4(VAR_5, VAR_6->rx_buf_sz + 2);
  VAR_6->rx_skbuff[VAR_7] = VAR_8;
  if (VAR_8 == ((void*)0))
   break;
  FUNC_6(VAR_8, 2);
  VAR_6->rx_ring[VAR_7].frag[0].addr = FUNC_0(
   FUNC_2(&VAR_6->pci_dev->dev, VAR_8->data,
    VAR_6->rx_buf_sz, VAR_0));
  if (FUNC_3(&VAR_6->pci_dev->dev,
     VAR_6->rx_ring[VAR_7].frag[0].addr)) {
   FUNC_1(VAR_8);
   VAR_6->rx_skbuff[VAR_7] = ((void*)0);
   break;
  }
  VAR_6->rx_ring[VAR_7].frag[0].length = FUNC_0(VAR_6->rx_buf_sz | VAR_1);
 }
 VAR_6->dirty_rx = (unsigned int)(VAR_7 - VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->tx_skbuff[VAR_7] = ((void*)0);
  VAR_6->tx_ring[VAR_7].status = 0;
 }
}
