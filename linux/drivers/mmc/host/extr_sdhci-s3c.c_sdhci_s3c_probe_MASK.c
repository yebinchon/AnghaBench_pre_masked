
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_s3c_drv_data {int sdhci_quirks; scalar_t__ no_divider; } ;
struct sdhci_s3c {int ext_cd_gpio; int cur_clk; struct sdhci_host* clk_io; scalar_t__ no_divider; int * clk_rates; struct sdhci_host** clk_bus; struct s3c_sdhci_platdata* pdata; struct platform_device* pdev; struct sdhci_host* host; } ;
struct sdhci_host {char* hw_name; int quirks; int irq; TYPE_2__* mmc; scalar_t__ quirks2; TYPE_1__* ops; struct sdhci_host* ioaddr; } ;
struct s3c_sdhci_platdata {int max_width; scalar_t__ cd_type; int pm_caps; int host_caps; int host_caps2; int (* cfg_gpio ) (struct platform_device*,int) ;} ;
struct resource {int dummy; } ;
struct device {int platform_data; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int caps; int pm_caps; int caps2; } ;
struct TYPE_3__ {int get_max_clock; int get_min_clock; int set_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sdhci_host*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,int,char*,int ) ;
 void* FUNC_7 (struct device*,char*) ;
 struct sdhci_host* FUNC_8 (struct device*,struct resource*) ;
 struct s3c_sdhci_platdata* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct s3c_sdhci_platdata*,int ,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct sdhci_host*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*,int) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*,int) ;
 int FUNC_20 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_21 (struct device*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_22 (struct sdhci_host*) ;
 struct sdhci_s3c* FUNC_23 (struct sdhci_host*) ;
 struct sdhci_s3c_drv_data* FUNC_24 (struct platform_device*) ;
 TYPE_1__ VAR_24 ;
 int FUNC_25 (struct device*,struct sdhci_host*,struct s3c_sdhci_platdata*) ;
 int FUNC_26 (char*,int,char*,int) ;
 int FUNC_27 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_25)
{
 struct s3c_sdhci_platdata *VAR_26;
 struct sdhci_s3c_drv_data *VAR_27;
 struct device *VAR_28 = &VAR_25->dev;
 struct sdhci_host *VAR_29;
 struct sdhci_s3c *VAR_30;
 struct resource *VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35;

 if (!VAR_25->dev.platform_data && !VAR_25->dev.of_node) {
  FUNC_5(VAR_28, "no device data specified\n");
  return -VAR_0;
 }

 VAR_33 = FUNC_12(VAR_25, 0);
 if (VAR_33 < 0)
  return VAR_33;

 VAR_29 = FUNC_21(VAR_28, sizeof(struct sdhci_s3c));
 if (FUNC_0(VAR_29)) {
  FUNC_5(VAR_28, "sdhci_alloc_host() failed\n");
  return FUNC_1(VAR_29);
 }
 VAR_30 = FUNC_23(VAR_29);

 VAR_26 = FUNC_9(&VAR_25->dev, sizeof(*VAR_26), VAR_2);
 if (!VAR_26) {
  VAR_32 = -VAR_1;
  goto err_pdata_io_clk;
 }

 if (VAR_25->dev.of_node) {
  VAR_32 = FUNC_25(&VAR_25->dev, VAR_29, VAR_26);
  if (VAR_32)
   goto err_pdata_io_clk;
 } else {
  FUNC_10(VAR_26, VAR_25->dev.platform_data, sizeof(*VAR_26));
  VAR_30->ext_cd_gpio = -1;
 }

 VAR_27 = FUNC_24(VAR_25);

 VAR_30->host = VAR_29;
 VAR_30->pdev = VAR_25;
 VAR_30->pdata = VAR_26;
 VAR_30->cur_clk = -1;

 FUNC_14(VAR_25, VAR_29);

 VAR_30->clk_io = FUNC_7(VAR_28, "hsmmc");
 if (FUNC_0(VAR_30->clk_io)) {
  FUNC_5(VAR_28, "failed to get io clock\n");
  VAR_32 = FUNC_1(VAR_30->clk_io);
  goto err_pdata_io_clk;
 }


 FUNC_4(VAR_30->clk_io);

 for (VAR_35 = 0, VAR_34 = 0; VAR_34 < VAR_4; VAR_34++) {
  char VAR_36[14];

  FUNC_26(VAR_36, 14, "mmc_busclk.%d", VAR_34);
  VAR_30->clk_bus[VAR_34] = FUNC_7(VAR_28, VAR_36);
  if (FUNC_0(VAR_30->clk_bus[VAR_34]))
   continue;

  VAR_35++;
  VAR_30->clk_rates[VAR_34] = FUNC_3(VAR_30->clk_bus[VAR_34]);

  FUNC_6(VAR_28, "clock source %d: %s (%ld Hz)\n",
    VAR_34, VAR_36, VAR_30->clk_rates[VAR_34]);
 }

 if (VAR_35 == 0) {
  FUNC_5(VAR_28, "failed to find any bus clocks\n");
  VAR_32 = -VAR_0;
  goto err_no_busclks;
 }

 VAR_31 = FUNC_13(VAR_25, VAR_3, 0);
 VAR_29->ioaddr = FUNC_8(&VAR_25->dev, VAR_31);
 if (FUNC_0(VAR_29->ioaddr)) {
  VAR_32 = FUNC_1(VAR_29->ioaddr);
  goto err_req_regs;
 }


 if (VAR_26->cfg_gpio)
  VAR_26->cfg_gpio(VAR_25, VAR_26->max_width);

 VAR_29->hw_name = "samsung-hsmmc";
 VAR_29->ops = &VAR_24;
 VAR_29->quirks = 0;
 VAR_29->quirks2 = 0;
 VAR_29->irq = VAR_33;


 VAR_29->quirks |= VAR_19;
 VAR_29->quirks |= VAR_20;
 if (VAR_27) {
  VAR_29->quirks |= VAR_27->sdhci_quirks;
  VAR_30->no_divider = VAR_27->no_divider;
 }





 VAR_29->quirks |= VAR_15;






 VAR_29->quirks |= VAR_18;


 VAR_29->quirks |= VAR_17;


 VAR_29->quirks |= VAR_13;

 if (VAR_26->cd_type == VAR_9 ||
     VAR_26->cd_type == VAR_10)
  VAR_29->quirks |= VAR_14;

 if (VAR_26->cd_type == VAR_10)
  VAR_29->mmc->caps = VAR_7;

 switch (VAR_26->max_width) {
 case 8:
  VAR_29->mmc->caps |= VAR_6;

 case 4:
  VAR_29->mmc->caps |= VAR_5;
  break;
 }

 if (VAR_26->pm_caps)
  VAR_29->mmc->pm_caps |= VAR_26->pm_caps;

 VAR_29->quirks |= (VAR_11 |
    VAR_12);


 VAR_29->quirks |= VAR_16;





 if (VAR_30->no_divider) {
  VAR_24.set_clock = VAR_23;
  VAR_24.get_min_clock = VAR_22;
  VAR_24.get_max_clock = VAR_21;
 }


 if (VAR_26->host_caps)
  VAR_29->mmc->caps |= VAR_26->host_caps;

 if (VAR_26->host_caps2)
  VAR_29->mmc->caps2 |= VAR_26->host_caps2;

 FUNC_16(&VAR_25->dev);
 FUNC_17(&VAR_25->dev, 50);
 FUNC_18(&VAR_25->dev);
 FUNC_19(&VAR_25->dev, 1);

 VAR_32 = FUNC_11(VAR_29->mmc);
 if (VAR_32)
  goto err_req_regs;

 VAR_32 = FUNC_20(VAR_29);
 if (VAR_32)
  goto err_req_regs;





 return 0;

 err_req_regs:
 FUNC_15(&VAR_25->dev);

 err_no_busclks:
 FUNC_2(VAR_30->clk_io);

 err_pdata_io_clk:
 FUNC_22(VAR_29);

 return VAR_32;
}
