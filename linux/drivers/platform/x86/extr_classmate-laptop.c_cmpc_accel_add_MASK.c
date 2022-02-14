
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct cmpc_accel {int sensitivity; } ;
struct acpi_device {int dev; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct acpi_device*,char*,int ) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct cmpc_accel*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct cmpc_accel*) ;
 struct cmpc_accel* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_5)
{
 int VAR_6;
 struct input_dev *VAR_7;
 struct cmpc_accel *VAR_8;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->sensitivity = VAR_0;
 FUNC_0(VAR_5->handle, VAR_8->sensitivity);

 VAR_6 = FUNC_4(&VAR_5->dev, &VAR_4);
 if (VAR_6)
  goto failed_file;

 VAR_6 = FUNC_1(VAR_5, "cmpc_accel",
         VAR_3);
 if (VAR_6)
  goto failed_input;

 VAR_7 = FUNC_2(&VAR_5->dev);
 FUNC_3(&VAR_7->dev, VAR_8);

 return 0;

failed_input:
 FUNC_5(&VAR_5->dev, &VAR_4);
failed_file:
 FUNC_6(VAR_8);
 return VAR_6;
}
