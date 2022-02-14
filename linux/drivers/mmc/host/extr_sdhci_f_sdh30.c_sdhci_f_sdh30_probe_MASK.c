
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int quirks; int quirks2; char* hw_name; int irq; struct sdhci_host* ioaddr; int * ops; int mmc; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct f_sdhost_priv {struct sdhci_host* clk_iface; struct sdhci_host* clk; int vendor_hs200; int enable_cmd_dat_delay; struct device* dev; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,char*) ;
 struct sdhci_host* FUNC_7 (struct device*,struct resource*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct sdhci_host*) ;
 int FUNC_13 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_14 (struct device*,int) ;
 int VAR_17 ;
 int FUNC_15 (struct sdhci_host*) ;
 int FUNC_16 (struct platform_device*) ;
 struct f_sdhost_priv* FUNC_17 (struct sdhci_host*) ;
 int FUNC_18 (struct sdhci_host*,int ) ;
 int FUNC_19 (struct sdhci_host*,int ) ;
 int FUNC_20 (struct sdhci_host*,int,int ) ;
 int FUNC_21 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_18)
{
 struct sdhci_host *VAR_19;
 struct device *VAR_20 = &VAR_18->dev;
 struct resource *VAR_21;
 int VAR_22, VAR_23 = 0, VAR_24 = 0;
 struct f_sdhost_priv *VAR_25;
 u32 VAR_26 = 0;

 VAR_22 = FUNC_10(VAR_18, 0);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_19 = FUNC_14(VAR_20, sizeof(struct f_sdhost_priv));
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);

 VAR_25 = FUNC_17(VAR_19);
 VAR_25->dev = VAR_20;

 VAR_19->quirks = VAR_16 |
         VAR_15;
 VAR_19->quirks2 = VAR_13 |
   VAR_14;

 VAR_25->enable_cmd_dat_delay = FUNC_5(VAR_20,
      "fujitsu,cmd-dat-delay-select");

 VAR_24 = FUNC_8(VAR_19->mmc);
 if (VAR_24)
  goto err;

 FUNC_12(VAR_18, VAR_19);

 VAR_19->hw_name = "f_sdh30";
 VAR_19->ops = &VAR_17;
 VAR_19->irq = VAR_22;

 VAR_21 = FUNC_11(VAR_18, VAR_10, 0);
 VAR_19->ioaddr = FUNC_7(&VAR_18->dev, VAR_21);
 if (FUNC_0(VAR_19->ioaddr)) {
  VAR_24 = FUNC_1(VAR_19->ioaddr);
  goto err;
 }

 if (FUNC_4(VAR_20)) {
  FUNC_16(VAR_18);

  VAR_25->clk_iface = FUNC_6(&VAR_18->dev, "iface");
  if (FUNC_0(VAR_25->clk_iface)) {
   VAR_24 = FUNC_1(VAR_25->clk_iface);
   goto err;
  }

  VAR_24 = FUNC_3(VAR_25->clk_iface);
  if (VAR_24)
   goto err;

  VAR_25->clk = FUNC_6(&VAR_18->dev, "core");
  if (FUNC_0(VAR_25->clk)) {
   VAR_24 = FUNC_1(VAR_25->clk);
   goto err_clk;
  }

  VAR_24 = FUNC_3(VAR_25->clk);
  if (VAR_24)
   goto err_clk;
 }


 VAR_23 = FUNC_19(VAR_19, VAR_1);
 VAR_23 |= VAR_9 | VAR_2 | VAR_4 |
  VAR_3;
 VAR_23 &= ~(VAR_0 | VAR_5);
 FUNC_21(VAR_19, VAR_23, VAR_1);

 VAR_26 = FUNC_18(VAR_19, VAR_8);
 FUNC_20(VAR_19, VAR_26 & ~VAR_7, VAR_8);
 FUNC_9(20);
 FUNC_20(VAR_19, VAR_26 | VAR_7, VAR_8);

 VAR_26 = FUNC_18(VAR_19, VAR_12);
 if (VAR_26 & VAR_11)
  VAR_25->vendor_hs200 = VAR_6;

 VAR_24 = FUNC_13(VAR_19);
 if (VAR_24)
  goto err_add_host;

 return 0;

err_add_host:
 FUNC_2(VAR_25->clk);
err_clk:
 FUNC_2(VAR_25->clk_iface);
err:
 FUNC_15(VAR_19);
 return VAR_24;
}
