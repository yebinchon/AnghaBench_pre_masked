
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_dma {struct b43legacy_dmaring* tx_ring0; struct b43legacy_dmaring* tx_ring1; struct b43legacy_dmaring* tx_ring2; struct b43legacy_dmaring* tx_ring3; struct b43legacy_dmaring* tx_ring4; struct b43legacy_dmaring* tx_ring5; struct b43legacy_dmaring* rx_ring0; struct b43legacy_dmaring* rx_ring3; int translation; } ;
struct b43legacy_wldev {int __using_pio; int wl; TYPE_2__* dev; struct b43legacy_dma dma; } ;
struct b43legacy_dmaring {int dummy; } ;
typedef enum b43legacy_dmatype { ____Placeholder_b43legacy_dmatype } b43legacy_dmatype ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; int dma_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct b43legacy_dmaring*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 struct b43legacy_dmaring* FUNC_3 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(struct b43legacy_wldev *VAR_3)
{
 struct b43legacy_dma *VAR_4 = &VAR_3->dma;
 struct b43legacy_dmaring *VAR_5;
 enum b43legacy_dmatype VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_7(VAR_3->dev->dma_dev, FUNC_0(VAR_6));
 if (VAR_7) {






  FUNC_5(VAR_3->wl, "DMA for this device not supported and "
         "no PIO support compiled in\n");
  return -VAR_2;

 }
 VAR_4->translation = FUNC_8(VAR_3->dev);

 VAR_7 = -VAR_1;

 VAR_5 = FUNC_3(VAR_3, 0, 1, VAR_6);
 if (!VAR_5)
  goto out;
 VAR_4->tx_ring0 = VAR_5;

 VAR_5 = FUNC_3(VAR_3, 1, 1, VAR_6);
 if (!VAR_5)
  goto err_destroy_tx0;
 VAR_4->tx_ring1 = VAR_5;

 VAR_5 = FUNC_3(VAR_3, 2, 1, VAR_6);
 if (!VAR_5)
  goto err_destroy_tx1;
 VAR_4->tx_ring2 = VAR_5;

 VAR_5 = FUNC_3(VAR_3, 3, 1, VAR_6);
 if (!VAR_5)
  goto err_destroy_tx2;
 VAR_4->tx_ring3 = VAR_5;

 VAR_5 = FUNC_3(VAR_3, 4, 1, VAR_6);
 if (!VAR_5)
  goto err_destroy_tx3;
 VAR_4->tx_ring4 = VAR_5;

 VAR_5 = FUNC_3(VAR_3, 5, 1, VAR_6);
 if (!VAR_5)
  goto err_destroy_tx4;
 VAR_4->tx_ring5 = VAR_5;


 VAR_5 = FUNC_3(VAR_3, 0, 0, VAR_6);
 if (!VAR_5)
  goto err_destroy_tx5;
 VAR_4->rx_ring0 = VAR_5;

 if (VAR_3->dev->id.revision < 5) {
  VAR_5 = FUNC_3(VAR_3, 3, 0, VAR_6);
  if (!VAR_5)
   goto err_destroy_rx0;
  VAR_4->rx_ring3 = VAR_5;
 }

 FUNC_4(VAR_3->wl, "%u-bit DMA initialized\n", (unsigned int)VAR_6);
 VAR_7 = 0;
out:
 return VAR_7;

err_destroy_rx0:
 FUNC_1(VAR_4->rx_ring0);
 VAR_4->rx_ring0 = ((void*)0);
err_destroy_tx5:
 FUNC_1(VAR_4->tx_ring5);
 VAR_4->tx_ring5 = ((void*)0);
err_destroy_tx4:
 FUNC_1(VAR_4->tx_ring4);
 VAR_4->tx_ring4 = ((void*)0);
err_destroy_tx3:
 FUNC_1(VAR_4->tx_ring3);
 VAR_4->tx_ring3 = ((void*)0);
err_destroy_tx2:
 FUNC_1(VAR_4->tx_ring2);
 VAR_4->tx_ring2 = ((void*)0);
err_destroy_tx1:
 FUNC_1(VAR_4->tx_ring1);
 VAR_4->tx_ring1 = ((void*)0);
err_destroy_tx0:
 FUNC_1(VAR_4->tx_ring0);
 VAR_4->tx_ring0 = ((void*)0);
 goto out;
}
