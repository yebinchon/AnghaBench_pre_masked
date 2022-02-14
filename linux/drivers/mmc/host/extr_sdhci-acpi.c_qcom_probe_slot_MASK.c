
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
struct sdhci_acpi_host {struct sdhci_host* host; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sdhci_acpi_host* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*,int) ;
 int FUNC_2 (int,int *,int ,int,char*,struct sdhci_host*) ;
 int* FUNC_3 (struct sdhci_acpi_host*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4, const char *VAR_5,
      const char *VAR_6)
{
 struct sdhci_acpi_host *VAR_7 = FUNC_0(VAR_4);
 struct sdhci_host *VAR_8 = VAR_7->host;
 int *VAR_9 = FUNC_3(VAR_7);

 *VAR_9 = -VAR_0;

 if (FUNC_4(VAR_5, "QCOM8051"))
  return 0;

 *VAR_9 = FUNC_1(VAR_4, 1);
 if (*VAR_9 < 0)
  return 0;

 return FUNC_2(*VAR_9, ((void*)0), VAR_3,
        VAR_1 | VAR_2,
        "sdhci_qcom", VAR_8);
}
