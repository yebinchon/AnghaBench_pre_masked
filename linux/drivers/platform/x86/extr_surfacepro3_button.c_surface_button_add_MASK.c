
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct surface_button {int phys; struct input_dev* input; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; TYPE_2__ dev; TYPE_1__ id; int phys; } ;
struct acpi_device {int dev; struct surface_button* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct acpi_device*) ;
 char* FUNC_1 (struct acpi_device*) ;
 char* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 int FUNC_4 (int *,int) ;
 struct input_dev* FUNC_5 () ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int FUNC_9 (struct surface_button*) ;
 struct surface_button* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int,char*,char const*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_16(struct acpi_device *VAR_11)
{
 struct surface_button *VAR_12;
 struct input_dev *VAR_13;
 const char *VAR_14 = FUNC_1(VAR_11);
 char *VAR_15;
 int VAR_16;

 if (FUNC_14(FUNC_0(VAR_11), VAR_10,
     FUNC_13(VAR_10)))
  return -VAR_1;

 if (!FUNC_15(VAR_11))
  return -VAR_1;

 VAR_12 = FUNC_10(sizeof(struct surface_button), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_11->driver_data = VAR_12;
 VAR_12->input = VAR_13 = FUNC_5();
 if (!VAR_13) {
  VAR_16 = -VAR_2;
  goto err_free_button;
 }

 VAR_15 = FUNC_2(VAR_11);
 FUNC_12(VAR_15, VAR_9);
 FUNC_11(VAR_12->phys, sizeof(VAR_12->phys), "%s/buttons", VAR_14);

 VAR_13->name = VAR_15;
 VAR_13->phys = VAR_12->phys;
 VAR_13->id.bustype = VAR_0;
 VAR_13->dev.parent = &VAR_11->dev;
 FUNC_8(VAR_13, VAR_3, VAR_6);
 FUNC_8(VAR_13, VAR_3, VAR_5);
 FUNC_8(VAR_13, VAR_3, VAR_8);
 FUNC_8(VAR_13, VAR_3, VAR_7);

 VAR_16 = FUNC_7(VAR_13);
 if (VAR_16)
  goto err_free_input;

 FUNC_4(&VAR_11->dev, 1);
 FUNC_3(&VAR_11->dev,
   "%s [%s]\n", VAR_15, FUNC_0(VAR_11));
 return 0;

 err_free_input:
 FUNC_6(VAR_13);
 err_free_button:
 FUNC_9(VAR_12);
 return VAR_16;
}
