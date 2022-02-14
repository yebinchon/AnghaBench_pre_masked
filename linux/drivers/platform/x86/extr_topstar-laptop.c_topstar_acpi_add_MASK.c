
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topstar_laptop {struct acpi_device* device; } ;
struct acpi_device {struct topstar_laptop* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct topstar_laptop*) ;
 struct topstar_laptop* FUNC_4 (int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct topstar_laptop*) ;
 int FUNC_7 (struct topstar_laptop*) ;
 int VAR_4 ;
 int FUNC_8 (struct topstar_laptop*) ;
 int FUNC_9 (struct topstar_laptop*) ;
 int FUNC_10 (struct topstar_laptop*) ;
 int FUNC_11 (struct topstar_laptop*) ;
 int FUNC_12 (struct topstar_laptop*) ;

__attribute__((used)) static int FUNC_13(struct acpi_device *VAR_5)
{
 struct topstar_laptop *VAR_6;
 int VAR_7;

 FUNC_2(VAR_4);

 VAR_6 = FUNC_4(sizeof(struct topstar_laptop), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_5(FUNC_1(VAR_5), "Topstar TPSACPI");
 FUNC_5(FUNC_0(VAR_5), VAR_2);
 VAR_5->driver_data = VAR_6;
 VAR_6->device = VAR_5;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto err_free;

 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7)
  goto err_acpi_exit;

 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7)
  goto err_platform_exit;

 if (VAR_3) {
  VAR_7 = FUNC_10(VAR_6);
  if (VAR_7)
   goto err_input_exit;
 }

 return 0;

err_input_exit:
 FUNC_8(VAR_6);
err_platform_exit:
 FUNC_11(VAR_6);
err_acpi_exit:
 FUNC_6(VAR_6);
err_free:
 FUNC_3(VAR_6);
 return VAR_7;
}
