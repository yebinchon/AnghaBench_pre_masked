
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_id {scalar_t__ driver_data; } ;
struct platform_device {size_t id; int dev; } ;
struct intel_pinctrl_soc_data {int uid; } ;
struct TYPE_2__ {int unique_id; } ;
struct acpi_device {TYPE_1__ pnp; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*,struct intel_pinctrl_soc_data const*) ;
 struct platform_device_id* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct platform_device *VAR_1)
{
 const struct intel_pinctrl_soc_data *VAR_2 = ((void*)0);
 const struct intel_pinctrl_soc_data **VAR_3;
 struct acpi_device *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(&VAR_1->dev);
 if (VAR_4) {
  const void *VAR_6 = FUNC_1(&VAR_1->dev);

  VAR_3 = (const struct intel_pinctrl_soc_data **)VAR_6;
  for (VAR_5 = 0; VAR_3[VAR_5]; VAR_5++) {
   if (!FUNC_4(VAR_4->pnp.unique_id, VAR_3[VAR_5]->uid)) {
    VAR_2 = VAR_3[VAR_5];
    break;
   }
  }
 } else {
  const struct platform_device_id *VAR_7;

  VAR_7 = FUNC_3(VAR_1);
  if (!VAR_7)
   return -VAR_0;

  VAR_3 = (const struct intel_pinctrl_soc_data **)VAR_7->driver_data;
  VAR_2 = VAR_3[VAR_1->id];
 }

 return FUNC_2(VAR_1, VAR_2);
}
