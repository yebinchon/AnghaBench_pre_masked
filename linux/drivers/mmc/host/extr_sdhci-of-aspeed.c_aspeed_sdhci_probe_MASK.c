
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int mmc; } ;
struct resource {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct aspeed_sdhci {int width_mask; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct aspeed_sdhci*,struct resource*) ;
 int VAR_4 ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 struct sdhci_host* FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct sdhci_host*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct platform_device*) ;
 struct sdhci_host* FUNC_14 (struct platform_device*,int *,int) ;
 struct aspeed_sdhci* FUNC_15 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_16 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_5)
{
 struct sdhci_pltfm_host *VAR_6;
 struct aspeed_sdhci *VAR_7;
 struct sdhci_host *VAR_8;
 struct resource *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_14(VAR_5, &VAR_4, sizeof(*VAR_7));
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_6 = FUNC_16(VAR_8);
 VAR_7 = FUNC_15(VAR_6);
 VAR_7->parent = FUNC_6(VAR_5->dev.parent);

 VAR_9 = FUNC_10(VAR_5, VAR_3, 0);
 VAR_10 = FUNC_2(VAR_7, VAR_9);

 if (VAR_10 < 0)
  return VAR_10;
 else if (VAR_10 >= 2)
  return -VAR_2;

 FUNC_7(&VAR_5->dev, "Configuring for slot %d\n", VAR_10);
 VAR_7->width_mask = !VAR_10 ? VAR_0 : VAR_1;

 FUNC_12(VAR_5);

 VAR_6->clk = FUNC_8(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_11 = FUNC_4(VAR_6->clk);
 if (VAR_11) {
  FUNC_5(&VAR_5->dev, "Unable to enable SDIO clock\n");
  goto err_pltfm_free;
 }

 VAR_11 = FUNC_9(VAR_8->mmc);
 if (VAR_11)
  goto err_sdhci_add;

 VAR_11 = FUNC_11(VAR_8);
 if (VAR_11)
  goto err_sdhci_add;

 return 0;

err_sdhci_add:
 FUNC_3(VAR_6->clk);
err_pltfm_free:
 FUNC_13(VAR_5);
 return VAR_11;
}
