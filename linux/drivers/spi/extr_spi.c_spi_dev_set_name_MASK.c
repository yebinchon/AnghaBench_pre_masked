
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int chip_select; TYPE_1__* controller; int dev; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,...) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1) {
  FUNC_3(&VAR_0->dev, "spi-%s", FUNC_1(VAR_1));
  return;
 }

 FUNC_3(&VAR_0->dev, "%s.%u", FUNC_2(&VAR_0->controller->dev),
       VAR_0->chip_select);
}
