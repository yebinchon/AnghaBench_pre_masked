
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct surface_button {scalar_t__ suspended; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
struct acpi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct surface_button* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct input_dev*,int,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct acpi_device *VAR_5, u32 VAR_6)
{
 struct surface_button *VAR_7 = FUNC_0(VAR_5);
 struct input_dev *VAR_8;
 int VAR_9 = VAR_2;
 bool VAR_10 = 0;

 switch (VAR_6) {

 case 135:
  VAR_10 = 1;

 case 131:
  VAR_9 = VAR_1;
  break;

 case 136:
  VAR_10 = 1;

 case 132:
  VAR_9 = VAR_0;
  break;

 case 133:
  VAR_10 = 1;

 case 129:
  VAR_9 = VAR_4;
  break;

 case 134:
  VAR_10 = 1;

 case 130:
  VAR_9 = VAR_3;
  break;
 case 128:
  FUNC_2(&VAR_5->dev, "Tablet mode is not supported\n");
  break;
 default:
  FUNC_1(&VAR_5->dev,
         "Unsupported event [0x%x]\n", VAR_6);
  break;
 }
 VAR_8 = VAR_7->input;
 if (VAR_9 == VAR_2)
  return;
 if (VAR_10)
  FUNC_5(&VAR_5->dev, 0, VAR_7->suspended);
 if (VAR_7->suspended)
  return;
 FUNC_3(VAR_8, VAR_9, VAR_10?1:0);
 FUNC_4(VAR_8);
}
