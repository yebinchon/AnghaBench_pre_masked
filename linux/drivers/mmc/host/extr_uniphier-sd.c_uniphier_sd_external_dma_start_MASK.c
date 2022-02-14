
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_sd_priv {int dma_dir; int chan; } ;
struct tmio_mmc_host {int dma_on; int sg_len; int sg_ptr; int mmc; } ;
struct mmc_data {int flags; } ;
struct dma_async_tx_descriptor {struct tmio_mmc_host* callback_param; int callback_result; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef scalar_t__ dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int ,int,int,int ) ;
 scalar_t__ FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tmio_mmc_host*,int ) ;
 int VAR_6 ;
 struct uniphier_sd_priv* FUNC_6 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_7(struct tmio_mmc_host *VAR_7,
        struct mmc_data *VAR_8)
{
 struct uniphier_sd_priv *VAR_9 = FUNC_6(VAR_7);
 enum dma_transfer_direction VAR_10;
 struct dma_async_tx_descriptor *VAR_11;
 dma_cookie_t VAR_12;
 int VAR_13;

 if (!VAR_9->chan)
  goto force_pio;

 if (VAR_8->flags & VAR_5) {
  VAR_9->dma_dir = VAR_2;
  VAR_10 = VAR_1;
 } else {
  VAR_9->dma_dir = VAR_4;
  VAR_10 = VAR_3;
 }

 VAR_13 = FUNC_0(FUNC_4(VAR_7->mmc), VAR_7->sg_ptr, VAR_7->sg_len,
       VAR_9->dma_dir);
 if (VAR_13 == 0)
  goto force_pio;

 VAR_11 = FUNC_2(VAR_9->chan, VAR_7->sg_ptr, VAR_13,
           VAR_10, VAR_0);
 if (!VAR_11)
  goto unmap_sg;

 VAR_11->callback_result = VAR_6;
 VAR_11->callback_param = VAR_7;

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12 < 0)
  goto unmap_sg;

 VAR_7->dma_on = 1;

 return;

unmap_sg:
 FUNC_1(FUNC_4(VAR_7->mmc), VAR_7->sg_ptr, VAR_7->sg_len,
       VAR_9->dma_dir);
force_pio:
 FUNC_5(VAR_7, 0);
}
