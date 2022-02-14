
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_spi_info {int port_id; int num_chipselect; int dma_burst_size; int dma_filter; struct dw_dma_slave* rx_param; struct dw_dma_slave* tx_param; } ;
struct pci_dev {int dev; int devfn; int bus; } ;
struct dw_dma_slave {int * dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct dw_dma_slave VAR_2 ;
 struct dw_dma_slave VAR_3 ;
 struct dw_dma_slave VAR_4 ;
 struct dw_dma_slave VAR_5 ;
 struct dw_dma_slave VAR_6 ;
 struct dw_dma_slave VAR_7 ;
 struct pci_dev* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_8, struct pxa_spi_info *VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_2(VAR_8->bus, FUNC_0(21, 0));
 struct dw_dma_slave *VAR_11, *VAR_12;

 switch (FUNC_1(VAR_8->devfn)) {
 case 0:
  VAR_9->port_id = 3;
  VAR_9->num_chipselect = 1;
  VAR_9->tx_param = &VAR_3;
  VAR_9->rx_param = &VAR_2;
  break;
 case 1:
  VAR_9->port_id = 5;
  VAR_9->num_chipselect = 4;
  VAR_9->tx_param = &VAR_5;
  VAR_9->rx_param = &VAR_4;
  break;
 case 2:
  VAR_9->port_id = 6;
  VAR_9->num_chipselect = 1;
  VAR_9->tx_param = &VAR_7;
  VAR_9->rx_param = &VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = VAR_9->tx_param;
 VAR_11->dma_dev = &VAR_10->dev;

 VAR_12 = VAR_9->rx_param;
 VAR_12->dma_dev = &VAR_10->dev;

 VAR_9->dma_filter = VAR_1;
 VAR_9->dma_burst_size = 8;
 return 0;
}
