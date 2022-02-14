
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_device {int dev; int handle; } ;
typedef int int16_t ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_3, u32 VAR_4)
{
 if (VAR_4 == 0x81) {
  int16_t VAR_5, VAR_6, VAR_7;
  acpi_status VAR_8;

  VAR_8 = FUNC_1(VAR_3->handle, &VAR_5, &VAR_6, &VAR_7);
  if (FUNC_0(VAR_8)) {
   struct input_dev *VAR_9 = FUNC_2(&VAR_3->dev);

   FUNC_3(VAR_9, VAR_0, VAR_5);
   FUNC_3(VAR_9, VAR_1, VAR_6);
   FUNC_3(VAR_9, VAR_2, VAR_7);
   FUNC_4(VAR_9);
  }
 }
}
