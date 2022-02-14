
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct TYPE_4__ {struct pic32_sdhci_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pic32_sdhci_priv {struct sdhci_host* sys_clk; struct sdhci_host* base_clk; } ;
struct pic32_sdhci_platform_data {int (* setup_dma ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 void* FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct platform_device*,struct pic32_sdhci_priv*) ;
 int FUNC_9 (struct sdhci_host*) ;
 int VAR_2 ;
 int FUNC_10 (struct platform_device*) ;
 struct sdhci_host* FUNC_11 (struct platform_device*,int *,int) ;
 struct pic32_sdhci_priv* FUNC_12 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_13 (struct sdhci_host*) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct sdhci_host *VAR_4;
 struct sdhci_pltfm_host *VAR_5;
 struct pic32_sdhci_priv *VAR_6;
 struct pic32_sdhci_platform_data *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_11(VAR_3, &VAR_2,
    sizeof(struct pic32_sdhci_priv));
 if (FUNC_0(VAR_4)) {
  VAR_8 = FUNC_1(VAR_4);
  goto err;
 }

 VAR_5 = FUNC_13(VAR_4);
 VAR_6 = FUNC_12(VAR_5);

 VAR_7 = VAR_3->dev.platform_data;
 if (VAR_7 && VAR_7->setup_dma) {
  VAR_8 = VAR_7->setup_dma(VAR_0,
        VAR_1);
  if (VAR_8)
   goto err_host;
 }

 VAR_6->sys_clk = FUNC_6(&VAR_3->dev, "sys_clk");
 if (FUNC_0(VAR_6->sys_clk)) {
  VAR_8 = FUNC_1(VAR_6->sys_clk);
  FUNC_4(&VAR_3->dev, "Error getting clock\n");
  goto err_host;
 }

 VAR_8 = FUNC_3(VAR_6->sys_clk);
 if (VAR_8) {
  FUNC_4(&VAR_3->dev, "Error enabling clock\n");
  goto err_host;
 }

 VAR_6->base_clk = FUNC_6(&VAR_3->dev, "base_clk");
 if (FUNC_0(VAR_6->base_clk)) {
  VAR_8 = FUNC_1(VAR_6->base_clk);
  FUNC_4(&VAR_3->dev, "Error getting clock\n");
  goto err_sys_clk;
 }

 VAR_8 = FUNC_3(VAR_6->base_clk);
 if (VAR_8) {
  FUNC_4(&VAR_3->dev, "Error enabling clock\n");
  goto err_base_clk;
 }

 VAR_8 = FUNC_7(VAR_4->mmc);
 if (VAR_8)
  goto err_base_clk;

 VAR_8 = FUNC_8(VAR_3, VAR_6);
 if (VAR_8) {
  FUNC_4(&VAR_3->dev, "failed to probe platform!\n");
  goto err_base_clk;
 }

 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8)
  goto err_base_clk;

 FUNC_5(&VAR_3->dev, "Successfully added sdhci host\n");
 return 0;

err_base_clk:
 FUNC_2(VAR_6->base_clk);
err_sys_clk:
 FUNC_2(VAR_6->sys_clk);
err_host:
 FUNC_10(VAR_3);
err:
 FUNC_4(&VAR_3->dev, "pic32-sdhci probe failed: %d\n", VAR_8);
 return VAR_8;
}
