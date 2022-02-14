
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_signal_voltage_switch; int get_cd; } ;
struct sdhci_host {int timeout_clk; TYPE_1__ mmc_host_ops; int mmc; } ;
struct sdhci_acpi_host {struct sdhci_host* host; } ;
struct platform_device {int dev; } ;
struct intel_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_host*,int *,int ) ;
 int VAR_3 ;
 struct sdhci_acpi_host* FUNC_1 (struct platform_device*) ;
 struct intel_host* FUNC_2 (struct sdhci_acpi_host*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4, const char *VAR_5,
       const char *VAR_6)
{
 struct sdhci_acpi_host *VAR_7 = FUNC_1(VAR_4);
 struct intel_host *VAR_8 = FUNC_2(VAR_7);
 struct sdhci_host *VAR_9 = VAR_7->host;

 if (VAR_5 && VAR_6 && !FUNC_4(VAR_5, "80860F14") && !FUNC_4(VAR_6, "1") &&
     FUNC_3(VAR_9, VAR_0) == 0x446cc8b2 &&
     FUNC_3(VAR_9, VAR_1) == 0x00000807)
  VAR_9->timeout_clk = 1000;

 if (VAR_5 && !FUNC_4(VAR_5, "80865ACA"))
  VAR_9->mmc_host_ops.get_cd = VAR_2;

 FUNC_0(VAR_8, &VAR_4->dev, VAR_9->mmc);

 VAR_9->mmc_host_ops.start_signal_voltage_switch =
     VAR_3;

 return 0;
}
