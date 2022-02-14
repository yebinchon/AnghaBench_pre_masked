
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis900_private {int ioaddr; int tx_ring_dma; int tx_ring; int rx_ring_dma; int rx_ring; struct mii_phy* first_mii; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_phy {struct mii_phy* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mii_phy*) ;
 struct sis900_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_4(VAR_2);
 struct sis900_private *VAR_4 = FUNC_2(VAR_3);

 FUNC_7(VAR_3);

 while (VAR_4->first_mii) {
  struct mii_phy *VAR_5 = VAR_4->first_mii;

  VAR_4->first_mii = VAR_5->next;
  FUNC_1(VAR_5);
 }

 FUNC_3(VAR_2, VAR_0, VAR_4->rx_ring,
  VAR_4->rx_ring_dma);
 FUNC_3(VAR_2, VAR_1, VAR_4->tx_ring,
  VAR_4->tx_ring_dma);
 FUNC_5(VAR_2, VAR_4->ioaddr);
 FUNC_0(VAR_3);
 FUNC_6(VAR_2);
}
