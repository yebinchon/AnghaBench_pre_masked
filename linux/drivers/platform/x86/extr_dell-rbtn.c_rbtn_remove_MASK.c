
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtn_data {int type; } ;
struct acpi_device {struct rbtn_data* driver_data; } ;




 int FUNC_0 (struct acpi_device*,int) ;
 int FUNC_1 (struct rbtn_data*) ;
 int FUNC_2 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct rbtn_data *VAR_1 = VAR_0->driver_data;

 switch (VAR_1->type) {
 case 128:
  FUNC_1(VAR_1);
  break;
 case 129:
  FUNC_2(VAR_0);
  break;
 default:
  break;
 }

 FUNC_0(VAR_0, 0);
 VAR_0->driver_data = ((void*)0);

 return 0;
}
