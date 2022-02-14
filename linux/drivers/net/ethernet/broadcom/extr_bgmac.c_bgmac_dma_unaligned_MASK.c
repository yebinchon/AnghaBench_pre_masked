
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac_dma_ring {scalar_t__ mmio_base; } ;
struct bgmac {int dummy; } ;
typedef enum bgmac_dma_ring_type { ____Placeholder_bgmac_dma_ring_type } bgmac_dma_ring_type ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bgmac*,scalar_t__) ;
 int FUNC_1 (struct bgmac*,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_2(struct bgmac *VAR_2,
    struct bgmac_dma_ring *VAR_3,
    enum bgmac_dma_ring_type VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_2, VAR_3->mmio_base + VAR_1,
       0xff0);
  if (FUNC_0(VAR_2, VAR_3->mmio_base + VAR_1))
   return 1;
  break;
 case 129:
  FUNC_1(VAR_2, VAR_3->mmio_base + VAR_0,
       0xff0);
  if (FUNC_0(VAR_2, VAR_3->mmio_base + VAR_0))
   return 1;
  break;
 }
 return 0;
}
