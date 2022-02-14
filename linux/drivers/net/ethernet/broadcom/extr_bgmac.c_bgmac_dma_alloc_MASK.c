
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device {int dummy; } ;
struct bgmac_dma_ring {void* index_base; int dma_base; void* unaligned; int mmio_base; void* cpu_base; } ;
struct bgmac_dma_desc {int dummy; } ;
struct bgmac {int feature_flags; int dev; struct bgmac_dma_ring* rx_ring; struct bgmac_dma_ring* tx_ring; struct device* dma_dev; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bgmac*) ;
 void* FUNC_3 (struct bgmac*,struct bgmac_dma_ring*,int ) ;
 int FUNC_4 (struct bgmac*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 void* FUNC_6 (struct device*,int,int *,int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct bgmac *VAR_12)
{
 struct device *VAR_13 = VAR_12->dma_dev;
 struct bgmac_dma_ring *VAR_14;
 static const u16 VAR_15[] = { 131, 130,
      129, 128, };
 int VAR_16;
 int VAR_17;

 FUNC_1(VAR_6 > FUNC_0(VAR_15));
 FUNC_1(VAR_5 > FUNC_0(VAR_15));

 if (!(VAR_12->feature_flags & VAR_4)) {
  if (!(FUNC_4(VAR_12, VAR_0) & VAR_1)) {
   FUNC_5(VAR_12->dev, "Core does not report 64-bit DMA\n");
   return -VAR_10;
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  VAR_14 = &VAR_12->tx_ring[VAR_17];
  VAR_14->mmio_base = VAR_15[VAR_17];


  VAR_16 = VAR_8 * sizeof(struct bgmac_dma_desc);
  VAR_14->cpu_base = FUNC_6(VAR_13, VAR_16,
          &VAR_14->dma_base,
          VAR_11);
  if (!VAR_14->cpu_base) {
   FUNC_5(VAR_12->dev, "Allocation of TX ring 0x%X failed\n",
    VAR_14->mmio_base);
   goto err_dma_free;
  }

  VAR_14->unaligned = FUNC_3(VAR_12, VAR_14,
            VAR_3);
  if (VAR_14->unaligned)
   VAR_14->index_base = FUNC_7(VAR_14->dma_base);
  else
   VAR_14->index_base = 0;


 }

 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_14 = &VAR_12->rx_ring[VAR_17];
  VAR_14->mmio_base = VAR_15[VAR_17];


  VAR_16 = VAR_7 * sizeof(struct bgmac_dma_desc);
  VAR_14->cpu_base = FUNC_6(VAR_13, VAR_16,
          &VAR_14->dma_base,
          VAR_11);
  if (!VAR_14->cpu_base) {
   FUNC_5(VAR_12->dev, "Allocation of RX ring 0x%X failed\n",
    VAR_14->mmio_base);
   goto err_dma_free;
  }

  VAR_14->unaligned = FUNC_3(VAR_12, VAR_14,
            VAR_2);
  if (VAR_14->unaligned)
   VAR_14->index_base = FUNC_7(VAR_14->dma_base);
  else
   VAR_14->index_base = 0;
 }

 return 0;

err_dma_free:
 FUNC_2(VAR_12);
 return -VAR_9;
}
