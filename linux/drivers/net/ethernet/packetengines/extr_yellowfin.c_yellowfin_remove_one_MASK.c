
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yellowfin_private {int base; int tx_ring_dma; int tx_ring; int rx_ring_dma; int rx_ring; int tx_status_dma; int tx_status; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 struct yellowfin_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);
 struct yellowfin_private *VAR_5;

 FUNC_0(!VAR_4);
 VAR_5 = FUNC_2(VAR_4);

        FUNC_3(VAR_3, VAR_1, VAR_5->tx_status,
  VAR_5->tx_status_dma);
 FUNC_3(VAR_3, VAR_0, VAR_5->rx_ring, VAR_5->rx_ring_dma);
 FUNC_3(VAR_3, VAR_2, VAR_5->tx_ring, VAR_5->tx_ring_dma);
 FUNC_7 (VAR_4);

 FUNC_5(VAR_3, VAR_5->base);

 FUNC_6 (VAR_3);

 FUNC_1 (VAR_4);
}
