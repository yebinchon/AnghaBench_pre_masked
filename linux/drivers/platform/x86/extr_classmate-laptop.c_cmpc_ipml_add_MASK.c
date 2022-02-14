
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipml200_dev {int * rf; int bd; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct acpi_device {int dev; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int *,int ,int *,struct backlight_properties*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct ipml200_dev*) ;
 int FUNC_4 (struct ipml200_dev*) ;
 struct ipml200_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 int * FUNC_7 (char*,int *,int ,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_6)
{
 int VAR_7;
 struct ipml200_dev *VAR_8;
 struct backlight_properties VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_6(&VAR_9, 0, sizeof(struct backlight_properties));
 VAR_9.type = VAR_0;
 VAR_9.max_brightness = 7;
 VAR_8->bd = FUNC_2("cmpc_bl", &VAR_6->dev,
          VAR_6->handle, &VAR_4,
          &VAR_9);
 if (FUNC_0(VAR_8->bd)) {
  VAR_7 = FUNC_1(VAR_8->bd);
  goto out_bd;
 }

 VAR_8->rf = FUNC_7("cmpc_rfkill", &VAR_6->dev, VAR_3,
    &VAR_5, VAR_6->handle);





 if (VAR_8->rf) {
  VAR_7 = FUNC_9(VAR_8->rf);
  if (VAR_7) {
   FUNC_8(VAR_8->rf);
   VAR_8->rf = ((void*)0);
  }
 }

 FUNC_3(&VAR_6->dev, VAR_8);
 return 0;

out_bd:
 FUNC_4(VAR_8);
 return VAR_7;
}
