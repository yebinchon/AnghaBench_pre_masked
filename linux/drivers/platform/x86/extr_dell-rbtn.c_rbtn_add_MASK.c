
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbtn_data {int type; } ;
struct acpi_device {struct rbtn_data* driver_data; int dev; } ;
typedef enum rbtn_type { ____Placeholder_rbtn_type } rbtn_type ;
struct TYPE_2__ {int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct rbtn_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct acpi_device*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct rbtn_data*) ;
 int FUNC_6 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_6)
{
 struct rbtn_data *VAR_7;
 enum rbtn_type VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 == VAR_3) {
  FUNC_1(&VAR_6->dev, "Unknown device type\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_6, 1);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "Cannot enable device\n");
  return VAR_9;
 }

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->type = VAR_8;
 VAR_6->driver_data = VAR_7;

 switch (VAR_7->type) {
 case 128:
  VAR_9 = FUNC_5(VAR_7);
  break;
 case 129:
  if (VAR_4 && VAR_5.head)
   VAR_9 = 0;
  else
   VAR_9 = FUNC_6(VAR_6);
  break;
 default:
  VAR_9 = -VAR_0;
 }

 return VAR_9;

}
