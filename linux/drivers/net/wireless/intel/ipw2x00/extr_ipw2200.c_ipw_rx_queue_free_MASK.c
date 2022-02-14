
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_rx_queue {TYPE_1__* pool; } ;
struct ipw_priv {int pci_dev; } ;
struct TYPE_2__ {int * skb; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipw_rx_queue*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_4, struct ipw_rx_queue *VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_3 + VAR_2; VAR_6++) {
  if (VAR_5->pool[VAR_6].skb != ((void*)0)) {
   FUNC_2(VAR_4->pci_dev, VAR_5->pool[VAR_6].dma_addr,
      VAR_0, VAR_1);
   FUNC_0(VAR_5->pool[VAR_6].skb);
  }
 }

 FUNC_1(VAR_5);
}
