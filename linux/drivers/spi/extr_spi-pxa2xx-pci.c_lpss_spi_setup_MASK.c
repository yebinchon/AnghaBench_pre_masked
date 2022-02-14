
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_spi_info {int num_chipselect; int max_clk_rate; int dma_filter; struct dw_dma_slave* rx_param; struct dw_dma_slave* tx_param; } ;
struct pci_dev {int dev; int devfn; int bus; } ;
struct dw_dma_slave {int p_master; scalar_t__ m_master; int * dma_dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct pci_dev* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, struct pxa_spi_info *VAR_2)
{
 struct pci_dev *VAR_3;

 VAR_2->num_chipselect = 1;
 VAR_2->max_clk_rate = 50000000;

 VAR_3 = FUNC_2(VAR_1->bus, FUNC_0(FUNC_1(VAR_1->devfn), 0));

 if (VAR_2->tx_param) {
  struct dw_dma_slave *VAR_4 = VAR_2->tx_param;

  VAR_4->dma_dev = &VAR_3->dev;
  VAR_4->m_master = 0;
  VAR_4->p_master = 1;
 }

 if (VAR_2->rx_param) {
  struct dw_dma_slave *VAR_5 = VAR_2->rx_param;

  VAR_5->dma_dev = &VAR_3->dev;
  VAR_5->m_master = 0;
  VAR_5->p_master = 1;
 }

 VAR_2->dma_filter = VAR_0;
 return 0;
}
