
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct netdev_private {scalar_t__ really_rx_count; TYPE_1__* lack_rxbuf; int rx_buf_sz; int pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int status; int buffer; struct sk_buff* skbuff; struct TYPE_2__* next_desc_logical; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,int ) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_1(VAR_3);


 while (VAR_4->really_rx_count != VAR_2) {
  struct sk_buff *VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_4->rx_buf_sz);
  if (VAR_5 == ((void*)0))
   break;

  while (VAR_4->lack_rxbuf->skbuff)
   VAR_4->lack_rxbuf = VAR_4->lack_rxbuf->next_desc_logical;

  VAR_4->lack_rxbuf->skbuff = VAR_5;
  VAR_4->lack_rxbuf->buffer = FUNC_2(VAR_4->pci_dev, VAR_5->data,
   VAR_4->rx_buf_sz, VAR_0);
  VAR_4->lack_rxbuf->status = VAR_1;
  ++VAR_4->really_rx_count;
 }
}
