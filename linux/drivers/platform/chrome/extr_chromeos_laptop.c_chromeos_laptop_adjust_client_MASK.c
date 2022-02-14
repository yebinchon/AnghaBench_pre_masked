
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct acpi_peripheral {int properties; int hid; } ;
struct acpi_device_id {int id; } ;
struct TYPE_2__ {int num_acpi_peripherals; struct acpi_peripheral* acpi_peripherals; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct acpi_device_id*,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct i2c_client *VAR_2)
{
 const struct acpi_peripheral *VAR_3;
 struct acpi_device_id VAR_4[2] = { };
 int VAR_5;
 int VAR_6;

 if (!FUNC_3(&VAR_2->dev))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_acpi_peripherals; VAR_5++) {
  VAR_3 = &VAR_1->acpi_peripherals[VAR_5];

  FUNC_4(VAR_4[0].id, VAR_3->hid, VAR_0);

  if (FUNC_0(VAR_4, &VAR_2->dev)) {
   VAR_6 = FUNC_2(&VAR_2->dev,
            VAR_3->properties);
   if (VAR_6) {
    FUNC_1(&VAR_2->dev,
     "failed to add properties: %d\n",
     VAR_6);
    break;
   }

   return 1;
  }
 }

 return 0;
}
