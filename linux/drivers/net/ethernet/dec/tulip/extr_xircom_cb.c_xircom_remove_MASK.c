
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xircom_private {int rx_dma_handle; int rx_buffer; int tx_dma_handle; int tx_buffer; int ioaddr; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct xircom_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct xircom_private *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3 = &VAR_0->dev;

 FUNC_7(VAR_1);
 FUNC_5(VAR_0, VAR_2->ioaddr);
 FUNC_0(VAR_3, 8192, VAR_2->tx_buffer, VAR_2->tx_dma_handle);
 FUNC_0(VAR_3, 8192, VAR_2->rx_buffer, VAR_2->rx_dma_handle);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);
}
