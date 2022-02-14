
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_device {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;
 struct input_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct acpi_device *VAR_2, u32 VAR_3)
{
 struct input_dev *VAR_4;
 int VAR_5 = VAR_0;

 if ((VAR_3 & 0x0F) < FUNC_0(VAR_1))
  VAR_5 = VAR_1[VAR_3 & 0x0F];
 VAR_4 = FUNC_1(&VAR_2->dev);
 FUNC_2(VAR_4, VAR_5, !(VAR_3 & 0x10));
 FUNC_3(VAR_4);
}
