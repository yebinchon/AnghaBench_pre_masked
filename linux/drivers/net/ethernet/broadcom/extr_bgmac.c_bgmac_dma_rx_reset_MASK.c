
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac_dma_ring {scalar_t__ mmio_base; } ;
struct bgmac {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bgmac*,scalar_t__,int ,int ,int) ;
 int FUNC_1 (struct bgmac*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bgmac *VAR_4, struct bgmac_dma_ring *VAR_5)
{
 if (!VAR_5->mmio_base)
  return;

 FUNC_1(VAR_4, VAR_5->mmio_base + VAR_0, 0);
 if (!FUNC_0(VAR_4,
         VAR_5->mmio_base + VAR_2,
         VAR_1, VAR_3,
         10000))
  FUNC_2(VAR_4->dev, "Reset of ring 0x%X RX failed\n",
   VAR_5->mmio_base);
}
