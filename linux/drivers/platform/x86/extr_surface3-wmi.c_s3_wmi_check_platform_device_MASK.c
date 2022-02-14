
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {struct acpi_device* touchscreen_adev; struct acpi_device* pnp0c0d_adev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (int ,int ,int,int ,int *,struct acpi_device**,int *) ;
 int FUNC_6 (struct device*,char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_5, void *VAR_6)
{
 struct acpi_device *VAR_7, *VAR_8 = ((void*)0);
 acpi_handle VAR_9;
 acpi_status VAR_10;


 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9 || FUNC_2(VAR_9, &VAR_7))
  return 0;


 if (!FUNC_7(VAR_0, FUNC_4(VAR_7))) {
  VAR_3.pnp0c0d_adev = VAR_7;
  return 0;
 }


 if (FUNC_9(FUNC_3(VAR_7), VAR_2,
     FUNC_8(VAR_2)))
  return 0;

 VAR_10 = FUNC_5(VAR_1, VAR_9, 1,
         VAR_4, ((void*)0),
         &VAR_8, ((void*)0));
 if (FUNC_0(VAR_10))
  FUNC_6(VAR_5, "failed to enumerate SPI slaves\n");

 if (!VAR_8)
  return 0;

 VAR_3.touchscreen_adev = VAR_8;

 return 0;
}
