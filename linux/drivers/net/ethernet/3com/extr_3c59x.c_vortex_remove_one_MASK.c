
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {int drv_flags; int rx_ring_dma; int rx_ring; scalar_t__ ioaddr; scalar_t__ pm_state_valid; scalar_t__ cb_fn_base; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct boom_tx_desc {int dummy; } ;
struct boom_rx_desc {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;
 struct vortex_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_6)
{
 struct net_device *VAR_7 = FUNC_6(VAR_6);
 struct vortex_private *VAR_8;

 if (!VAR_7) {
  FUNC_11("vortex_remove_one called for Compaq device!\n");
  FUNC_0();
 }

 VAR_8 = FUNC_4(VAR_7);

 if (VAR_8->cb_fn_base)
  FUNC_7(VAR_6, VAR_8->cb_fn_base);

 FUNC_12(VAR_7);

 FUNC_10(VAR_6, VAR_2);
 if (VAR_8->pm_state_valid)
  FUNC_9(VAR_6);
 FUNC_5(VAR_6);


 FUNC_3(VAR_5 | ((VAR_8->drv_flags & VAR_0) ? 0x04 : 0x14),
      VAR_8->ioaddr + VAR_1);

 FUNC_7(VAR_6, VAR_8->ioaddr);

 FUNC_1(&VAR_6->dev,
   sizeof(struct boom_rx_desc) * VAR_3 +
   sizeof(struct boom_tx_desc) * VAR_4,
   VAR_8->rx_ring, VAR_8->rx_ring_dma);

 FUNC_8(VAR_6);

 FUNC_2(VAR_7);
}
