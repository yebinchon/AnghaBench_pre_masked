
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tx2_uncore_pmu {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int present; } ;
struct acpi_device {TYPE_1__ status; } ;
typedef enum tx2_uncore_type { ____Placeholder_tx2_uncore_type } tx2_uncore_type ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 scalar_t__ FUNC_3 (struct tx2_uncore_pmu*) ;
 struct tx2_uncore_pmu* FUNC_4 (struct device*,int ,struct acpi_device*,int) ;

__attribute__((used)) static acpi_status FUNC_5(acpi_handle VAR_3, u32 VAR_4,
        void *VAR_5, void **VAR_6)
{
 struct tx2_uncore_pmu *VAR_7;
 struct acpi_device *VAR_8;
 enum tx2_uncore_type VAR_9;

 if (FUNC_0(VAR_3, &VAR_8))
  return VAR_1;
 if (FUNC_1(VAR_8) || !VAR_8->status.present)
  return VAR_1;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 == VAR_2)
  return VAR_1;

 VAR_7 = FUNC_4((struct device *)VAR_5,
   VAR_3, VAR_8, VAR_9);

 if (!VAR_7)
  return VAR_0;

 if (FUNC_3(VAR_7)) {

  return VAR_0;
 }
 return VAR_1;
}
