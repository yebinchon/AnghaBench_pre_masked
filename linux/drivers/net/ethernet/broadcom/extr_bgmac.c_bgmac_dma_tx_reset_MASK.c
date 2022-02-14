
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac_dma_ring {scalar_t__ mmio_base; } ;
struct bgmac {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bgmac*,scalar_t__) ;
 int FUNC_1 (struct bgmac*,scalar_t__,int,int,int) ;
 int FUNC_2 (struct bgmac*,scalar_t__,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,...) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct bgmac *VAR_7, struct bgmac_dma_ring *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 if (!VAR_8->mmio_base)
  return;





 FUNC_2(VAR_7, VAR_8->mmio_base + VAR_0,
      VAR_6);
 for (VAR_10 = 0; VAR_10 < 10000 / 10; VAR_10++) {
  VAR_9 = FUNC_0(VAR_7, VAR_8->mmio_base + VAR_2);
  VAR_9 &= VAR_1;
  if (VAR_9 == VAR_3 ||
      VAR_9 == VAR_4 ||
      VAR_9 == VAR_5) {
   VAR_10 = 0;
   break;
  }
  FUNC_5(10);
 }
 if (VAR_10)
  FUNC_3(VAR_7->dev, "Timeout suspending DMA TX ring 0x%X (BGMAC_DMA_TX_STAT: 0x%08X)\n",
   VAR_8->mmio_base, VAR_9);


 FUNC_2(VAR_7, VAR_8->mmio_base + VAR_0, 0);
 if (!FUNC_1(VAR_7,
         VAR_8->mmio_base + VAR_2,
         VAR_1, VAR_3,
         10000)) {
  FUNC_4(VAR_7->dev, "DMA TX ring 0x%X wasn't disabled on time, waiting additional 300us\n",
    VAR_8->mmio_base);
  FUNC_5(300);
  VAR_9 = FUNC_0(VAR_7, VAR_8->mmio_base + VAR_2);
  if ((VAR_9 & VAR_1) != VAR_3)
   FUNC_3(VAR_7->dev, "Reset of DMA TX ring 0x%X failed\n",
    VAR_8->mmio_base);
 }
}
