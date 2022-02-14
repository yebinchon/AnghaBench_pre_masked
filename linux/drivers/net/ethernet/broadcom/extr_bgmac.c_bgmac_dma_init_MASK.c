
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac_dma_ring {int * slots; scalar_t__ end; scalar_t__ start; scalar_t__ unaligned; int dma_base; scalar_t__ mmio_base; } ;
struct bgmac {struct bgmac_dma_ring* rx_ring; struct bgmac_dma_ring* tx_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*,struct bgmac_dma_ring*) ;
 int FUNC_2 (struct bgmac*,struct bgmac_dma_ring*,int) ;
 int FUNC_3 (struct bgmac*,int *) ;
 int FUNC_4 (struct bgmac*,struct bgmac_dma_ring*) ;
 int FUNC_5 (struct bgmac*,struct bgmac_dma_ring*) ;
 int FUNC_6 (struct bgmac*,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct bgmac *VAR_7)
{
 struct bgmac_dma_ring *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = &VAR_7->tx_ring[VAR_9];

  if (!VAR_8->unaligned)
   FUNC_5(VAR_7, VAR_8);
  FUNC_6(VAR_7, VAR_8->mmio_base + VAR_3,
       FUNC_7(VAR_8->dma_base));
  FUNC_6(VAR_7, VAR_8->mmio_base + VAR_2,
       FUNC_8(VAR_8->dma_base));
  if (VAR_8->unaligned)
   FUNC_5(VAR_7, VAR_8);

  VAR_8->start = 0;
  VAR_8->end = 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  int VAR_11;

  VAR_8 = &VAR_7->rx_ring[VAR_9];

  if (!VAR_8->unaligned)
   FUNC_1(VAR_7, VAR_8);
  FUNC_6(VAR_7, VAR_8->mmio_base + VAR_1,
       FUNC_7(VAR_8->dma_base));
  FUNC_6(VAR_7, VAR_8->mmio_base + VAR_0,
       FUNC_8(VAR_8->dma_base));
  if (VAR_8->unaligned)
   FUNC_1(VAR_7, VAR_8);

  VAR_8->start = 0;
  VAR_8->end = 0;
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   VAR_10 = FUNC_3(VAR_7, &VAR_8->slots[VAR_11]);
   if (VAR_10)
    goto error;

   FUNC_2(VAR_7, VAR_8, VAR_11);
  }

  FUNC_4(VAR_7, VAR_8);
 }

 return 0;

error:
 FUNC_0(VAR_7);
 return VAR_10;
}
