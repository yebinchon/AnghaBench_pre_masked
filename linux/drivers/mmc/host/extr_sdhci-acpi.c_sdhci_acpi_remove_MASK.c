
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_acpi_host {int host; TYPE_1__* slot; scalar_t__ use_runtime_pm; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int (* free_slot ) (struct platform_device*) ;int (* remove_slot ) (struct platform_device*) ;} ;


 int VAR_0 ;
 struct sdhci_acpi_host* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct sdhci_acpi_host *VAR_2 = FUNC_0(VAR_1);
 struct device *VAR_3 = &VAR_1->dev;
 int VAR_4;

 if (VAR_2->use_runtime_pm) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
 }

 if (VAR_2->slot && VAR_2->slot->remove_slot)
  VAR_2->slot->remove_slot(VAR_1);

 VAR_4 = (FUNC_5(VAR_2->host, VAR_0) == ~0);
 FUNC_6(VAR_2->host, VAR_4);

 if (VAR_2->slot && VAR_2->slot->free_slot)
  VAR_2->slot->free_slot(VAR_1);

 FUNC_4(VAR_2->host);

 return 0;
}
