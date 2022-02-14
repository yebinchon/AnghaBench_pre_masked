
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_13__ {int start_signal_voltage_switch; int card_busy; } ;
struct tmio_mmc_host {int bus_shift; int (* clk_enable ) (struct tmio_mmc_host*) ;TYPE_4__* mmc; int hs400_complete; int hs400_downgrade; int prepare_hs400_tuning; int check_scc_error; int select_tuning; int prepare_tuning; int init_tuning; TYPE_2__* pdev; int hw_reset; scalar_t__ ctl; int sdcard_irq_setbit_mask; TYPE_1__ ops; struct tmio_mmc_dma_ops const* dma_ops; int multi_io_quirk; int set_clock; int (* clk_disable ) (struct tmio_mmc_host*) ;int write16_hook; } ;
struct tmio_mmc_dma_ops {int dummy; } ;
struct tmio_mmc_dma {int enable; int filter; int dma_buswidth; } ;
struct tmio_mmc_data {int flags; scalar_t__ max_blk_count; int alignment_shift; int capabilities; int capabilities2; int max_segs; int dma_rx_offset; int ocr_mask; } ;
struct soc_device_attribute {struct renesas_sdhi_quirks* data; } ;
struct resource {scalar_t__ start; } ;
struct renesas_sdhi_scc {scalar_t__ clk_rate; int tap_hs400; int tap; } ;
struct renesas_sdhi_quirks {scalar_t__ hs400_4taps; scalar_t__ hs400_disabled; } ;
struct renesas_sdhi_of_data {int tmio_flags; scalar_t__ max_blk_count; int bus_shift; int taps_num; struct renesas_sdhi_scc* taps; scalar_t__ scc_offset; int dma_buswidth; int max_segs; int dma_rx_offset; int capabilities2; int capabilities; int tmio_ocr_mask; } ;
struct renesas_sdhi {int scc_tappos_hs400; int scc_tappos; scalar_t__ scc_ctl; struct tmio_mmc_host* pinctrl; void* pins_uhs; void* pins_default; struct tmio_mmc_host* clk_cd; struct tmio_mmc_host* clk; struct tmio_mmc_dma dma_priv; struct tmio_mmc_data mmc_data; } ;
struct TYPE_15__ {struct tmio_mmc_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_16__ {int caps2; int caps; scalar_t__ f_max; } ;
struct TYPE_14__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tmio_mmc_host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int FUNC_1 (struct tmio_mmc_host*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*,int ,unsigned long,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (TYPE_3__*,char*) ;
 struct renesas_sdhi* FUNC_7 (TYPE_3__*,int,int ) ;
 struct tmio_mmc_host* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ,int ,struct tmio_mmc_host*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 struct renesas_sdhi_of_data* FUNC_12 (TYPE_3__*) ;
 void* FUNC_13 (struct tmio_mmc_host*,char*) ;
 int FUNC_14 (struct platform_device*,int) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_17 (struct tmio_mmc_host*) ;
 int FUNC_18 (struct tmio_mmc_host*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_19 (struct resource*) ;
 scalar_t__ FUNC_20 (struct tmio_mmc_host*,int ) ;
 int VAR_40 ;
 int VAR_41 ;
 struct soc_device_attribute* FUNC_21 (int ) ;
 struct tmio_mmc_host* FUNC_22 (struct platform_device*,struct tmio_mmc_data*) ;
 int FUNC_23 (struct tmio_mmc_host*) ;
 int FUNC_24 (struct tmio_mmc_host*) ;
 int FUNC_25 (struct tmio_mmc_host*) ;
 int VAR_42 ;

int FUNC_26(struct platform_device *VAR_43,
         const struct tmio_mmc_dma_ops *VAR_44)
{
 struct tmio_mmc_data *VAR_45 = VAR_43->dev.platform_data;
 const struct renesas_sdhi_quirks *VAR_46 = ((void*)0);
 const struct renesas_sdhi_of_data *VAR_47;
 const struct soc_device_attribute *VAR_48;
 struct tmio_mmc_data *VAR_49;
 struct tmio_mmc_dma *VAR_50;
 struct tmio_mmc_host *VAR_51;
 struct renesas_sdhi *VAR_52;
 int VAR_53, VAR_54, VAR_55, VAR_56;
 struct resource *VAR_57;
 u16 VAR_58;

 VAR_47 = FUNC_12(&VAR_43->dev);

 VAR_48 = FUNC_21(VAR_40);
 if (VAR_48)
  VAR_46 = VAR_48->data;

 VAR_57 = FUNC_15(VAR_43, VAR_5, 0);
 if (!VAR_57)
  return -VAR_1;

 VAR_52 = FUNC_7(&VAR_43->dev, sizeof(struct renesas_sdhi),
       VAR_4);
 if (!VAR_52)
  return -VAR_2;

 VAR_49 = &VAR_52->mmc_data;
 VAR_50 = &VAR_52->dma_priv;

 VAR_52->clk = FUNC_6(&VAR_43->dev, ((void*)0));
 if (FUNC_0(VAR_52->clk)) {
  VAR_55 = FUNC_1(VAR_52->clk);
  FUNC_2(&VAR_43->dev, "cannot get clock: %d\n", VAR_55);
  return VAR_55;
 }
 VAR_52->clk_cd = FUNC_6(&VAR_43->dev, "cd");
 if (FUNC_0(VAR_52->clk_cd))
  VAR_52->clk_cd = ((void*)0);

 VAR_52->pinctrl = FUNC_8(&VAR_43->dev);
 if (!FUNC_0(VAR_52->pinctrl)) {
  VAR_52->pins_default = FUNC_13(VAR_52->pinctrl,
      VAR_14);
  VAR_52->pins_uhs = FUNC_13(VAR_52->pinctrl,
      "state_uhs");
 }

 VAR_51 = FUNC_22(VAR_43, VAR_49);
 if (FUNC_0(VAR_51))
  return FUNC_1(VAR_51);

 if (VAR_47) {
  VAR_49->flags |= VAR_47->tmio_flags;
  VAR_49->ocr_mask = VAR_47->tmio_ocr_mask;
  VAR_49->capabilities |= VAR_47->capabilities;
  VAR_49->capabilities2 |= VAR_47->capabilities2;
  VAR_49->dma_rx_offset = VAR_47->dma_rx_offset;
  VAR_49->max_blk_count = VAR_47->max_blk_count;
  VAR_49->max_segs = VAR_47->max_segs;
  VAR_50->dma_buswidth = VAR_47->dma_buswidth;
  VAR_51->bus_shift = VAR_47->bus_shift;
 }

 VAR_51->write16_hook = VAR_39;
 VAR_51->clk_enable = FUNC_18;
 VAR_51->clk_disable = FUNC_17;
 VAR_51->set_clock = VAR_37;
 VAR_51->multi_io_quirk = VAR_33;
 VAR_51->dma_ops = VAR_44;

 if (VAR_46 && VAR_46->hs400_disabled)
  VAR_51->mmc->caps2 &= ~(VAR_7 | VAR_9);

 if (VAR_46 && VAR_46->hs400_4taps)
  VAR_49->flags |= VAR_18;


 if (FUNC_10(VAR_51->mmc))
  VAR_49->capabilities2 &= ~VAR_10;


 if (VAR_49->flags & VAR_21) {

  VAR_51->ops.card_busy = VAR_26;
  VAR_51->ops.start_signal_voltage_switch =
   VAR_38;
  VAR_51->sdcard_irq_setbit_mask = VAR_24;


  if (VAR_47 && VAR_47->scc_offset) {
   VAR_52->scc_ctl = VAR_51->ctl + VAR_47->scc_offset;
   VAR_51->mmc->caps |= VAR_11;
   VAR_51->hw_reset = VAR_31;
  }
 }


 if (!VAR_51->bus_shift && FUNC_19(VAR_57) > 0x100)
  VAR_51->bus_shift = 1;

 if (VAR_45)
  *VAR_49 = *VAR_45;

 VAR_50->filter = VAR_41;
 VAR_50->enable = VAR_29;

 VAR_49->alignment_shift = 1;
 VAR_49->capabilities |= VAR_12;





 VAR_49->flags |= VAR_17;




 VAR_49->flags |= VAR_22;


 VAR_49->flags |= VAR_20;


 VAR_49->flags |= VAR_23;

 VAR_55 = FUNC_18(VAR_51);
 if (VAR_55)
  goto efree;

 VAR_58 = FUNC_20(VAR_51, VAR_0);

 if (VAR_58 < VAR_15 && VAR_49->max_blk_count > VAR_25)
  VAR_49->max_blk_count = VAR_25;


 if (VAR_58 == VAR_16)
  VAR_49->flags &= ~VAR_19;

 VAR_55 = FUNC_24(VAR_51);
 if (VAR_55 < 0)
  goto edisclk;


 if (VAR_47 && VAR_47->scc_offset &&
     (VAR_51->mmc->caps & VAR_13 ||
      VAR_51->mmc->caps2 & (VAR_6 |
     VAR_8))) {
  const struct renesas_sdhi_scc *VAR_59 = VAR_47->taps;
  bool VAR_60 = 0;

  for (VAR_56 = 0; VAR_56 < VAR_47->taps_num; VAR_56++) {
   if (VAR_59[VAR_56].clk_rate == 0 ||
       VAR_59[VAR_56].clk_rate == VAR_51->mmc->f_max) {
    VAR_52->scc_tappos = VAR_59->tap;
    VAR_52->scc_tappos_hs400 = VAR_59->tap_hs400;
    VAR_60 = 1;
    break;
   }
  }

  if (!VAR_60)
   FUNC_5(&VAR_51->pdev->dev, "Unknown clock rate for SDR104\n");

  VAR_51->init_tuning = VAR_32;
  VAR_51->prepare_tuning = VAR_35;
  VAR_51->select_tuning = VAR_36;
  VAR_51->check_scc_error = VAR_27;
  VAR_51->prepare_hs400_tuning =
   VAR_34;
  VAR_51->hs400_downgrade = VAR_28;
  VAR_51->hs400_complete = VAR_30;
 }

 VAR_53 = FUNC_16(VAR_43);
 if (VAR_53 < 0) {
  VAR_55 = VAR_53;
  goto eirq;
 }


 if (!VAR_53) {
  VAR_55 = -VAR_3;
  goto eirq;
 }

 for (VAR_56 = 0; VAR_56 < VAR_53; VAR_56++) {
  VAR_54 = FUNC_14(VAR_43, VAR_56);
  if (VAR_54 < 0) {
   VAR_55 = VAR_54;
   goto eirq;
  }

  VAR_55 = FUNC_9(&VAR_43->dev, VAR_54, VAR_42, 0,
           FUNC_4(&VAR_43->dev), VAR_51);
  if (VAR_55)
   goto eirq;
 }

 FUNC_3(&VAR_43->dev, "%s base at 0x%08lx max clock rate %u MHz\n",
   FUNC_11(VAR_51->mmc), (unsigned long)
   (FUNC_15(VAR_43, VAR_5, 0)->start),
   VAR_51->mmc->f_max / 1000000);

 return VAR_55;

eirq:
 FUNC_25(VAR_51);
edisclk:
 FUNC_17(VAR_51);
efree:
 FUNC_23(VAR_51);

 return VAR_55;
}
