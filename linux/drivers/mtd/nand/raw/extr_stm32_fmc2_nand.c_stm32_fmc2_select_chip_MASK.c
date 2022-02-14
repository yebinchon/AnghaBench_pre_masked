
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_fmc2_nfc {size_t cs_sel; int dma_ecc_len; int dev; scalar_t__ dma_ecc_ch; int io_phys_addr; scalar_t__ dma_rx_ch; scalar_t__ dma_tx_ch; int * data_phys_addr; } ;
struct stm32_fmc2_nand {size_t* cs_used; } ;
struct TYPE_2__ {scalar_t__ strength; } ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; void* src_addr_width; int src_addr; void* dst_addr_width; int dst_addr; } ;
typedef int dma_cfg ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,struct dma_slave_config*) ;
 int FUNC_2 (struct dma_slave_config*,int ,int) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 struct stm32_fmc2_nand* FUNC_5 (struct nand_chip*) ;
 struct stm32_fmc2_nfc* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_6, int VAR_7)
{
 struct stm32_fmc2_nfc *VAR_8 = FUNC_6(VAR_6->controller);
 struct stm32_fmc2_nand *VAR_9 = FUNC_5(VAR_6);
 struct dma_slave_config VAR_10;
 int VAR_11;

 if (VAR_9->cs_used[VAR_7] == VAR_8->cs_sel)
  return 0;

 VAR_8->cs_sel = VAR_9->cs_used[VAR_7];


 FUNC_3(VAR_6);


 FUNC_4(VAR_6);

 if (VAR_8->dma_tx_ch && VAR_8->dma_rx_ch) {
  FUNC_2(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.src_addr = VAR_8->data_phys_addr[VAR_8->cs_sel];
  VAR_10.dst_addr = VAR_8->data_phys_addr[VAR_8->cs_sel];
  VAR_10.src_addr_width = VAR_0;
  VAR_10.dst_addr_width = VAR_0;
  VAR_10.src_maxburst = 32;
  VAR_10.dst_maxburst = 32;

  VAR_11 = FUNC_1(VAR_8->dma_tx_ch, &VAR_10);
  if (VAR_11) {
   FUNC_0(VAR_8->dev, "tx DMA engine slave config failed\n");
   return VAR_11;
  }

  VAR_11 = FUNC_1(VAR_8->dma_rx_ch, &VAR_10);
  if (VAR_11) {
   FUNC_0(VAR_8->dev, "rx DMA engine slave config failed\n");
   return VAR_11;
  }
 }

 if (VAR_8->dma_ecc_ch) {




  FUNC_2(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.src_addr = VAR_8->io_phys_addr;
  VAR_10.src_addr += VAR_6->ecc.strength == VAR_3 ?
        VAR_4 : VAR_1;
  VAR_10.src_addr_width = VAR_0;

  VAR_11 = FUNC_1(VAR_8->dma_ecc_ch, &VAR_10);
  if (VAR_11) {
   FUNC_0(VAR_8->dev, "ECC DMA engine slave config failed\n");
   return VAR_11;
  }


  VAR_8->dma_ecc_len = VAR_6->ecc.strength == VAR_3 ?
        VAR_5 : VAR_2;
 }

 return 0;
}
