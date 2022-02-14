
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct smi_port {int* dma_addr; int DMA_CHAN1_CONTROL; int DMA_CHAN1_ADDR_HI; int DMA_CHAN1_ADDR_LOW; scalar_t__ _dmaInterruptCH1; int DMA_CHAN0_CONTROL; int DMA_CHAN0_ADDR_HI; int DMA_CHAN0_ADDR_LOW; scalar_t__ _dmaInterruptCH0; int DMA_MANAGEMENT; struct smi_dev* dev; } ;
struct smi_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct smi_port *VAR_2)
{
 struct smi_dev *VAR_3 = VAR_2->dev;
 u32 VAR_4 = 0, VAR_5, VAR_6, VAR_7;
 u8 VAR_8 = 0, VAR_9 = 1, VAR_10 = 1;
 u32 VAR_11 = 0, VAR_12 = VAR_0;
 u8 VAR_13 = 0, VAR_14 = 1, VAR_15 = 0, VAR_16 = 0;
 u64 VAR_17;

 VAR_11 = FUNC_0(VAR_2->DMA_MANAGEMENT);

 if (VAR_2->_dmaInterruptCH0) {
  VAR_4 = VAR_1;
  VAR_17 = VAR_2->dma_addr[0];
  VAR_5 = VAR_17 & 0xffffffff;
  VAR_6 = VAR_17 >> 32;
  VAR_7 = (VAR_4) | (VAR_12 << 22) | (VAR_13 << 25)
   | (VAR_14 << 28) | (VAR_15 << 29) | (VAR_16 << 30);
  VAR_11 |= VAR_9 | (VAR_10 << 1)
   | (VAR_8 << 8);

  FUNC_1(VAR_2->DMA_CHAN0_ADDR_LOW, VAR_5);
  FUNC_1(VAR_2->DMA_CHAN0_ADDR_HI, VAR_6);
  FUNC_1(VAR_2->DMA_CHAN0_CONTROL, VAR_7);
 }

 if (VAR_2->_dmaInterruptCH1) {
  VAR_4 = VAR_1;
  VAR_17 = VAR_2->dma_addr[1];
  VAR_5 = VAR_17 & 0xffffffff;
  VAR_6 = VAR_17 >> 32;
  VAR_7 = (VAR_4) | (VAR_12 << 22) | (VAR_13 << 25)
   | (VAR_14 << 28) | (VAR_15 << 29) | (VAR_16 << 30);
  VAR_11 |= (VAR_9 << 16) | (VAR_10 << 17)
   | (VAR_8 << 24);

  FUNC_1(VAR_2->DMA_CHAN1_ADDR_LOW, VAR_5);
  FUNC_1(VAR_2->DMA_CHAN1_ADDR_HI, VAR_6);
  FUNC_1(VAR_2->DMA_CHAN1_CONTROL, VAR_7);
 }
 return VAR_11;
}
