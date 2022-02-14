
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_acpi_host {TYPE_2__* host; } ;
struct platform_device {int dummy; } ;
struct intel_host {int hs_caps; } ;
struct TYPE_4__ {TYPE_1__* mmc; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sdhci_acpi_host* FUNC_0 (struct platform_device*) ;
 struct intel_host* FUNC_1 (struct sdhci_acpi_host*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_8)
{
 struct sdhci_acpi_host *VAR_9 = FUNC_0(VAR_8);
 struct intel_host *VAR_10 = FUNC_1(VAR_9);

 if (!(VAR_10->hs_caps & VAR_2))
  VAR_9->host->mmc->caps &= ~VAR_6;

 if (!(VAR_10->hs_caps & VAR_3))
  VAR_9->host->mmc->caps &= ~VAR_7;

 if (!(VAR_10->hs_caps & VAR_0))
  VAR_9->host->mmc->caps &= ~VAR_4;

 if (!(VAR_10->hs_caps & VAR_1))
  VAR_9->host->mmc->caps &= ~VAR_5;

 return 0;
}
