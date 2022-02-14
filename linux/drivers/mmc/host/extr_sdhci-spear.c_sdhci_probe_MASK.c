
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_sdhci {struct sdhci_host* clk; } ;
struct sdhci_host {char* hw_name; scalar_t__ irq; int mmc; int quirks; int * ops; struct sdhci_host* ioaddr; } ;
struct resource {int dummy; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_3 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,int) ;
 struct sdhci_host* FUNC_8 (struct device*,int *) ;
 struct sdhci_host* FUNC_9 (struct device*,struct resource*) ;
 int FUNC_10 (int ,char*,int ,int,int ,int *) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct sdhci_host*) ;
 int FUNC_14 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_15 (struct device*,int) ;
 int FUNC_16 (struct sdhci_host*) ;
 int VAR_4 ;
 struct spear_sdhci* FUNC_17 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_5)
{
 struct sdhci_host *VAR_6;
 struct resource *VAR_7;
 struct spear_sdhci *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 VAR_9 = VAR_5->dev.parent ? VAR_5->dev.parent : &VAR_5->dev;
 VAR_6 = FUNC_15(VAR_9, sizeof(*VAR_8));
 if (FUNC_0(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  FUNC_6(&VAR_5->dev, "cannot allocate memory for sdhci\n");
  goto err;
 }

 VAR_7 = FUNC_12(VAR_5, VAR_2, 0);
 VAR_6->ioaddr = FUNC_9(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->ioaddr)) {
  VAR_10 = FUNC_1(VAR_6->ioaddr);
  FUNC_6(&VAR_5->dev, "unable to map iomem: %d\n", VAR_10);
  goto err_host;
 }

 VAR_6->hw_name = "sdhci";
 VAR_6->ops = &VAR_4;
 VAR_6->irq = FUNC_11(VAR_5, 0);
 if (VAR_6->irq <= 0) {
  VAR_10 = -VAR_0;
  goto err_host;
 }
 VAR_6->quirks = VAR_3;

 VAR_8 = FUNC_17(VAR_6);


 VAR_8->clk = FUNC_8(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  VAR_10 = FUNC_1(VAR_8->clk);
  FUNC_6(&VAR_5->dev, "Error getting clock\n");
  goto err_host;
 }

 VAR_10 = FUNC_4(VAR_8->clk);
 if (VAR_10) {
  FUNC_6(&VAR_5->dev, "Error enabling clock\n");
  goto err_host;
 }

 VAR_10 = FUNC_5(VAR_8->clk, 50000000);
 if (VAR_10)
  FUNC_6(&VAR_5->dev, "Error setting desired clk, clk=%lu\n",
    FUNC_3(VAR_8->clk));





 VAR_10 = FUNC_10(VAR_6->mmc, "cd", 0, 0, 0, ((void*)0));
 if (VAR_10 == -VAR_1)
  goto disable_clk;

 VAR_10 = FUNC_14(VAR_6);
 if (VAR_10)
  goto disable_clk;

 FUNC_13(VAR_5, VAR_6);

 return 0;

disable_clk:
 FUNC_2(VAR_8->clk);
err_host:
 FUNC_16(VAR_6);
err:
 FUNC_7(&VAR_5->dev, "spear-sdhci probe failed: %d\n", VAR_10);
 return VAR_10;
}
