
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pwm_lpss_chip {int dummy; } ;
struct pwm_lpss_boardinfo {int dummy; } ;
struct TYPE_8__ {TYPE_1__* driver; } ;
struct platform_device {TYPE_2__ dev; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_7__ {int acpi_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pwm_lpss_chip*) ;
 int FUNC_1 (struct pwm_lpss_chip*) ;
 struct acpi_device_id* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct pwm_lpss_chip*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct pwm_lpss_chip* FUNC_8 (TYPE_2__*,struct resource*,struct pwm_lpss_boardinfo const*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 const struct pwm_lpss_boardinfo *VAR_4;
 const struct acpi_device_id *VAR_5;
 struct pwm_lpss_chip *VAR_6;
 struct resource *VAR_7;

 VAR_5 = FUNC_2(VAR_3->dev.driver->acpi_match_table, &VAR_3->dev);
 if (!VAR_5)
  return -VAR_1;

 VAR_4 = (const struct pwm_lpss_boardinfo *)VAR_5->driver_data;
 VAR_7 = FUNC_4(VAR_3, VAR_2, 0);

 VAR_6 = FUNC_8(&VAR_3->dev, VAR_7, VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_5(VAR_3, VAR_6);

 FUNC_3(&VAR_3->dev, VAR_0);
 FUNC_7(&VAR_3->dev);
 FUNC_6(&VAR_3->dev);

 return 0;
}
