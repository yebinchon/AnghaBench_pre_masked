
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_dma {int parity; void* rx_ring; void* tx_ring_mcast; void* tx_ring_AC_VO; void* tx_ring_AC_VI; void* tx_ring_AC_BE; void* tx_ring_AC_BK; int translation_in_low; int translation; } ;
struct b43_wldev {int wl; TYPE_1__* dev; struct b43_dma dma; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;
struct TYPE_2__ {int bus_type; int core_rev; int sdev; int bdev; int dma_dev; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*) ;
 void* FUNC_4 (struct b43_wldev*,int,int,int) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct b43_dma*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_11(struct b43_wldev *VAR_6)
{
 struct b43_dma *VAR_7 = &VAR_6->dma;
 enum b43_dmatype VAR_8 = FUNC_3(VAR_6);
 int VAR_9;

 VAR_9 = FUNC_9(VAR_6->dev->dma_dev, FUNC_1(VAR_8));
 if (VAR_9) {
  FUNC_6(VAR_6->wl, "The machine/kernel does not support "
         "the required %u-bit DMA mask\n", VAR_8);
  return VAR_9;
 }

 switch (VAR_6->dev->bus_type) {
 }
 VAR_7->translation_in_low = FUNC_2(VAR_6, VAR_8);

 VAR_7->parity = 1;






 VAR_9 = -VAR_0;

 VAR_7->tx_ring_AC_BK = FUNC_4(VAR_6, 0, 1, VAR_8);
 if (!VAR_7->tx_ring_AC_BK)
  goto out;

 VAR_7->tx_ring_AC_BE = FUNC_4(VAR_6, 1, 1, VAR_8);
 if (!VAR_7->tx_ring_AC_BE)
  goto err_destroy_bk;

 VAR_7->tx_ring_AC_VI = FUNC_4(VAR_6, 2, 1, VAR_8);
 if (!VAR_7->tx_ring_AC_VI)
  goto err_destroy_be;

 VAR_7->tx_ring_AC_VO = FUNC_4(VAR_6, 3, 1, VAR_8);
 if (!VAR_7->tx_ring_AC_VO)
  goto err_destroy_vi;

 VAR_7->tx_ring_mcast = FUNC_4(VAR_6, 4, 1, VAR_8);
 if (!VAR_7->tx_ring_mcast)
  goto err_destroy_vo;


 VAR_7->rx_ring = FUNC_4(VAR_6, 0, 0, VAR_8);
 if (!VAR_7->rx_ring)
  goto err_destroy_mcast;


 FUNC_0(VAR_6->dev->core_rev < 5);

 FUNC_5(VAR_6->wl, "%u-bit DMA initialized\n",
        (unsigned int)VAR_8);
 VAR_9 = 0;
out:
 return VAR_9;

err_destroy_mcast:
 FUNC_8(VAR_7, VAR_5);
err_destroy_vo:
 FUNC_8(VAR_7, VAR_4);
err_destroy_vi:
 FUNC_8(VAR_7, VAR_3);
err_destroy_be:
 FUNC_8(VAR_7, VAR_1);
err_destroy_bk:
 FUNC_8(VAR_7, VAR_2);
 return VAR_9;
}
