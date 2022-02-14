
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {int * RxDescRing; int * TxDescRing; int rx_dma; int tx_dma; struct pci_dev* pci_dev; } ;
struct pci_dev {int irq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 struct sis190_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,int ,int *,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct sis190_private *VAR_3 = FUNC_1(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->pci_dev;

 FUNC_3(VAR_2);

 FUNC_0(VAR_4->irq, VAR_2);

 FUNC_2(VAR_4, VAR_1, VAR_3->TxDescRing, VAR_3->tx_dma);
 FUNC_2(VAR_4, VAR_0, VAR_3->RxDescRing, VAR_3->rx_dma);

 VAR_3->TxDescRing = ((void*)0);
 VAR_3->RxDescRing = ((void*)0);

 return 0;
}
