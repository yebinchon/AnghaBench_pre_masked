
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct fst_card_info {int nports; scalar_t__ family; size_t card_no; int tx_dma_handle_card; int tx_dma_handle_host; int device; int rx_dma_handle_card; int rx_dma_handle_host; int mem; int ctlmem; int irq; int * ports; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fst_card_info*) ;
 int ** VAR_2 ;
 int FUNC_1 (struct fst_card_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct fst_card_info* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void
FUNC_8(struct pci_dev *VAR_3)
{
 struct fst_card_info *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->nports; VAR_5++) {
  struct net_device *VAR_6 = FUNC_6(&VAR_4->ports[VAR_5]);
  FUNC_7(VAR_6);
 }

 FUNC_1(VAR_4);
 FUNC_0(VAR_4->irq, VAR_4);

 FUNC_2(VAR_4->ctlmem);
 FUNC_2(VAR_4->mem);
 FUNC_5(VAR_3);
 if (VAR_4->family == VAR_0) {



  FUNC_3(VAR_4->device, VAR_1,
        VAR_4->rx_dma_handle_host,
        VAR_4->rx_dma_handle_card);
  FUNC_3(VAR_4->device, VAR_1,
        VAR_4->tx_dma_handle_host,
        VAR_4->tx_dma_handle_card);
 }
 VAR_2[VAR_4->card_no] = ((void*)0);
}
