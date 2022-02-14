
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {int tx_dma; void* TxDescRing; int rx_dma; void* RxDescRing; struct pci_dev* pci_dev; } ;
struct pci_dev {int irq; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sis190_private* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,void*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sis190_private*) ;
 int FUNC_9 (struct sis190_private*,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5)
{
 struct sis190_private *VAR_6 = FUNC_0(VAR_5);
 struct pci_dev *VAR_7 = VAR_6->pci_dev;
 int VAR_8 = -VAR_0;

 FUNC_9(VAR_6, VAR_5);





 VAR_6->TxDescRing = FUNC_1(VAR_7, VAR_3, &VAR_6->tx_dma);
 if (!VAR_6->TxDescRing)
  goto out;

 VAR_6->RxDescRing = FUNC_1(VAR_7, VAR_2, &VAR_6->rx_dma);
 if (!VAR_6->RxDescRing)
  goto err_free_tx_0;

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8 < 0)
  goto err_free_rx_1;

 FUNC_7(VAR_5);

 VAR_8 = FUNC_3(VAR_7->irq, VAR_4, VAR_1, VAR_5->name, VAR_5);
 if (VAR_8 < 0)
  goto err_release_timer_2;

 FUNC_5(VAR_5);
out:
 return VAR_8;

err_release_timer_2:
 FUNC_4(VAR_5);
 FUNC_8(VAR_6);
err_free_rx_1:
 FUNC_2(VAR_7, VAR_2, VAR_6->RxDescRing, VAR_6->rx_dma);
err_free_tx_0:
 FUNC_2(VAR_7, VAR_3, VAR_6->TxDescRing, VAR_6->tx_dma);
 goto out;
}
