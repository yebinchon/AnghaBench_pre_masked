
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct cmpc_accel {int g_select; int sensitivity; int inputdev_state; } ;
struct acpi_device {int dev; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct acpi_device*,char*,int ) ;
 struct input_dev* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct cmpc_accel*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct cmpc_accel*) ;
 struct cmpc_accel* FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct acpi_device *VAR_8)
{
 int VAR_9;
 struct input_dev *VAR_10;
 struct cmpc_accel *VAR_11;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_11->inputdev_state = VAR_0;

 VAR_11->sensitivity = VAR_2;
 FUNC_1(VAR_8->handle, VAR_11->sensitivity);

 VAR_9 = FUNC_5(&VAR_8->dev, &VAR_7);
 if (VAR_9)
  goto failed_sensitivity;

 VAR_11->g_select = VAR_1;
 FUNC_0(VAR_8->handle, VAR_11->g_select);

 VAR_9 = FUNC_5(&VAR_8->dev, &VAR_5);
 if (VAR_9)
  goto failed_g_select;

 VAR_9 = FUNC_2(VAR_8, "cmpc_accel_v4",
         VAR_6);
 if (VAR_9)
  goto failed_input;

 VAR_10 = FUNC_3(&VAR_8->dev);
 FUNC_4(&VAR_10->dev, VAR_11);

 return 0;

failed_input:
 FUNC_6(&VAR_8->dev, &VAR_5);
failed_g_select:
 FUNC_6(&VAR_8->dev, &VAR_7);
failed_sensitivity:
 FUNC_7(VAR_11);
 return VAR_9;
}
