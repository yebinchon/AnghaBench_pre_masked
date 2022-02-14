
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_data {int ocr_mask; int max_segs; int max_blk_count; int flags; } ;
struct uniphier_sd_priv {unsigned long caps; struct tmio_mmc_host* rst_hw; struct tmio_mmc_data tmio_data; struct tmio_mmc_host* rst_br; struct tmio_mmc_host* rst; struct tmio_mmc_host* clk; } ;
struct tmio_mmc_host {int bus_shift; int (* clk_enable ) (struct tmio_mmc_host*) ;TYPE_1__* mmc; int set_clock; int clk_disable; int * dma_ops; int hw_reset; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tmio_mmc_host*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct tmio_mmc_host*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct tmio_mmc_host* FUNC_5 (struct device*,int *) ;
 struct uniphier_sd_priv* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,struct tmio_mmc_host*) ;
 struct tmio_mmc_host* FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,char*) ;
 scalar_t__ FUNC_10 (struct device*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct tmio_mmc_host* FUNC_12 (struct platform_device*,struct tmio_mmc_data*) ;
 int FUNC_13 (struct tmio_mmc_host*) ;
 int FUNC_14 (struct tmio_mmc_host*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (struct tmio_mmc_host*) ;
 int VAR_13 ;
 int FUNC_16 (struct tmio_mmc_host*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (struct tmio_mmc_host*,struct uniphier_sd_priv*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct uniphier_sd_priv *VAR_19;
 struct tmio_mmc_data *VAR_20;
 struct tmio_mmc_host *VAR_21;
 int VAR_22, VAR_23;

 VAR_22 = FUNC_11(VAR_17, 0);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_19 = FUNC_6(VAR_18, sizeof(*VAR_19), VAR_1);
 if (!VAR_19)
  return -VAR_0;

 VAR_19->caps = (unsigned long)FUNC_10(VAR_18);

 VAR_19->clk = FUNC_5(VAR_18, ((void*)0));
 if (FUNC_0(VAR_19->clk)) {
  FUNC_2(VAR_18, "failed to get clock\n");
  return FUNC_1(VAR_19->clk);
 }

 VAR_19->rst = FUNC_9(VAR_18, "host");
 if (FUNC_0(VAR_19->rst)) {
  FUNC_2(VAR_18, "failed to get host reset\n");
  return FUNC_1(VAR_19->rst);
 }


 if (!(VAR_19->caps & VAR_10)) {
  VAR_19->rst_br = FUNC_9(VAR_18, "bridge");
  if (FUNC_0(VAR_19->rst_br)) {
   FUNC_2(VAR_18, "failed to get bridge reset\n");
   return FUNC_1(VAR_19->rst_br);
  }
 }

 VAR_20 = &VAR_19->tmio_data;
 VAR_20->flags |= VAR_8;

 VAR_21 = FUNC_12(VAR_17, VAR_20);
 if (FUNC_0(VAR_21))
  return FUNC_1(VAR_21);

 if (VAR_21->mmc->caps & VAR_3) {
  VAR_19->rst_hw = FUNC_8(VAR_18, "hw");
  if (FUNC_0(VAR_19->rst_hw)) {
   FUNC_2(VAR_18, "failed to get hw reset\n");
   VAR_23 = FUNC_1(VAR_19->rst_hw);
   goto free_host;
  }
  VAR_21->hw_reset = VAR_14;
 }

 if (VAR_21->mmc->caps & VAR_4) {
  VAR_23 = FUNC_17(VAR_21, VAR_19);
  if (VAR_23) {
   FUNC_4(VAR_18,
     "failed to setup UHS (error %d).  Disabling UHS.",
     VAR_23);
   VAR_21->mmc->caps &= ~VAR_4;
  }
 }

 VAR_23 = FUNC_7(VAR_18, VAR_22, VAR_11, VAR_2,
          FUNC_3(VAR_18), VAR_21);
 if (VAR_23)
  goto free_host;

 if (VAR_19->caps & VAR_10)
  VAR_21->dma_ops = &VAR_15;
 else
  VAR_21->dma_ops = &VAR_13;

 VAR_21->bus_shift = 1;
 VAR_21->clk_enable = FUNC_15;
 VAR_21->clk_disable = VAR_12;
 VAR_21->set_clock = VAR_16;

 VAR_23 = FUNC_15(VAR_21);
 if (VAR_23)
  goto free_host;

 FUNC_16(VAR_21);

 VAR_20->ocr_mask = VAR_6 | VAR_7;
 if (VAR_21->mmc->caps & VAR_4)
  VAR_20->ocr_mask |= VAR_5;

 VAR_20->max_segs = 1;
 VAR_20->max_blk_count = VAR_9;

 VAR_23 = FUNC_14(VAR_21);
 if (VAR_23)
  goto free_host;

 return 0;

free_host:
 FUNC_13(VAR_21);

 return VAR_23;
}
