
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac_dma_ring {int end; scalar_t__ index_base; scalar_t__ mmio_base; } ;
struct bgmac_dma_desc {int dummy; } ;
struct bgmac {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bgmac*,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct bgmac *VAR_1,
          struct bgmac_dma_ring *VAR_2)
{
 FUNC_1();

 FUNC_0(VAR_1, VAR_2->mmio_base + VAR_0,
      VAR_2->index_base +
      VAR_2->end * sizeof(struct bgmac_dma_desc));
}
