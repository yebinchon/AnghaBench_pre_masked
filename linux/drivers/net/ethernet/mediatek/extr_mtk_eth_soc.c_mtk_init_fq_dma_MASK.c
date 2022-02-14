
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_tx_dma {int dummy; } ;
struct mtk_eth {int phy_scratch_ring; TYPE_1__* scratch_ring; int dev; int scratch_head; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int txd1; int txd3; scalar_t__ txd2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int,int*,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mtk_eth*,int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mtk_eth *VAR_10)
{
 dma_addr_t VAR_11;
 int VAR_12 = VAR_4;
 dma_addr_t VAR_13;
 int VAR_14;

 VAR_10->scratch_ring = FUNC_1(VAR_10->dev,
            VAR_12 * sizeof(struct mtk_tx_dma),
            &VAR_10->phy_scratch_ring,
            VAR_2);
 if (FUNC_6(!VAR_10->scratch_ring))
  return -VAR_1;

 VAR_10->scratch_head = FUNC_4(VAR_12, VAR_9,
        VAR_3);
 if (FUNC_6(!VAR_10->scratch_head))
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_10->dev,
      VAR_10->scratch_head, VAR_12 * VAR_9,
      VAR_0);
 if (FUNC_6(FUNC_3(VAR_10->dev, VAR_13)))
  return -VAR_1;

 VAR_11 = VAR_10->phy_scratch_ring +
   (sizeof(struct mtk_tx_dma) * (VAR_12 - 1));

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_10->scratch_ring[VAR_14].txd1 =
     (VAR_13 + (VAR_14 * VAR_9));
  if (VAR_14 < VAR_12 - 1)
   VAR_10->scratch_ring[VAR_14].txd2 = (VAR_10->phy_scratch_ring +
    ((VAR_14 + 1) * sizeof(struct mtk_tx_dma)));
  VAR_10->scratch_ring[VAR_14].txd3 = FUNC_0(VAR_9);
 }

 FUNC_5(VAR_10, VAR_10->phy_scratch_ring, VAR_7);
 FUNC_5(VAR_10, VAR_11, VAR_8);
 FUNC_5(VAR_10, (VAR_12 << 16) | VAR_12, VAR_6);
 FUNC_5(VAR_10, VAR_9 << 16, VAR_5);

 return 0;
}
