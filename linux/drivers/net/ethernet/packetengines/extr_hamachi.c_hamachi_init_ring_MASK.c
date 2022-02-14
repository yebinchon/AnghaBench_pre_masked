
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int mtu; } ;
struct hamachi_private {unsigned int dirty_rx; unsigned int dirty_tx; int rx_buf_sz; TYPE_2__* tx_ring; int ** tx_skbuff; TYPE_1__* rx_ring; int pci_dev; struct sk_buff** rx_skbuff; scalar_t__ cur_tx; scalar_t__ cur_rx; scalar_t__ tx_full; } ;
struct TYPE_4__ {scalar_t__ status_n_length; } ;
struct TYPE_3__ {scalar_t__ status_n_length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct net_device*,int ) ;
 struct hamachi_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 struct hamachi_private *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 VAR_9->tx_full = 0;
 VAR_9->cur_rx = VAR_9->cur_tx = 0;
 VAR_9->dirty_rx = VAR_9->dirty_tx = 0;






 VAR_9->rx_buf_sz = (VAR_8->mtu <= 1492 ? VAR_5 :
  (((VAR_8->mtu+26+7) & ~7) + 16));


 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9->rx_ring[VAR_10].status_n_length = 0;
  VAR_9->rx_skbuff[VAR_10] = ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  struct sk_buff *VAR_11 = FUNC_2(VAR_8, VAR_9->rx_buf_sz + 2);
  VAR_9->rx_skbuff[VAR_10] = VAR_11;
  if (VAR_11 == ((void*)0))
   break;
  FUNC_5(VAR_11, 2);
                VAR_9->rx_ring[VAR_10].addr = FUNC_1(FUNC_4(VAR_9->pci_dev,
   VAR_11->data, VAR_9->rx_buf_sz, VAR_4));

  VAR_9->rx_ring[VAR_10].status_n_length = FUNC_0(VAR_3 |
   VAR_0 | VAR_2 | (VAR_9->rx_buf_sz -2));
 }
 VAR_9->dirty_rx = (unsigned int)(VAR_10 - VAR_6);
 VAR_9->rx_ring[VAR_6-1].status_n_length |= FUNC_0(VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9->tx_skbuff[VAR_10] = ((void*)0);
  VAR_9->tx_ring[VAR_10].status_n_length = 0;
 }

 VAR_9->tx_ring[VAR_7-1].status_n_length |= FUNC_0(VAR_1);
}
