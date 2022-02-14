
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct pch_gbe_hw {TYPE_2__* reg; } ;
struct pch_gbe_adapter {TYPE_1__* rx_ring; int netdev; struct pch_gbe_hw hw; } ;
struct TYPE_4__ {int RX_DSC_SW_P; int RX_DSC_SIZE; int RX_DSC_BASE; int DMA_CTRL; int MAC_RX_EN; } ;
struct TYPE_3__ {unsigned long long dma; unsigned long long size; } ;


 unsigned long long VAR_0 ;
 unsigned long long FUNC_0 (int *) ;
 int FUNC_1 (unsigned long long,int *) ;
 int FUNC_2 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_3 (struct pch_gbe_hw*) ;
 int FUNC_4 (struct pch_gbe_hw*) ;

__attribute__((used)) static void FUNC_5(struct pch_gbe_adapter *VAR_1)
{
 struct pch_gbe_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3, VAR_4, VAR_5;

 FUNC_2(VAR_1->netdev, "dma adr = 0x%08llx  size = 0x%08x\n",
     (unsigned long long)VAR_1->rx_ring->dma,
     VAR_1->rx_ring->size);

 FUNC_4(VAR_2);

 FUNC_3(VAR_2);


 VAR_5 = FUNC_0(&VAR_2->reg->DMA_CTRL);
 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_5, &VAR_2->reg->DMA_CTRL);

 FUNC_2(VAR_1->netdev,
     "MAC_RX_EN reg = 0x%08x  DMA_CTRL reg = 0x%08x\n",
     FUNC_0(&VAR_2->reg->MAC_RX_EN),
     FUNC_0(&VAR_2->reg->DMA_CTRL));



 VAR_3 = VAR_1->rx_ring->dma;
 VAR_4 = VAR_1->rx_ring->size - 0x10;
 FUNC_1(VAR_3, &VAR_2->reg->RX_DSC_BASE);
 FUNC_1(VAR_4, &VAR_2->reg->RX_DSC_SIZE);
 FUNC_1((VAR_3 + VAR_4), &VAR_2->reg->RX_DSC_SW_P);
}
