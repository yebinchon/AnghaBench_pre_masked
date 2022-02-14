
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
struct sdhci_acpi_host {struct sdhci_host* host; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 char* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int,struct sdhci_host*) ;
 struct sdhci_acpi_host* FUNC_3 (struct platform_device*) ;
 int* FUNC_4 (struct sdhci_acpi_host*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct sdhci_acpi_host *VAR_3 = FUNC_3(VAR_1);
 struct sdhci_host *VAR_4 = VAR_3->host;
 struct acpi_device *VAR_5;
 int *VAR_6 = FUNC_4(VAR_3);
 const char *VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_5(VAR_7, "QCOM8051"))
  return 0;

 if (*VAR_6 < 0)
  return 0;

 FUNC_2(*VAR_6, VAR_4);
 return 0;
}
