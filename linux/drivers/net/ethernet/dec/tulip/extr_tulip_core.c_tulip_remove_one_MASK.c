
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tulip_tx_desc {int dummy; } ;
struct tulip_rx_desc {int dummy; } ;
struct tulip_private {int base_addr; int mtable; int rx_ring_dma; int rx_ring; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct tulip_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int,int ,int ) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5 (VAR_2);
 struct tulip_private *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_2(VAR_3);
 FUNC_8(VAR_3);
 FUNC_4 (VAR_2,
        sizeof (struct tulip_rx_desc) * VAR_0 +
        sizeof (struct tulip_tx_desc) * VAR_1,
        VAR_4->rx_ring, VAR_4->rx_ring_dma);
 FUNC_1 (VAR_4->mtable);
 FUNC_6(VAR_2, VAR_4->base_addr);
 FUNC_0 (VAR_3);
 FUNC_7 (VAR_2);
 FUNC_3(VAR_2);


}
