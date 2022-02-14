
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_private {TYPE_2__** tx_skbuff; int * tx_addr; int pci_dev; TYPE_2__** rx_skbuff; int * rx_addr; TYPE_1__* rx_ring; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct netdev_private* VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->rx_ring[VAR_5].status = 0;
  if (VAR_4->rx_skbuff[VAR_5]) {
   FUNC_1(VAR_4->pci_dev,
      VAR_4->rx_addr[VAR_5],
      VAR_4->rx_skbuff[VAR_5]->len,
      VAR_0);
   FUNC_0(VAR_4->rx_skbuff[VAR_5]);
  }
  VAR_4->rx_skbuff[VAR_5] = ((void*)0);
 }
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4->tx_skbuff[VAR_5]) {
   FUNC_1(VAR_4->pci_dev,
      VAR_4->tx_addr[VAR_5],
      VAR_4->tx_skbuff[VAR_5]->len,
      VAR_1);
   FUNC_0(VAR_4->tx_skbuff[VAR_5]);
  }
  VAR_4->tx_skbuff[VAR_5] = ((void*)0);
 }
}
