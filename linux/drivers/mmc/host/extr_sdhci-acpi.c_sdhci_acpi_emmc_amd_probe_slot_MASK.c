
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int set_ios; int select_drive_strength; } ;
struct sdhci_host {int caps1; TYPE_2__ mmc_host_ops; TYPE_1__* mmc; } ;
struct sdhci_acpi_host {struct sdhci_host* host; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {int caps; int caps2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sdhci_acpi_host* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_6,
       const char *VAR_7, const char *VAR_8)
{
 struct sdhci_acpi_host *VAR_9 = FUNC_0(VAR_6);
 struct sdhci_host *VAR_10 = VAR_9->host;

 FUNC_1(VAR_10);
 if (VAR_10->caps1 & VAR_2)
  VAR_10->mmc->caps = VAR_1;

 if ((VAR_10->caps1 & VAR_3) &&
     (VAR_10->mmc->caps & VAR_1))
  VAR_10->mmc->caps2 = VAR_0;

 VAR_10->mmc_host_ops.select_drive_strength = VAR_4;
 VAR_10->mmc_host_ops.set_ios = VAR_5;
 return 0;
}
