
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct netdev_private {scalar_t__ cur_rx; int dirty_rx; scalar_t__ base; TYPE_2__* rx_ring; TYPE_1__* rx_info; int pci_dev; int rx_buf_sz; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int rxaddr; } ;
struct TYPE_3__ {int mapping; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct net_device*,int ) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 struct netdev_private *VAR_6 = FUNC_3(VAR_5);
 struct sk_buff *VAR_7;
 int VAR_8 = -1;


 for (; VAR_6->cur_rx - VAR_6->dirty_rx > 0; VAR_6->dirty_rx++) {
  VAR_8 = VAR_6->dirty_rx % VAR_1;
  if (VAR_6->rx_info[VAR_8].skb == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_5, VAR_6->rx_buf_sz);
   VAR_6->rx_info[VAR_8].skb = VAR_7;
   if (VAR_7 == ((void*)0))
    break;
   VAR_6->rx_info[VAR_8].mapping =
    FUNC_5(VAR_6->pci_dev, VAR_7->data, VAR_6->rx_buf_sz, VAR_0);
   if (FUNC_4(VAR_6->pci_dev,
      VAR_6->rx_info[VAR_8].mapping)) {
    FUNC_1(VAR_7);
    VAR_6->rx_info[VAR_8].skb = ((void*)0);
    break;
   }
   VAR_6->rx_ring[VAR_8].rxaddr =
    FUNC_0(VAR_6->rx_info[VAR_8].mapping | VAR_4);
  }
  if (VAR_8 == VAR_1 - 1)
   VAR_6->rx_ring[VAR_8].rxaddr |= FUNC_0(VAR_2);
 }
 if (VAR_8 >= 0)
  FUNC_6(VAR_8, VAR_6->base + VAR_3);
}
