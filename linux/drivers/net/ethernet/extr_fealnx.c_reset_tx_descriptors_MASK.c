
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_private {int free_tx_count; struct fealnx_desc* tx_ring; scalar_t__ tx_ring_dma; int pci_dev; scalar_t__ really_tx_count; struct fealnx_desc* cur_tx_copy; struct fealnx_desc* cur_tx; } ;
struct net_device {int dummy; } ;
struct fealnx_desc {struct fealnx_desc* next_desc_logical; scalar_t__ next_desc; scalar_t__ control; scalar_t__ status; TYPE_1__* skbuff; int buffer; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct netdev_private *VAR_3 = FUNC_1(VAR_2);
 struct fealnx_desc *VAR_4;
 int VAR_5;


 VAR_3->cur_tx = &VAR_3->tx_ring[0];
 VAR_3->cur_tx_copy = &VAR_3->tx_ring[0];
 VAR_3->really_tx_count = 0;
 VAR_3->free_tx_count = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->tx_ring[VAR_5];
  if (VAR_4->skbuff) {
   FUNC_2(VAR_3->pci_dev, VAR_4->buffer,
    VAR_4->skbuff->len, VAR_0);
   FUNC_0(VAR_4->skbuff);
   VAR_4->skbuff = ((void*)0);
  }
  VAR_4->status = 0;
  VAR_4->control = 0;

  VAR_4->next_desc = VAR_3->tx_ring_dma +
   (VAR_5 + 1)*sizeof(struct fealnx_desc);
  VAR_4->next_desc_logical = &VAR_3->tx_ring[VAR_5 + 1];
 }

 VAR_3->tx_ring[VAR_1 - 1].next_desc = VAR_3->tx_ring_dma;
 VAR_3->tx_ring[VAR_1 - 1].next_desc_logical = &VAR_3->tx_ring[0];
}
