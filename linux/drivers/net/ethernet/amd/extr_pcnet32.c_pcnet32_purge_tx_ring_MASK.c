
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcnet32_private {int tx_ring_size; scalar_t__* tx_dma_addr; TYPE_2__** tx_skbuff; int pci_dev; TYPE_1__* tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct pcnet32_private *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->tx_ring_size; VAR_3++) {
  VAR_2->tx_ring[VAR_3].status = 0;
  FUNC_4();
  if (VAR_2->tx_skbuff[VAR_3]) {
   if (!FUNC_2(VAR_2->pci_dev,
         VAR_2->tx_dma_addr[VAR_3]))
    FUNC_3(VAR_2->pci_dev,
       VAR_2->tx_dma_addr[VAR_3],
       VAR_2->tx_skbuff[VAR_3]->len,
       VAR_0);
   FUNC_0(VAR_2->tx_skbuff[VAR_3]);
  }
  VAR_2->tx_skbuff[VAR_3] = ((void*)0);
  VAR_2->tx_dma_addr[VAR_3] = 0;
 }
}
