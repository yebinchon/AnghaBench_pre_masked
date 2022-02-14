
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_fmc2_nfc {int dma_ecc_complete; int dma_data_complete; int dma_data_sg; int ecc_buf; int dev; int dma_ecc_sg; void* dma_ecc_ch; void* dma_rx_ch; void* dma_tx_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct stm32_fmc2_nfc *VAR_4)
{
 int VAR_5;

 VAR_4->dma_tx_ch = FUNC_2(VAR_4->dev, "tx");
 VAR_4->dma_rx_ch = FUNC_2(VAR_4->dev, "rx");
 VAR_4->dma_ecc_ch = FUNC_2(VAR_4->dev, "ecc");

 if (!VAR_4->dma_tx_ch || !VAR_4->dma_rx_ch || !VAR_4->dma_ecc_ch) {
  FUNC_0(VAR_4->dev, "DMAs not defined in the device tree, polling mode is used\n");
  return 0;
 }

 VAR_5 = FUNC_4(&VAR_4->dma_ecc_sg, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;


 VAR_4->ecc_buf = FUNC_1(VAR_4->dev, VAR_1,
         VAR_3);
 if (!VAR_4->ecc_buf)
  return -VAR_0;

 VAR_5 = FUNC_4(&VAR_4->dma_data_sg, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_4->dma_data_complete);
 FUNC_3(&VAR_4->dma_ecc_complete);

 return 0;
}
