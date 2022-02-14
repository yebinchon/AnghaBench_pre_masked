
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_fmc2_nand {int chip; } ;
struct stm32_fmc2_nfc {int clk; int dma_ecc_sg; int dma_data_sg; scalar_t__ dma_rx_ch; scalar_t__ dma_tx_ch; scalar_t__ dma_ecc_ch; struct stm32_fmc2_nand nand; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 struct stm32_fmc2_nfc* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct stm32_fmc2_nfc *VAR_1 = FUNC_3(VAR_0);
 struct stm32_fmc2_nand *VAR_2 = &VAR_1->nand;

 FUNC_2(&VAR_2->chip);

 if (VAR_1->dma_ecc_ch)
  FUNC_1(VAR_1->dma_ecc_ch);
 if (VAR_1->dma_tx_ch)
  FUNC_1(VAR_1->dma_tx_ch);
 if (VAR_1->dma_rx_ch)
  FUNC_1(VAR_1->dma_rx_ch);

 FUNC_4(&VAR_1->dma_data_sg);
 FUNC_4(&VAR_1->dma_ecc_sg);

 FUNC_0(VAR_1->clk);

 return 0;
}
