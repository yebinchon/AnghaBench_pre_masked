
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rtw_pci_tx_ring {int queue; } ;
struct rtw_pci_tx_data {int dma; } ;
struct rtw_pci {int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct rtw_pci_tx_data* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rtw_pci *VAR_1,
          struct rtw_pci_tx_ring *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_3(&VAR_2->queue);
 struct rtw_pci_tx_data *VAR_4;
 dma_addr_t VAR_5;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = VAR_4->dma;
 FUNC_1(VAR_1->pdev, VAR_5, VAR_3->len,
    VAR_0);
 FUNC_0(VAR_3);
}
