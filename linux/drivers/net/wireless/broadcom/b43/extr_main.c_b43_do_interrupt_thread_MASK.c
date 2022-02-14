
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int rx_ring; } ;
struct TYPE_5__ {int rx_queue; } ;
struct TYPE_4__ {int txerr_cnt; } ;
struct b43_wldev {int* dma_reason; int irq_reason; int use_pio; int* irq_bit_count; int irq_count; int irq_mask; TYPE_3__ dma; TYPE_2__ pio; int wl; TYPE_1__ phy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct b43_wldev*,char*) ;
 scalar_t__ FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct b43_wldev*) ;
 scalar_t__ FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*,int ,int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct b43_wldev*) ;
 int FUNC_15 (struct b43_wldev*) ;
 int FUNC_16 (struct b43_wldev*) ;
 int FUNC_17 (struct b43_wldev*) ;
 int FUNC_18 (struct b43_wldev*) ;
 int FUNC_19 (struct b43_wldev*) ;
 int FUNC_20 (struct b43_wldev*) ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static void FUNC_23(struct b43_wldev *VAR_18)
{
 u32 VAR_19;
 u32 VAR_20[FUNC_0(VAR_18->dma_reason)];
 u32 VAR_21 = 0;
 int VAR_22;

 if (FUNC_22(FUNC_9(VAR_18) != VAR_17))
  return;

 VAR_19 = VAR_18->irq_reason;
 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_20); VAR_22++) {
  VAR_20[VAR_22] = VAR_18->dma_reason[VAR_22];
  VAR_21 |= VAR_20[VAR_22];
 }

 if (FUNC_22(VAR_19 & VAR_7))
  FUNC_12(VAR_18->wl, "MAC transmission error\n");

 if (FUNC_22(VAR_19 & VAR_9)) {
  FUNC_12(VAR_18->wl, "PHY transmission error\n");
  FUNC_21();
  if (FUNC_22(FUNC_2(&VAR_18->phy.txerr_cnt))) {
   FUNC_3(&VAR_18->phy.txerr_cnt,
       VAR_16);
   FUNC_12(VAR_18->wl, "Too many PHY TX errors, "
     "restarting the controller\n");
   FUNC_4(VAR_18, "PHY TX errors");
  }
 }

 if (FUNC_22(VAR_21 & (VAR_2))) {
  FUNC_12(VAR_18->wl,
   "Fatal DMA error: 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X\n",
   VAR_20[0], VAR_20[1],
   VAR_20[2], VAR_20[3],
   VAR_20[4], VAR_20[5]);
  FUNC_12(VAR_18->wl, "This device does not support DMA "
          "on your system. It will now be switched to PIO.\n");

  VAR_18->use_pio = 1;
  FUNC_4(VAR_18, "DMA error");
  return;
 }

 if (FUNC_22(VAR_19 & VAR_14))
  FUNC_20(VAR_18);
 if (VAR_19 & VAR_11)
  FUNC_18(VAR_18);
 if (VAR_19 & VAR_5)
  FUNC_14(VAR_18);
 if (VAR_19 & VAR_6)
  FUNC_15(VAR_18);
 if (VAR_19 & VAR_10)
  FUNC_17(VAR_18);
 if (VAR_19 & VAR_12)
  ;
 if (VAR_19 & VAR_8)
  FUNC_16(VAR_18);


 if (VAR_20[0] & VAR_3) {
  if (VAR_1)
   FUNC_13(VAR_18->wl, "RX descriptor underrun\n");
  FUNC_6(VAR_18->dma.rx_ring);
 }
 if (VAR_20[0] & VAR_4) {
  if (FUNC_10(VAR_18))
   FUNC_8(VAR_18->pio.rx_queue);
  else
   FUNC_7(VAR_18->dma.rx_ring);
 }
 FUNC_1(VAR_20[1] & VAR_4);
 FUNC_1(VAR_20[2] & VAR_4);
 FUNC_1(VAR_20[3] & VAR_4);
 FUNC_1(VAR_20[4] & VAR_4);
 FUNC_1(VAR_20[5] & VAR_4);

 if (VAR_19 & VAR_13)
  FUNC_19(VAR_18);


 FUNC_11(VAR_18, VAR_15, VAR_18->irq_mask);
}
