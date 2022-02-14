
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_device {int handle; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long long*) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_1, u32 VAR_2)
{
 unsigned long long VAR_3 = 0;
 struct input_dev *VAR_4 = FUNC_2(&VAR_1->dev);

 if (VAR_2 == 0x81) {
  if (FUNC_0(FUNC_1(VAR_1->handle, &VAR_3))) {
   FUNC_3(VAR_4, VAR_0, !VAR_3);
   FUNC_4(VAR_4);
  }
 }
}
