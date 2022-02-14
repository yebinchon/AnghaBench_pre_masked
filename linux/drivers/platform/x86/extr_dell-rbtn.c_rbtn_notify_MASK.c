
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rbtn_data {int type; scalar_t__ suspended; } ;
struct acpi_device {int dev; struct rbtn_data* driver_data; } ;




 int FUNC_0 (int *,int,struct acpi_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct rbtn_data*) ;
 int FUNC_4 (struct acpi_device*) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_1, u32 VAR_2)
{
 struct rbtn_data *VAR_3 = VAR_1->driver_data;





 if (VAR_3->suspended) {
  FUNC_1(&VAR_1->dev, "ACPI notification ignored\n");
  return;
 }

 if (VAR_2 != 0x80) {
  FUNC_2(&VAR_1->dev, "Received unknown event (0x%x)\n",
    VAR_2);
  return;
 }

 switch (VAR_3->type) {
 case 128:
  FUNC_3(VAR_3);
  break;
 case 129:
  FUNC_4(VAR_1);
  FUNC_0(&VAR_0, VAR_2, VAR_1);
  break;
 default:
  break;
 }
}
