
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int mtu; } ;
struct epic_tx_desc {int dummy; } ;
struct epic_rx_desc {int dummy; } ;
struct epic_private {unsigned int cur_rx; unsigned int dirty_rx; int rx_buf_sz; scalar_t__ tx_ring_dma; TYPE_2__* tx_ring; int ** tx_skbuff; TYPE_1__* rx_ring; int pci_dev; struct sk_buff** rx_skbuff; scalar_t__ rx_ring_dma; scalar_t__ cur_tx; scalar_t__ dirty_tx; scalar_t__ tx_full; } ;
struct TYPE_4__ {int txstatus; scalar_t__ next; } ;
struct TYPE_3__ {int buflength; scalar_t__ rxstatus; int bufaddr; scalar_t__ next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct net_device*,int ) ;
 struct epic_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 struct epic_private *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_6->tx_full = 0;
 VAR_6->dirty_tx = VAR_6->cur_tx = 0;
 VAR_6->cur_rx = VAR_6->dirty_rx = 0;
 VAR_6->rx_buf_sz = (VAR_5->mtu <= 1500 ? VAR_2 : VAR_5->mtu + 32);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->rx_ring[VAR_7].rxstatus = 0;
  VAR_6->rx_ring[VAR_7].buflength = VAR_6->rx_buf_sz;
  VAR_6->rx_ring[VAR_7].next = VAR_6->rx_ring_dma +
          (VAR_7+1)*sizeof(struct epic_rx_desc);
  VAR_6->rx_skbuff[VAR_7] = ((void*)0);
 }

 VAR_6->rx_ring[VAR_7-1].next = VAR_6->rx_ring_dma;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct sk_buff *VAR_8 = FUNC_0(VAR_5, VAR_6->rx_buf_sz + 2);
  VAR_6->rx_skbuff[VAR_7] = VAR_8;
  if (VAR_8 == ((void*)0))
   break;
  FUNC_3(VAR_8, 2);
  VAR_6->rx_ring[VAR_7].bufaddr = FUNC_2(VAR_6->pci_dev,
   VAR_8->data, VAR_6->rx_buf_sz, VAR_1);
  VAR_6->rx_ring[VAR_7].rxstatus = VAR_0;
 }
 VAR_6->dirty_rx = (unsigned int)(VAR_7 - VAR_3);



 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->tx_skbuff[VAR_7] = ((void*)0);
  VAR_6->tx_ring[VAR_7].txstatus = 0x0000;
  VAR_6->tx_ring[VAR_7].next = VAR_6->tx_ring_dma +
   (VAR_7+1)*sizeof(struct epic_tx_desc);
 }
 VAR_6->tx_ring[VAR_7-1].next = VAR_6->tx_ring_dma;
}
